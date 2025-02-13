#include<iostream>
#include<queue>
#include<stack>	

using namespace std;

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