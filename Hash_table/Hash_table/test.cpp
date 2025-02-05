
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