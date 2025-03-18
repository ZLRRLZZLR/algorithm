#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


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