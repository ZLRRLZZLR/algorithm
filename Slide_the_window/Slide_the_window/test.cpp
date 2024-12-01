
//无重复字符的最长子串（medium）
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int hash[128] = { 0 };
//        int n = s.size();
//        int len = 0;
//        for (int right = 0, left = 0; right < n; right++)
//        {
//            hash[s[right]]++;
//            while (hash[s[right]] > 1)
//            {
//                hash[s[left++]]--;
//            }
//            len = max(len, right - left + 1);
//        }
//
//        return len;
//    }
//};
//长度最小的子数组（medium）
/*class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), sum = 0, len = INT_MAX;
        for (int left = 0, right = 0; right < n; right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                len = min(len, right - left + 1);
                sum -= nums[left++];
            }
        }

        return len == INT_MAX ? 0 : len;
    */}
};