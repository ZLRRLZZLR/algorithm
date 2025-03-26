#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;


//最长回文子串
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param A string字符串
//     * @return int整型
//     */
//    int getLongestPalindrome(string A) {
//        int n = A.size();
//        int ret = 1;
//        for (int i = 0; i < n; i++)
//        {
//            int left = i - 1, right = i + 1;
//            while (left >= 0 && right < n && A[right] == A[left])
//            {
//                right++;
//                left--;
//            }
//            ret = max(ret, right - left - 1);
//
//            left = i, right = i + 1;
//            while (left >= 0 && right < n && A[right] == A[left])
//            {
//                right++;
//                left--;
//            }
//            ret = max(ret, right - left - 1);
//        }
//        return ret;
//    }
//};
//笔试强训day-9
//扑克牌顺子（排序）
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param numbers int整型vector
//     * @return bool布尔型
//     */
//    bool IsContinuous(vector<int>& numbers) {
//        bool hash[14] = { 0 };
//        int maxval = INT_MIN;
//        int minval = INT_MAX;
//        for (auto x : numbers)
//        {
//            if(x)
//            {
//                if (hash[x]) return false;
//                maxval = max(x, maxval);
//                minval = min(x, minval);
//                hash[x] = true;
//            }
//            if (hash[x] >= 2 && x != 0) return false;
//        }
//        return maxval - minval <= 4;
//    }
//};

//int main()
//{
//	vector<int> numbers = { 0,3,2,6,4 };
//
//	Solution().IsContinuous(numbers);
//
//    return 0;
//}

//增减字符串匹配（easy）
//class Solution {
//public:
//    vector<int> diStringMatch(string s) {
//        int n = s.size();
//        vector<int> ret;
//        int left = 0, right = n;
//        for (auto ch : s)
//        {
//            if (ch == 'I')
//                ret.push_back(left++);
//            else
//                ret.push_back(right--);
//        }
//        ret.push_back(left);
//        return ret;
//    }
//};

//最长回文串（easy）
//class Solution {
//public:
//    int longestPalindrome(string s) {
//        int hash[256] = { 0 };
//        for (auto ch : s) hash[ch]++;
//
//        int ret = 0;
//        for (int i = 0; i < 256; i++)
//        {
//            ret += hash[i] / 2 * 2;
//        }
//
//        return ret == s.size() ? ret : ret + 1;
//    }
//};
//笔试强训day-8
//字母收集
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    int n = 0, m = 0;
//    cin >> n >> m;
//    vector<vector<char>> grid(n, vector<char>(m));
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> grid[i][j];
//        }
//    }
//
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            int tmp = 0;
//            if (grid[i - 1][j - 1] == 'l') tmp = 4;
//            if (grid[i - 1][j - 1] == 'o') tmp = 3;
//            if (grid[i - 1][j - 1] == 'v') tmp = 2;
//            if (grid[i - 1][j - 1] == 'e') tmp = 1;
//
//            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + tmp;
//        }
//    }
//    cout << dp[n][m] << endl;
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")
//// 64 位输出请用 printf("%lld")

