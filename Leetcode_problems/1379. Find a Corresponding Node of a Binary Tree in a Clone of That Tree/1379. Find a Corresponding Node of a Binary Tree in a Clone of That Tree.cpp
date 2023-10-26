/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



class Solution {
public:
    TreeNode* ans; //variable para guardar el nodo que buscamos
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned==nullptr){ 
        return cloned; //si el nodo clonado es nulo, regresa el nodo clonado
    }

    if(cloned->val==target->val){ 
        ans=cloned; //si el nodo clonado es igual al nodo que buscamos, guardamos el nodo clonado en la variable ans
    }

    getTargetCopy(original,cloned->left,target); 
    getTargetCopy(original,cloned->right,target); 
    return ans;
    }

};