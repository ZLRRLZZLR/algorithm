
//��ģ�塿ǰ׺��
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    int in = 0, q = 0, n = 0;
//    cin >> n >> q;
//    vector<long long> nums, dp(n + 1);
//    long tmp = n;
//
//    while (tmp--) { // ע�� while ������ case
//        cin >> in;
//        nums.push_back(in);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        dp[i] = dp[i - 1] + nums[i - 1];
//    }
//
//    while (q--) {
//        int l = 0, r = 0;
//        cin >> l >> r;
//        cout << dp[r] - dp[l - 1] << " " << endl;
//    }
//    return 0;
//}
// 64 λ������� printf("%lld")
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    int in = 0, q = 0, n = 0;
//    cin >> n >> q;
//    vector<int> nums, dp(n + 1);
//    while (n--) { // ע�� while ������ case
//        cin >> in;
//        nums.push_back(in);
//    }
//    for (int i = 1; i <= n; i++) {
//        dp[i] = dp[i - 1] + nums[i - 1];
//    }
//    while (q--) {
//        int l = 0, r = 0;
//        cin >> l >> r;
//        cout << dp[r] - dp[l - 1] << " " << endl;
//    }
//    return 0;
//}
//// 64 λ������� printf("%lld")