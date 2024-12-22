
//��Ϊ k �������飨medium��
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//
//        int sum = 0, ret = 0;
//        for (auto e : nums) {
//            sum += e;
//            if (hash.count(sum - k)) ret += hash[sum - k];
//            hash[sum]++;
//        }
//        return ret;
//    }
//};
//��������������ĳ˻���medium��
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n, 1), g(n, 1), ret(n);
//        for (int i = 1; i < n; i++) {
//            f[i] = f[i - 1] * nums[i - 1];
//        }
//        for (int i = n - 2; i >= 0; i--) {
//            g[i] = g[i + 1] * nums[i + 1];
//        }
//        for (int i = 0; i < n; i++)
//            ret[i] = f[i] * g[i];
//
//        return ret;
//    }
//};
//
//Ѱ������������±꣨easy��
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n), g(n);
//        for (int i = 1; i < n; i++) {
//            f[i] = f[i - 1] + nums[i - 1];
//        }
//        for (int i = n - 2; i >= 0; i--) {
//            g[i] = g[i + 1] + nums[i + 1];
//        }
//
//        for (int i = 0; i < n; i++) {
//            if (f[i] == g[i])
//                return i;
//        }
//        return -1;
//    }
//};
//��ģ�塿��άǰ׺�ͣ�medium��
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0, m = 0, q = 0;
//    cin >> n >> m >> q;
//    vector<vector<int>> nums(n + 1, vector<int>(m + 1));
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> nums[i][j];
//        }
//    }
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i][j];
//        }
//    }
//    int x1, x2, y1, y2;
//    while (q--) {
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1] << endl;
//    }
//}
// 64 λ������� printf("%lld")
// 64 λ������� printf("%lld")

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