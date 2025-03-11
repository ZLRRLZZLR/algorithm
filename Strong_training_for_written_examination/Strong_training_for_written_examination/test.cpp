#include <cmath>
#include<iostream>
#include<stdio.h>

using namespace std;

//笔试强训day-3
//除2
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main() {
//    int n = 0, k = 0;
//    cin >> n >> k;
//    long long ret = 0;
//    long long tmp = 0;
//    priority_queue<long long> pq;
//    while (cin >> tmp) {
//        if (tmp % 2 == 0) pq.emplace(tmp);
//        ret += tmp;
//    }
//    while (pq.size() && k--) {
//        long long top = pq.top() / 2;
//        ret -= top;
//        pq.pop();
//        if (top % 2 == 0) pq.emplace(top);
//    }
//
//    cout << ret;
//    return 0;
//}
//滑动窗口
//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//
//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//    int sum = 0;
//    int n = 0, x = 0;
//    cin >> n >> x;
//    vector<int> arr(n + 1);
//    int l = 0, len = 0x3f3f3f3f;
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//
//    for (int left = 1, right = 1; right <= n; right++) {
//        sum += arr[right];
//        while (sum >= x) {
//            if (right - left + 1 < len) {
//                len = right - left + 1;
//                l = left;
//            }
//            sum -= arr[left];
//            left++;
//        }
//    }
//
//    cout << l << " " << l + len - 1;
//    return 0;
//}


//笔试强训day-2
//数组中两个字符串的最小距离
//using namespace std;
//
//int main() {
//    int prev1 = -1;
//    int prev2 = -1;
//    int n = 0;
//    cin >> n;
//    string s1;
//    string s2;
//    cin >> s1 >> s2;
//    int ret = 0x3f3f3f3f;
//    string s;
//    for (int i = 0; i < n; i++) {
//        cin >> s;
//        if (s == s1) prev1 = i;
//        if (s == s2) prev2 = i;
//        if (prev1 != -1 && prev2 != -1) ret = min(ret, abs(prev1 - prev2));
//    }
//    if (prev1 == -1 || prev2 == -1) cout << -1;
//    else cout << ret;
//    return 0;
//}

//最小花费爬楼梯
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param cost int整型vector
//     * @return int整型
//     */
//    int minCostClimbingStairs(vector<int>& cost) {
//        int dp[100010] = { 0 };
//        int n = cost.size();
//        for (int i = 2; i <= n; i++)
//            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//
//        return dp[n];
//    }
//};
//牛牛的快递：本题未能正确处理（int）强转后不会进位的问题
//#include<iostream>
//using namespace std;
//
//int main() {
//    float a = 0;
//    char b = 0;
//    int ret = 0;
//    cin >> a >> b;
//    if (a <= 1) ret += 20;
//    else {
//        ret += 20;
//        float c = a - 1;
//        if (c - (int)c > 0) ret += c + 1;
//        else ret += c;
//    }
//    if (b == 'y') ret += 5;
//    cout << ret;
//    return 0;
//}
//两个数的交集
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param nums1 int整型vector
//     * @param nums2 int整型vector
//     * @return int整型vector
//     */
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        bool hash[1002] = { false };
//        vector<int> ret;
//        for (auto i : nums1) hash[i] = true;
//
//        for (auto i : nums2)
//            if (hash[i]) {
//                hash[i] = false;
//                ret.emplace_back(i);
//            }
//
//        return ret;
//    }
//};
// 数字统计
//int main() {
//    int ret = 0;
//    int left = 0, right = 0;
//    scanf("%d%d", &left, &right);
//    for (int i = left; i <= right; i++) {
//        int tmp = i;
//        while (tmp) {
//            if ((tmp % 10) == 2) ret++;
//            tmp /= 10;
//        }
//    }
//    printf("%d", ret);
//    return 0;
//}