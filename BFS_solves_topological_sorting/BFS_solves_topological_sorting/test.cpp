#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

//课程表II（medium）
//class Solution {
//public:
//    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//        unordered_map<int, vector<int>> edges;
//        vector<int> in(numCourses);
//        vector<int> ret;
//        for (auto& i : prerequisites) {
//            int a = i[0], b = i[1];
//            edges[b].push_back(a);
//            in[a]++;
//        }
//
//        queue<int> q;
//        for (int i = 0; i < numCourses; i++) {
//            if (in[i] == 0) q.emplace(i);
//        }
//
//        while (q.size()) {
//            auto  front = q.front();
//            ret.emplace_back(front);
//            q.pop();
//
//            for (auto j : edges[front]) {
//                in[j]--;
//                if (in[j] == 0) q.emplace(j);
//            }
//        }
//
//        for (auto i : in)
//            if (i)
//                return vector<int>();
//
//        return ret;
//    }
//};

//课程表（medium）
//class Solution {
//public:
//    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//        unordered_map<int, vector<int>> edges;
//        vector<int> in(numCourses);
//
//        for (auto& i : prerequisites) {
//            int a = i[0], b = i[1];
//            edges[b].push_back(a);
//            in[a]++;
//        }
//
//        queue<int> q;
//        for (int i = 0; i < numCourses; i++) {
//            if (in[i] == 0) q.emplace(i);
//        }
//
//        while (q.size()) {
//            auto  front = q.front();
//            q.pop();
//
//            for (auto j : edges[front]) {
//                in[j]--;
//                if (in[j] == 0) q.emplace(j);
//            }
//        }
//
//        for (auto i : in)
//            if (i)
//                return false;
//
//        return true;
//    }
//};