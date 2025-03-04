#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//完全背包（medium）
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int n, V;
//
//int main() {
//    cin >> n >> V;
//    vector<int> v(n), w(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i] >> w[i];
//    }
//    vector<vector<int>> dp1(n + 1, vector<int>(V + 1));
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= V; j++) {
//            dp1[i][j] = dp1[i - 1][j];
//            if (j >= v[i - 1]) dp1[i][j] = max(dp1[i][j], dp1[i][j - v[i - 1]] + w[i - 1]);
//        }
//    }
//    cout << dp1[n][V] << endl;
//    vector<vector<int>> dp2(n + 1, vector<int>(V + 1));
//    for (int j = 1; j <= V; j++) dp2[0][j] = -1;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 0; j <= V; j++) {
//            dp2[i][j] = dp2[i - 1][j];
//            if (j >= v[i - 1] && dp2[i][j - v[i - 1]] != -1)
//                dp2[i][j] = max(dp2[i][j], dp2[i][j - v[i - 1]] + w[i - 1]);
//        }
//    }
//    cout << (dp2[n][V] == -1 ? 0 : dp2[n][V]) << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")