#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

//距离相等的条形码（medium）
//class Solution {
//public:
//    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
//        unordered_map<int, int>hash;
//        int maxval = 0, maxcount = 0;
//        for (auto i : barcodes)
//        {
//            if (++hash[i] > maxcount)
//            {
//                maxval = i;
//                maxcount = hash[i];
//            }
//        };
//        int n = barcodes.size();
//        vector<int> ret(n);
//        int index = 0;
//        for (int i = 0; i < maxcount; i++)
//        {
//            ret[index] = maxval;
//            index += 2;
//        }
//        hash.erase(maxval);
//        for (auto& [x, y] : hash)
//        {
//            for (int i = 0; i < y; i++)
//            {
//                if (index >= n) index = 1;
//                ret[index] = x;
//                index += 2;
//            }
//        }
//        return ret;
//    }
//};

//class Solution {
//public:
//    int maxSumDivThree(vector<int>& nums) {
//        const int INF = 0x3f3f3f3f;
//        int n = nums.size();
//        int sum = 0, x1 = INF, x2 = INF, y1 = INF, y2 = INF;
//        for (auto x : nums)
//        {
//            sum += x;
//            if (x % 3 == 1)
//            {
//                if (x < x1) x2 = x1, x1 = x;
//                else if (x < x2) x2 = x;
//            }
//            else if (x % 3 == 2)
//            {
//                if (x < y1) y2 = y1, y1 = x;
//                else if (x < y2) y2 = x;
//            }
//        }
//        if (sum % 3 == 0) return sum;
//        else if (sum % 3 == 1) return max(sum - x1, sum - y1 - y2);
//        else return max(sum - y1, sum - x1 - x2);
//    }
//};
//可被三整除的最大和
//class Solution {
//public:
//    int maxSumDivThree(vector<int>& nums) {
//        int sum = 0;
//        for (auto i : nums) sum += i;
//        int n = nums.size();
//        int ret = 0;
//
//        if (sum % 3 == 0) return sum;
//
//        else if (sum % 3 == 1)
//        {
//            int x = INT_MAX, y1 = INT_MAX, y2 = INT_MAX;
//            for (int i = 0; i < n; i++)
//            {
//                if (nums[i] % 3 == 1 && nums[i] < x) x = nums[i];
//                if (nums[i] % 3 == 2)
//                {
//                    if (nums[i] < y1)
//                    {
//                        y2 = y1;
//                        y1 = nums[i];
//                    }
//                    else if (nums[i] < y2)
//                    {
//                        y2 = nums[i];
//                    }
//                }
//            }
//            int a = 0, b = 0;
//            if (x != INT_MAX) a = sum - x;
//            if (y1 != INT_MAX && y2 != INT_MAX) b = sum - y1 - y2;
//            ret = max(a, b);
//        }
//        else
//        {
//            int y = INT_MAX, x1 = INT_MAX, x2 = INT_MAX;
//            for (int i = 0; i < n; i++)
//            {
//                if (nums[i] % 3 == 2 && nums[i] < y) y = nums[i];
//                cout << y << endl;
//                if (nums[i] % 3 == 1)
//                {
//                    if (nums[i] < x1)
//                    {
//                        x2 = x1;
//                        x1 = nums[i];
//                    }
//                    else if (nums[i] < x2)
//                    {
//                        x2 = nums[i];
//                    }
//                }
//            }
//            int a = 0, b = 0;
//            if (y != INT_MAX) a = sum - y;
//            if (x1 != INT_MAX && x2 != INT_MAX) b = sum - x1 - x2;
//            ret = max(a, b);
//        }
//        return ret;
//    }
//};

