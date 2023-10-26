/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

int suma(TreeNode* root, int low, int high){
    if(!root) return 0;

    if(root->val < low){
        return suma(root->right,low,high); //si el valor del nodo es menor al valor que buscamos, busca en el subarbol derecho
    }else if(root->val>high){
        return suma(root->left,low,high); //si el valor del nodo es mayor al valor que buscamos, busca en el subarbol izquierdo
    }

    else{
        return root->val+suma(root->left,low,high)+suma(root->right,low,high); //si el valor del nodo es igual al valor que buscamos, regresa el nodo y la suma de los subarboles
    }
}


class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return suma(root,low,high);
    }
};