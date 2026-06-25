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
   int maxSum;
   int Solve(TreeNode* root){
    if(root == NULL) 
        return 0; 
        int l = Solve(root->left);
        int r = Solve(root->right);

        int neeche_wala = l+r+root->val;
        int koi_ek = max(l, r) + root->val;
        int only_root = root->val;

        maxSum = max({maxSum,neeche_wala,koi_ek, only_root});
        return max(koi_ek, only_root);
   }

   int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        Solve(root);
        return maxSum;
    }
};