//贪心+二分
//俄罗斯套娃信封问题
//class Solution {
//public:
//    int maxEnvelopes(vector<vector<int>>& envelopes) {
//        sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b)
//            {
//                return a[0] != b[0] ? a[0] < b[0] : a[1] > b[1];
//            });
//
//        int n = envelopes.size();
//        vector<int> ret;
//        ret.push_back(envelopes[0][1]);
//        for (int i = 0; i < n; i++)
//        {
//            int b = envelopes[i][1];
//            if (b > ret.back())
//            {
//                ret.push_back(b);
//            }
//            else
//            {
//                int left = 0, right = ret.size() - 1;
//                while (left < right)
//                {
//                    int mid = (left + right) / 2;
//                    if (ret[mid] >= b) right = mid;
//                    else left = mid + 1;
//                }
//                ret[left] = b;
//            }
//        }
//        return ret.size();
//    }
//};
//堆箱子
//class Solution {
//public:
//    int pileBox(vector<vector<int>>& box) {
//        sort(box.begin(), box.end());
//        int n = box.size();
//        vector<int> dp(n, 0);
//        int ret = 0;
//        for (int i = 0; i < n; i++)
//        {
//            dp[i] = box[i][2];//初始化一下不然求状态方程比较最大值会有问题;
//            for (int j = 0; j < i; j++)
//            {
//                if (box[j][0] < box[i][0] && box[j][1] < box[i][1] && box[j][2] < box[i][2])
//                    dp[i] = max(dp[i], dp[j] + box[i][2]);
//            }
//            ret = max(dp[i], ret);
//        }
//        return ret;
//    }
//};


//class Solution {
//public:
//    int maxEnvelopes(vector<vector<int>>& envelopes) {
//        int n = envelopes.size();
//        sort(envelopes.begin(), envelopes.end());
//        vector<int> dp(n, 1);
//        int ret = 1;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (envelopes[j][0] < envelopes[i][0] && envelopes[j][1] < envelopes[i][1])
//                    dp[i] = max(dp[i], dp[j] + 1);
//            }
//            ret = max(dp[i], ret);
//        }
//        return ret;
//    }
//};

//整数替换（medium）
//class Solution {
//    int dfs(long long n)
//    {
//        if (n == 1) return 0;
//        if (n == 3) return 2;
//        if (n % 2 == 0)
//        {
//            return dfs(n / 2) + 1;
//        }
//        else
//        {
//            if (n % 4 == 1)
//                return dfs(n - 1) + 1;
//            else
//                return dfs(n + 1) + 1;
//        }
//    }
//public:
//    int integerReplacement(int n) {
//        return dfs(n);
//    }
//};


//class Solution {
//    unordered_map<long long, int> hash;
//    int dfs(long long n)
//    {
//        if (hash.count(n)) return hash[n];
//        else
//        {
//            if (n == 1)
//            {
//                hash[1] = 0;
//                return 0;
//            }
//            if (n % 2 == 0)
//            {
//                return hash[n] = dfs(n / 2) + 1;
//            }
//            else
//            {
//                return hash[n] = min(dfs(n - 1), dfs(n + 1)) + 1;
//            }
//        }
//    }
//public:
//    int integerReplacement(int n) {
//        return dfs(n);
//    }
//};
//
//int main()
//{
//    Solution().integerReplacement(8);
//    return 0;
//}
//用最少数量的箭引爆气球（medium）
//class Solution {
//public:
//    int findMinArrowShots(vector<vector<int>>& points) {
//        sort(points.begin(), points.end());
//        int right = points[0][1];
//        int count = 1;
//        for (int i = 0; i < points.size(); i++)
//        {
//            int a = points[i][0], b = points[i][1];
//            if (right >= a) right = min(b, right);
//            else
//            {
//                count++;
//                right = b;
//            }
//        }
//
//        return count;
//    }
//};
//无重叠区域
//class Solution {
//public:
//    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//        if (intervals.size() == 1) return 0;
//        sort(intervals.begin(), intervals.end());
//        int n = intervals.size();
//        int count = 0;
//        int right = intervals[0][1];
//        int i = 0;
//        for (; i < n - 1; i++)
//        {
//            int a = intervals[i + 1][0], b = intervals[i + 1][1];
//            if (right > a)
//            {
//                right = min(right, b);
//                count++;
//            }
//            else right = b;
//        }
//
//        return count;
//    }
//};


//合并区间（medium）
//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        if (intervals.size() == 1) return intervals;
//        sort(intervals.begin(), intervals.end());
//        vector<vector<int>> ret;
//        int n = intervals.size();
//        int left = intervals[0][0], right = intervals[0][1];
//        int i = 0;
//        for (; i < n - 1; i++)
//        {
//            int a = intervals[i + 1][0], b = intervals[i + 1][1];
//            if (right >= a)
//            {
//                right = max(right, b);
//            }
//            else
//            {
//                ret.push_back({ left,right });
//                left = a;
//                right = b;
//            }
//        }
//
//        if (i == n - 1) ret.push_back({ left,right });
//
//        return ret;
//    }
//};

