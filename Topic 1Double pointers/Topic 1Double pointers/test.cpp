

//盛水最多的容器（medium）
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int v = 0;
//        for (int left = 0, right = height.size() - 1; left < right;)
//        {
//            int ret = (right - left) * min(height[left], height[right]);
//            v = max(v, ret);
//            if (height[left] > height[right])
//            {
//                right--;
//            }
//            else
//            {
//                left++;
//            }
//        }
//
//        return v;
//    }
//};
//快乐数（medium）
//class Solution {
//public:
//    int Sum(int num)
//    {
//        int s = 0;
//        while (num)
//        {
//            s += pow(num % 10, 2);
//            num /= 10;
//        }
//        return s;
//    }
//    bool isHappy(int n) {
//        int slow = Sum(n), fast = Sum(Sum(n));
//        while (slow != fast)
//        {
//            slow = Sum(slow);
//            fast = Sum(Sum(fast));
//        }
//
//        return slow == 1;
//    }
//};
//复写零（easy）
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr) {
//        int cur = 0, dest = -1, n = arr.size();
//        while (cur < n)
//        {
//            if (arr[cur])
//            {
//                dest++;
//            }
//            else
//            {
//                dest += 2;
//            }
//            if (dest >= n - 1)
//            {
//                break;
//            }
//            cur++;
//        }
//        if (dest >= n)
//        {
//            arr[n - 1] = 0;
//            dest -= 2;
//            cur--;
//        }
//        while (cur >= 0)
//        {
//            if (arr[cur])
//            {
//                arr[dest--] = arr[cur--];
//            }
//            else
//            {
//                arr[dest--] = 0;
//                arr[dest--] = 0;
//                cur--;
//            }
//        }
//    }
//};
//1. 移动零（easy）
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int dest = -1;
//        int cur = 0;
//        for (; cur < nums.size();)
//        {
//            if (nums[cur] != 0)
//            {
//                swap(nums[dest + 1], nums[cur++]);
//                dest++;
//            }
//            else
//            {
//                cur++;
//            }
//        }
//    }
//};