//数组中的最长连续子序列
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * max increasing subsequence
//     * @param arr int整型vector the array
//     * @return int整型
//     */
//    int MLS(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        int n = arr.size();
//        int count = 1, ret = 1;
//        for (int i = 0; i < n;) {
//            int j = i + 1, count = 1;
//            while (j < n)
//            {
//                if (arr[j] - arr[j - 1] == 1)
//                {
//                    j++;
//                    count++;
//                }
//                else if (arr[j] - arr[j - 1] == 0)
//                {
//                    j++;
//                }
//                else
//                {
//                    break;
//                }
//            }
//            ret = max(ret, count);
//            i = j;
//            count = 0;
//        }
//        return ret;
//    }
//};
//求最小公倍数
//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//    if (b == 0) return a;
//
//    return gcd(b, a % b);
//}
//
////求a,b最小公倍数 a * b / 最大公约数
////求最大公约数 辗转相除法
//int main() {
//    int a = 0, b = 0;
//    cin >> a >> b;
//    cout << (a * b / gcd(a, b)) << endl;
//}
//// 64 位输出请用 printf("%lld")
//class Solution {
//public:
//    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size();
//        vector<int> aim(n);
//        for (int i = 0; i < n; i++) aim[i] = i;
//        sort(aim.begin(), aim.end(), [&](int& a, int b) {
//            return nums2[a] < nums2[b];
//            });
//        sort(nums1.begin(), nums1.end());
//        vector<int> ret(n);
//        int left = 0, right = n - 1;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums1[i] < nums2[aim[left]])
//                ret[aim[right--]] = nums1[i];
//            else
//                ret[aim[left++]] = nums1[i];
//        }
//
//        return ret;
//    }
//};
//int main()
//{
//	vector<int> nums1 = { 2,0,4,1,2 };
//	vector<int> nums2 = { 1,3,0,0,2 };
//	Solution s;
//	vector<int> ret = s.advantageCount(nums1, nums2);
//	for (auto x : ret) cout << x << " ";
//	cout << endl;
//
//
//    return 0;
//}
//排序 ''索引''
//class Solution {
//public:
//    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        vector<int> aim;
//        int n = names.size();
//        for (int i = 0; i < n; i++) {
//            aim.emplace_back(i);
//        }
//        sort(aim.begin(), aim.end(), [&](int i, int j) {
//            return heights[i] > heights[j];
//            });
//        vector<string> ret;
//        for (auto x : aim) ret.emplace_back(names[x]);
//        return ret;
//    }
//};
//2418. 按身高排序 哈希表法
//class Solution {
//public:
//    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        map<int, string>hash;
//        int n = names.size();
//        for (int i = 0; i < n; i++) {
//            hash.emplace(heights[i], names[i]);
//        }
//        auto begin = hash.begin();
//        vector<string> ret;
//        while (begin != hash.end()) {
//            ret.insert(ret.begin(), begin->second);
//            begin++;
//        }
//        return ret;
//    }
//};
//
//int main() {
//    vector<string> names = { "Mary","John","Emma" };
//    vector<int> heights = { 180,165,170 };
//
//    Solution().sortPeople(names, heights);
//
//    return 0;
//}
//K 次取反后最大化的数组和（easy）
//class Solution {
//public:
//    int largestSumAfterKNegations(vector<int>& nums, int k) {
//        priority_queue<int, vector<int>, greater<int>> q(nums.begin(), nums.end());
//        while (k--) {
//            int top = q.top();
//            q.pop();
//            q.emplace(-top);
//        }
//        int sum = 0;
//        while (q.size()) {
//            sum += q.top();
//            q.pop();
//        }
//        return sum;
//    }
//};
//买卖股票的最佳时机 Ⅱ（medium）
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int ret = 0;
//        int n = prices.size();
//        int left = 0, right = 1;
//        while (right < n) {
//            if (prices[right] > prices[left])
//                ret += prices[right] - prices[left];
//            left++;
//            right++;
//        }
//
//        return ret;
//    }
//};
//买卖股票的最佳时机 Ⅱ（medium）
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int ret = 0;
//        int n = prices.size();
//        int left = 0, right = 1;
//        while (right < n) {
//            if (prices[right] <= prices[right - 1]) {
//                ret += prices[right - 1] - prices[left];
//                left = right;
//            }
//            right++;
//        }
//        if (prices[right - 1] != prices[left])
//            ret += prices[right - 1] - prices[left];
//
//        return ret;
//    }
//};
//买卖股票的最佳时机（easy）
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int prevmin = INT_MAX, cur = 0, n = prices.size(), ret = 0;
//        while (cur < n - 1) {
//            prevmin = min(prevmin, prices[cur++]);
//            ret = max(prices[cur] - prevmin, ret);
//        }
//        return ret;
//    }
//};
//最长连续递增序列（easy）
//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int left = 0, right = 1, n = nums.size();
//        int ret = 1;
//        while (right < n) {
//            if (nums[right] <= nums[right - 1]) left = right;
//            else ret = max(right - left + 1, ret);
//            right++;
//        }
//        return ret;
//    }
//};
//递增的三元子序列（medium）
//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int a = nums[0], b = INT_MAX;
//        int n = nums.size();
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > b) return true;
//            else if (nums[i] > a) b = nums[i];
//            else a = nums[i];
//        }
//        return false;
//    }
//};