//坏了的计算器
//class Solution {
//public:
//    int brokenCalc(int startValue, int target) {
//        int end = target, begin = startValue;
//
//        int ret = 0;
//        while (end != begin) {
//            if (end <= begin) {
//                ret += begin - end;
//                break;
//            }
//            else
//            {
//                ret++;
//                if (end % 2 == 0) end /= 2;
//                else end += 1;
//            }
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//
//    Solution().brokenCalc(5,8);
//    return 0;
//}
//单调递增的数字（medium）
//class Solution
//{
//public:
//	int monotoneIncreasingDigits(int n)
//	{
//		string s = to_string(n); // 把数字转化成字符串
//		int i = 0, m = s.size();
//		// 找第一个递减的位置
//		while (i + 1 < m && s[i] <= s[i + 1]) i++;
//		if (i + 1 == m) return n; // 判断一下特殊情况
//		// 回推
//		while (i - 1 >= 0 && s[i] == s[i - 1]) i--;
//		s[i]--;
//		for (int j = i + 1; j < m; j++) s[j] = '9';
//		return stoi(s);
//	}
//};

//O(nlogn)
//class Solution {
//public:
//    int monotoneIncreasingDigits(int n) {
//        string s = to_string(n);
//        int num = s.size();
//        int tmp = 0;
//        int i = 0;
//        for (; i < num - 1; i++)
//        {
//            int j = i + 1;
//            if (s[i] > s[j]) break;
//        }
//        int ret = 0;
//        tmp = n;
//
//        if (i != num - 1)
//        {
//            for (int j = 0; j < num; j++)
//                if (s[j] == s[i])
//                {
//                    i = j;
//                    break;
//                }
//            ret = tmp / pow(10, num - 1 - i) - 1;
//            for (int k = 0; k < num - i - 1; k++)
//            {
//                ret *= 10;
//                ret += 9;
//            }
//        }
//        return ret == 0 ? n : ret;
//    }
//};


//除10模10
//class Solution {
//public:
//    int monotoneIncreasingDigits(int n) {
//        for (int i = n; i >= 0; i--)
//        {
//            int tmp = i;
//            int prev = tmp % 10;
//            tmp /= 10;
//            int cur = tmp % 10;
//            while (tmp)
//            {
//                if (cur > prev) break;
//                prev = tmp % 10;
//                tmp /= 10;
//                cur = tmp % 10;
//            }
//            if (tmp == 0) return i;
//        }
//        return 0;
//    }
//};
//
//int main()
//{
//
//    Solution().monotoneIncreasingDigits(1234);
//    return 0;
//}
//字符串解法
//class Solution {
//public:
//    int monotoneIncreasingDigits(int n) {
//        for (int i = n; i >= 0; i--)
//        {
//            string s = to_string(i);
//            int num = s.size();
//            for (int j = 0; j <= num;)
//            {
//                int k = j + 1;
//                if (k < num)
//                {
//                    if (s[j] > s[k]) break;
//                }
//                else if (k == num) return i;
//                j = k;
//            }
//        }
//        return 0;
//    }
//};

//int main()
//{
//    Solution().monotoneIncreasingDigits(10);
//}



//加油站（medium）
//class Solution {
//public:
//    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//        int n = gas.size();
//        for (int i = 0; i < n;)
//        {
//            int diff = 0, step = 0;
//            for (; step < n; step++)
//            {
//                int index = (i + step) % n;
//                diff = diff + gas[index] - cost[index];
//                if (diff < 0) break;
//            }
//            if (diff >= 0) return i;
//            i += step + 1;
//        }
//        return -1;
//    }
//};

//跳跃游戏 （medium）
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int end = 0, maxpos = 0, n = nums.size(), i = 0;
//        while (end < n - 1)
//        {
//            while (i <= end)
//            {
//                maxpos = max(maxpos, nums[i] + i);
//                if (maxpos == 0) return false;
//                i++;
//            }
//            i = end + 1;
//            end = maxpos;
//        }
//
//        return true;;
//    }
//};
//
//int main()
//{
//    vector<int> arr = { 3,2,1,0,4 };
//
//    Solution().canJump(arr);
//    return 0;
//
//}

//跳跃游戏 Ⅱ（medium）
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        int end = 0, maxpos = 0, n = nums.size(), i = 0, count = 0;
//        while (end < n - 1)
//        {
//            count++;
//            while (i <= end)
//            {
//                maxpos = max(maxpos, nums[i] + i);
//                i++;
//            }
//            i = end + 1;
//            end = maxpos;
//        }
//
//        return count;
//    }
//};
//int main()
//{
//    vector<int> arr = { 2,3,1,1,4 };
//
//    Solution().jump(arr);
//    return 0;
//
//}

