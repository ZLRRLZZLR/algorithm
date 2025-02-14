#include<iostream>
#include<queue>
#include<stack>	

using namespace std;


//二叉树的最大宽度（medium）
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//
///**
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
//    int widthOfBinaryTree(TreeNode* root) {
//        queue<pair<TreeNode*, unsigned int>> q;
//        unsigned int ret = 0;
//        if (root == nullptr) return ret;
//        q.push({ root,1 });
//        int levelsize = 1;
//        while (q.size()) {
//            unsigned int tmp = q.back().second - q.front().second + 1;
//            ret = max(ret, tmp);
//            while (levelsize) {
//                pair<TreeNode*, unsigned int> cur = q.front();
//                q.pop();
//                levelsize--;
//                if (cur.first->left) q.push({ cur.first->left,cur.second * 2 });
//                if (cur.first->right) q.push({ cur.first->right,cur.second * 2 + 1 });
//            }
//            levelsize = q.size();
//        }
//        return ret;
//    }
//};
//
//int main() {
//	TreeNode* root = new TreeNode(1);   
//	root->left = new TreeNode(3);   
//	root->right = new TreeNode(2);  
//	root->left->left = new TreeNode(5); 
//	root->left->right = new TreeNode(3);    
//	root->right->right = new TreeNode(9);   
//    Solution().widthOfBinaryTree(root);
//    return 0;
//}

///**二叉树的锯齿形层序遍历（medium）
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
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //vector<vector<int>> ret;
        //if (root == nullptr) return ret;
        //queue<TreeNode*> q;
        //q.emplace(root);
        //int levelsize = 1;
        //int level = 0;
        //while (q.size()) {
        //    vector<int> tmp;
        //    while (levelsize) {
        //        TreeNode* cur = q.front();
        //        q.pop();
        //        levelsize--;
        //        tmp.emplace_back(cur->val);
        //        if (cur->left) q.emplace(cur->left);
        //        if (cur->right) q.emplace(cur->right);
        //    }
        //    ret.emplace_back(tmp);
        //    levelsize = q.size();
        //    if (level % 2 != 0) reverse(ret[level].begin(), ret[level].end());
        //    level++;
        //}
        //return ret;
//    }
//};

//N 叉树的层序遍历（medium）
///*
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//*/
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(Node* root) {
//        vector<vector<int>> ret;
//        if (root == nullptr) return ret;
//        queue<Node*> q;
//        q.emplace(root);
//        int levelsize = 1;
//        while (q.size()) {
//            vector<int> tmp;
//            while (levelsize) {
//                Node* cur = q.front();
//                q.pop();
//                levelsize--;
//                tmp.emplace_back(cur->val);
//                for (auto ch : cur->children) {
//                    q.emplace(ch);
//                }
//            }
//            ret.emplace_back(tmp);
//            levelsize = q.size();
//        }
//        return ret;
//    }
//};