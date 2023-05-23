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
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return(solve(root, LLONG_MIN ,LLONG_MAX ));
    }
     bool solve(TreeNode* node, long long left, long long right){

        if (node == NULL){
            return true;
        }
        if (left < node -> val &&  node -> val < right){
            return (solve(node ->left, left,node -> val)&& solve(node -> right, node -> val,right));
        } else {return false;}
     }
};