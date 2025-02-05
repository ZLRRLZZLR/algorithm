
//判断是否互为字符重排（easy）
//class Solution {
//public:
//    bool CheckPermutation(string s1, string s2) {
//        if (s1.size() != s2.size()) return false;
//        int arr[26] = { 0 };
//        for (int i = 0; i < s1.size(); i++) {
//            arr[s1[i] - 'a']++;
//        }
//        for (int i = 0; i < s1.size(); i++) {
//            if (--arr[s2[i] - 'a'] < 0) return false;
//        }
//        return true;
//    }
//};
//两数之和（easy）
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        unordered_map<int, int> hash;
//        for (int i = 0; i < nums.size(); i++) {
//            if (hash.count(target - nums[i]))
//                return { hash[target - nums[i]],i };
//            hash[nums[i]] = i;
//        }
//
//        return { 0 };
//    }
//};
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = 0; j < i; j++) {
//                if (nums[j] + nums[i] == target)
//                    return { i,j };
//            }
//        }
//        return { -1 };
//    }
//};