//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        vector<int> ret;
//        ret.emplace_back(nums[0]);
//        int n = nums.size();
//        for (int i = 0; i < nums.size(); i++) {
//            if (ret.size() == 3) return true;
//            if (nums[i] > ret.back()) ret.emplace_back(nums[i]);
//            int left = 0, right = ret.size() - 1;
//            while (left < right) {
//                int mid = (left + right) >> 1;
//                if (nums[i] > ret[mid]) left = mid + 1;
//                else right = mid;
//            }
//            ret[left] = nums[i];
//        }
//        return ret.size() == 3 ? true : false;
//    }
//};
//最长递增子序列（medium）
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> ret;
//        ret.emplace_back(nums[0]);
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > ret.back()) ret.emplace_back(nums[i]);
//            int left = 0,right = ret.size() - 1;
//            while (left < right) {
//                int mid = (left + right) >> 1;
//                if (nums[i] > ret[mid]) left = mid + 1;
//                else  right = mid;
//            }
//            ret[left] = nums[i];
//        }
//        return ret.size();
//    }
//};

//摆动序列（medium）
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int left = 0;
//        int ret = 0;
//        for (int i = 0; i < nums.size() - 1; i++) {
//            int right = nums[i + 1] - nums[i];
//            if (!right) continue;
//            if (left * right <= 0) {
//                ret++;
//                left = right;
//            }
//        }
//        return ret + 1;
//    }
//};
//class Solution
//{
//public:
//	string largestNumber(vector<int>& nums)
//	{
//		// 优化：把所有的数转化成字符串
//		vector<string> strs;
//		for (int x : nums) strs.push_back(to_string(x));
//		// 排序
//		sort(strs.begin(), strs.end(), [](const string& s1, const string& s2)
//			{
//				return s1 + s2 > s2 + s1;
//			});
//		// 提取结果
//		string ret;
//		for (auto& s : strs) ret += s;
//		if (ret[0] == '0') return "0";
//		return ret;
//	}
//};
//最大数（medium）
//class Solution {
//public:
//    string largestNumber(vector<int>& nums) {
//        sort(nums.begin(), nums.end(), [](int a, int b) {
//            string s1, s2;
//
//            s1 += to_string(a) + to_string(b);
//            s2 += to_string(b) + to_string(a);
//            return s1 > s2;
//            });
//        string ret;
//        for (auto x : nums) ret += to_string(x);
//
//        if (ret[0] == '0') return "0";
//        return ret;
//    }
//};
//
//int main() {
//	Solution s;
//	vector<int> nums = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//	cout << s.largestNumber(nums) << endl;
//	return 0;
//}


//将数组和减半的最少操作次数（medium）
//class Solution {
//public:
//    int halveArray(vector<int>& nums) {
//        priority_queue<double> heap;
//        double sum = 0;
//        for (auto i : nums) {
//            sum += i;
//            heap.emplace(i);
//        }
//
//        int ret = 0;
//        double aim = sum / 2;
//        while (sum > aim) {
//            ret++;
//            double top = heap.top() / 2;
//            sum -= top;
//            heap.pop();
//            heap.emplace(top);
//        }
//
//        return ret;
//    }
//};
//柠檬水找零（easy）
//class Solution {
//public:
//    bool lemonadeChange(vector<int>& bills) {
//        int five = 0, ten = 0;
//        for (auto i : bills) {
//            if (i == 5) five++;
//            if (i == 10) {
//                if (five == 0) return false;
//                else {
//                    five--;
//                    ten++;
//                }
//            }
//            if (i == 20) {
//                if (ten && five) {
//                    ten--;
//                    five--;
//                }
//                else if (five >= 3) {
//                    five -= 3;
//                }
//                else return false;
//            }
//        }
//        return true;
//    }
//};
//int main() {
//    Solution s;
//    vector<int> bills = { 5,5,5,5,10,5,10,10,10,20 };
//    cout << s.lemonadeChange(bills) << endl;
//    return 0;
//}