

///**求根节点到叶节点数字之和（medium）
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    int sumNumbers(TreeNode* root) {
//        return _sumNumbers(root, 0);
//    }
//    int _sumNumbers(TreeNode* root, int presum) {
//        presum = presum * 10 + root->val;
//        if (root->left == nullptr && root->right == nullptr)
//            return presum;
//        int ret = 0;
//        if (root->left) ret += _sumNumbers(root->left, presum);
//        if (root->right) ret += _sumNumbers(root->right, presum);
//        return ret;
//    }
//};
///**计算布尔二叉树的值（medium）
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    bool evaluateTree(TreeNode* root) {
//        if (root->left == nullptr) return root->val;
//        bool left = evaluateTree(root->left);
//        bool right = evaluateTree(root->right);
//        return root->val == 2 ? left || right : left && right;
//    }
//};