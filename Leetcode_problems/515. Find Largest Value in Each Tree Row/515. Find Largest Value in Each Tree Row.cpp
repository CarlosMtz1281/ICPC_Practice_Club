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

void helper(vector<int> &v,TreeNode* node, int d){
    if(node==nullptr) return; //si el nodo es nullptr, regresa

    if(d==v.size()){
        v.push_back(node->val); //si el nivel es igual al tamaño del vector, agrega el valor del nodo al vector
    }else{
        v[d]=max(v[d],node->val); //si el nivel es menor al tamaño del vector, compara el valor del nodo con el valor del vector en el nivel d
    }
    helper(v,node->right,d+1); //busca en el subarbol derecho
    helper(v,node->left,d+1); //busca en el subarbol izquierdo
}

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res; //vector para guardar los valores mas grandes de cada nivel
        helper(res,root,0); 
        return res; //regresa el vector
    }
};