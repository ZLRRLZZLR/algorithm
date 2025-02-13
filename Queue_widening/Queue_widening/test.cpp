#include<iostream>
#include<queue>
#include<stack>	

using namespace std;

///**¶þ²æÊ÷µÄ¾â³ÝÐÎ²ãÐò±éÀú£¨medium£©
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
//        vector<vector<int>> ret;
//        if (root == nullptr) return ret;
//        queue<TreeNode*> q;
//        q.emplace(root);
//        int levelsize = 1;
//        int level = 0;
//        while (q.size()) {
//            vector<int> tmp;
//            while (levelsize) {
//                TreeNode* cur = q.front();
//                q.pop();
//                levelsize--;
//                tmp.emplace_back(cur->val);
//                if (cur->left) q.emplace(cur->left);
//                if (cur->right) q.emplace(cur->right);
//            }
//            ret.emplace_back(tmp);
//            levelsize = q.size();
//            if (level % 2 != 0) reverse(ret[level].begin(), ret[level].end());
//            level++;
//        }
//        return ret;
//    }
//};

//N ²æÊ÷µÄ²ãÐò±éÀú£¨medium£©
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