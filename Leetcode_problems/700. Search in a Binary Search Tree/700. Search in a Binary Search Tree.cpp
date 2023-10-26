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

TreeNode* subtree(TreeNode* root, int val){
    if(!root) return nullptr; //si el arbol esta vacio, regresa nullptr

    if(root->val ==val){ //si el valor del nodo es igual al valor que buscamos, regresa el nodo
        return root;
    }
    if(root->val < val ){
        return subtree(root->right,val); //si el valor del nodo es menor al valor que buscamos, busca en el subarbol derecho
    }else if(root->val > val){
        return subtree(root->left,val); //si el valor del nodo es mayor al valor que buscamos, busca en el subarbol izquierdo
    } 
    return subtree(root,val);  
}

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return subtree(root,val);
    }
};