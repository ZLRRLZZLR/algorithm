#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

//ì³²¨ÄÇÆõÊý
//class Solution {
//    int menu[31];
//public:
//    int fib(int n) {
//        memset(menu, -1, sizeof(menu));
//        dfs(n);
//        return menu[n];
//    }
//
//    int dfs(int n) {
//        if (menu[n] != -1) {
//            return menu[n];
//        }
//        if (n == 1 || n == 0) {
//            menu[n] = n;
//            return menu[n];
//        }
//
//        menu[n] = dfs(n - 1) + dfs(n - 2);
//        return menu[n];
//    }
//};