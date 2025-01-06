
///**二叉搜索树中第 k 小的元素（medium）
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
//    int count;
//    int ret;
//public:
//    int kthSmallest(TreeNode* root, int k) {
//        count = k;
//        dfs(root);
//        return ret;
//    }
//    void dfs(TreeNode* root) {
//        if (root == nullptr || count == 0) return;
//        dfs(root->left);
//        count--;
//        if (count == 0) ret = root->val;
//        dfs(root->right);
//    }
//};
///**验证二叉搜索树（medium）
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
//    long pre = LONG_MIN;
//public:
//    bool isValidBST(TreeNode* root) {
//        if (root == nullptr) return true;
//        bool left = isValidBST(root->left);
//        if (left == false) return false;
//
//        bool cur = false;
//        if (pre < root->val)
//            cur = true;
//        if (cur == false) return false;
//
//        pre = root->val;
//        bool right = isValidBST(root->right);
//
//        return left && right && cur;
//    }
//};
///**二叉树剪枝（medium）
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
//    TreeNode* pruneTree(TreeNode* root) {
//        if (root == nullptr)
//            return nullptr;
//        root->left = pruneTree(root->left);
//        root->right = pruneTree(root->right);
//        if (root->left == nullptr && root->right == nullptr && root->val == 0)
//        {
//            root = nullptr;
//        }
//        return root;
//    }
//};
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