#include <iostream>
using namespace std;

// base class

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int helper (BST* node, int target, int acum){
  //condition to update clostest value
  if ( abs(target - node-> value ) < abs(target - acum)){
    acum = node-> value;
  }
  //analize if we go left or right in the tree
  if (target < node -> value && node -> left != NULL){
    acum = helper(node-> left, target, acum);
  }else if (target > node -> value && node -> right != NULL){
    acum = helper(node-> right, target, acum);
  }
  // return closest value in variable ""acum""
  return acum;
}

// principal function
int findClosestValueInBst(BST *tree, int target) {

  return helper(tree, target, 100000);
}



