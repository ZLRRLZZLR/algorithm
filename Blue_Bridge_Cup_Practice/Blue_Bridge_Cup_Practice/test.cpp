#include<iostream>
#include<vector>

using namespace std;

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>  arr(100005);
	vector<int> ret(2);
	int num = 0;
	int rows;
	cin >> rows;
	while (cin >> num) {
		arr[num]++;
	}

	for (int i = 1; i <= 100004; i++)
	{
		if (arr[i - 1] && arr[i + 1] && !arr[i]) ret[0] = i;
		if (arr[i] >= 2) ret[1] = i;
		if (ret[0] && ret[1]) break;
	}
	cout << ret[1] << ' ' << ret[0] << endl;
	return 0;
}

//int main()
//{
//	vector<int>  arr(100001);
//	vector<int> ret(2);
//	int num = 0;
//	int rows;
//	cin >> rows;
//	while(rows--)
//	{
//		cin >> num;
//		arr[num]++;
//	}
//	for(auto& e : arr)
//	{
//		if (e >= 2)
//			ret[0] = e;
//		else
//			ret[1] = e;
//	}
//
//	cout << ret[1] << ' ' << ret[0] << endl;
//	return 0;
//}

//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n, 1));
//        int len = INT_MIN;
//        int begin = 0;
//
//        for (int i = n - 1; i >= 0; i--)//i反走，j正走，保证中间部分有数据访问
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (i == j)
//                {
//                    dp[i][j] = true;
//                    if (len < 1)
//                    {
//                        len = 1;
//                        begin = i;
//                    }
//                }
//
//                else if (j == i + 1)
//                {
//                    dp[i][j] = (s[i] == s[j]);
//
//                    if (dp[i][j] && len < 2)
//                    {
//                        len = 2;
//                        begin = i;
//                    }
//
//                }
//
//                else
//                {
//                    dp[i][j] = (dp[i + 1][j - 1]) && (s[i] == s[j]);
//
//                    if (dp[i][j] && len < j - i + 1)
//                    {
//                        len = j - i + 1;
//                        begin = i;
//                    }
//                }
//            }
//        }
//
//        return s.substr(begin, len);
//    }
//};
//class Solution {
//public:
//    int waysToStep(int n) {
//        if (n == 1 || n == 2) return n;
//        if (n == 3) return 4;
//
//        vector<int> dp(n + 1);
//
//        const int MOD = 1e9 + 7;
//
//        dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 4;
//
//        for (int i = 4; i <= n; i++)
//        {
//            dp[i] = ((dp[i - 1] + dp[i - 2]) % MOD + dp[i - 3]) % MOD;
//        }
//
//        return dp[n];
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vv(numRows);
//
//        for (int i = 0; i < numRows; i++) {
//            vv[i].resize(i + 1, 1);
//        }
//
//        for (int i = 2; i < numRows; i++) {
//            for (int j = 1; j < i; j++) {
//                vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
//            }
//        }
//
//        return vv;
//    }
//};
//class Solution {
//public:
//    bool isPalindrome(string s) {
//        string tmp;
//        for (auto e : s)
//        {
//            if (e >= 'a' && e <= 'z')
//                tmp.push_back(e - 32);
//
//            if (e >= 'A' && e <= 'Z')
//                tmp.push_back(e);
//
//            if (e >= '0' && e <= '9')
//                tmp.push_back(e);
//        }
//
//        for (int left = 0, right = tmp.size() - 1; left < right; left++, right--)
//        {
//            if (tmp[left] != tmp[right])
//            {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};