//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 0);
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[j] + j >= i)
//                {
//                    dp[i] = dp[j] + 1;
//                    break;
//                }
//            }
//        }
//        return dp[n - 1];
//    }
//};


//最优出发
//class Solution {
//public:
//    string optimalDivision(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1) return to_string(nums[0]);
//        if (n == 2) return to_string(nums[0]) + "/" + to_string(nums[1]);
//
//        string ret;
//        for (int i = 0; i < n; i++)
//        {
//            ret += to_string(nums[i]);
//            ret += "/";
//            if (i == 0)
//                ret += "(";
//        }
//        ret.back() = ')';
//        return ret;
//    }
//};

//分发糖果
//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s) {
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());
//
//        int n = g.size();
//        int m = s.size();
//
//        int l1 = 0, l2 = 0;
//        while (l1 < n && l2 < m)
//        {
//            while (l1 < n && l2 < m && g[l1] <= s[l2])
//            {
//                l1++;
//                l2++;
//            }
//            while (l1 < n && l2 < m && g[l1] > s[l2])
//            {
//                l2++;
//            }
//        }
//
//        return l1;
//    }
//};
//
//int main()
//{
//    vector<int> g = { 1,2,3 };
//    vector<int> s = { 1,1 };
//
//    Solution().findContentChildren(g,s);
//    return 0;
//}

//过河卒
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//
//int main() {
//    int n = 0, m = 0, x = 0, y = 0;
//    cin >> n >> m >> x >> y;
//
//    x += 1, y += 1;
//    long long dp[25][25] = { 0 };
//
//    dp[0][1] = 1;
//    for (int i = 1; i <= n + 1; i++)
//    {
//        for (int j = 1; j <= m + 1; j++)
//        {
//            if ((abs(i - x) + abs(j - y) == 3 && i != x && j != y) || (i == x && j == y))
//                dp[i][j] = 0;
//
//            else
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//        }
//    }
//
//    cout << dp[n + 1][m + 1] << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//using namespace std;
//int n, m, x, y;
//long long dp[25][25];
//int main()
//{
//	cin >> n >> m >> x >> y;
//	x += 1; y += 1;
//	dp[0][1] = 1;
//	for (int i = 1; i <= n + 1; i++)
//	{
//		for (int j = 1; j <= m + 1; j++)
//		{
//			if (i != x && j != y && abs(i - x) + abs(j - y) == 3 || (i == x &&
//				j == y))
//			{
//				dp[i][j] = 0;
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//			}
//		}
//	}
//	cout << dp[n + 1][m + 1] << endl;
//	return 0;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int dx[2] = { 0,1 };
//int dy[2] = { 1,0 };
//int n = 0;
//int m = 0;
//int x = 0;
//int y = 0;
//bool vis[21][21] = { false };
//
//void dfs(int i, int j, int& ret)
//{
//    if (i == n && j == m) {
//        ret++;
//        return;
//    }
//    if (i == n || j == m)
//        return;
//
//    for (int k = 0; k < 2; k++)
//    {
//        int x1 = i + dx[k], y1 = j + dy[k];
//        if (x1 >= 0 && x1 <= n && y1 >= 0 && y1 <= m && !vis[x1][y1])
//        {
//            dfs(x1, y1, ret);
//        }
//    }
//}
//
//int main()
//{
//    int ret = 0;
//    cin >> n >> m >> x >> y;
//    for (int i = 0; i <= n; i++)
//    {
//        for (int j = 0; j <= m; j++)
//        {
//            if (abs(i - x) + abs(j - y) == 3) vis[i][j] = true;
//        }
//    }
//
//    vis[x][y] = true;
//    dfs(0, 0, ret);
//    cout << ret << endl;
//    return 0;
//}
//买卖股票的最好时机(一)
//#include <iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> arr(n);
//    for (auto& i : arr) cin >> i;
//
//    int prev = arr[0];
//    int cur = 0;
//    int ret = 0;
//    for (int cur = 0; cur < n; cur++)
//    {
//        ret = max(ret, arr[cur] - prev);
//        prev = min(prev, arr[cur]);
//    }
//
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


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