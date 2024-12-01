#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param num1 string字符串
     * @param num2 string字符串
     * @return string字符串
     */

    string single_multiply(int num1, string num2, int size)
    {
        string ret;
        int Carry = 0;
        for (int i = num2.size() - 1; i >= 0; i--)
        {
            int tmp = num1 * (num2[num2.size() - 1] - '0');
            Carry = tmp / 10;
            ret += tmp % 10 + '0';
        }

        reverse(ret.begin(), ret.end());
        while (size--)
        {
            ret += '0';
        }

        return ret;
    }
    string _add(string num1, string num2)
    {
        string ret;
        int Carry = 0;
        while ((!num1.empty()) && (!num2.empty()))
        {
            int a = num1[num1.size() - 1] - '0';
            int b = num2[num2.size() - 1] - '0';
            int s = (a + b + Carry) % 10;
            Carry = (a + b + Carry) / 10;
            num1.pop_back();
            num2.pop_back();

            ret.push_back(s + '0');
        }
        while (!num1.empty())
        {
            ret.push_back(num1[num1.size() - 1] + Carry);
            Carry = 0;
            num1.pop_back();
        }
        while (!num2.empty())
        {
            ret.push_back(num2[num2.size() - 1] + Carry);
            Carry = 0;
            num2.pop_back();
        }
        if (Carry > 0)
        {
            ret.push_back(Carry + '0');
        }

        reverse(ret.begin(), ret.end());

        return ret;
    }

    string multiply(string num1, string num2) {
        int size = 0;
        string sum = 0;
        for (int i = num1.size() - 1; i >= 0; i--)
        {
            string tmp = single_multiply(num1[i] - '0', num2, size);
            sum = _add(sum, tmp);
            size++;
        }

        return sum;
    }
};


//#include <iostream>
//#include<assert.h>
//
//using namespace std;
//
//class Date
//{
//public:
//    int GetMonthDay(int year, int month)
//    {
//        assert(month < 13);
//        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//        {
//            arr[2] = 29;
//        }
//
//        return arr[month];
//    }
//
//    Date(int year = 1900, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    Date(const Date& d)
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//
//    Date& operator=(const Date& d)
//    {
//        Date tmp(d);
//        swap(tmp);
//        return *this;
//    }
//
//    Date& operator+=(int day)
//    {
//        if (day < 0)
//        {
//            *this -= -day;
//            return *this;
//        }
//        _day += day;
//        while (_day > GetMonthDay(_year, _month))
//        {
//            _day -= GetMonthDay(_year, _month);
//            _month++;
//            if (_month == 13)
//            {
//                _year++;
//                _month = 1;
//            }
//        }
//
//        return *this;
//    }
//    Date operator+(int day)
//    {
//        Date tmp(*this);
//        tmp += day;
//
//        return tmp;
//    }
//    Date operator-(int day)
//    {
//        Date tmp(*this);
//        tmp -= day;
//
//        return tmp;
//    }
//    Date& operator-=(int day)
//    {
//        if (day < 0)
//        {
//            *this += -day;
//            return *this;
//        }
//        _day -= day;
//        while (day <= 0)
//        {
//            day += GetMonthDay(_year, _month);
//            _month--;
//            if (_month == 0)
//            {
//                _year--;
//                _month = 12;
//            }
//        }
//
//        return *this;
//    }
//    bool operator==(const Date& d)
//    {
//        return _year == d._year && _month == d._month && _day == d._day;
//    }
//    friend ostream& operator<<(ostream& out, const Date& d)
//    {
//        out << d._year << "-" << d._month << "-" << d._day;
//
//        return out;
//    }
//
//    void swap(Date& a)
//    {
//        std::swap(_year, a._year);
//        std::swap(_month, a._month);
//        std::swap(_day, a._day);
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//
//};
//
//
//int main() {
//    Date d1(2020, 2, 20);
//    d1 += -10;
//    Date d2(d1 + 100);
//    cout << d1 << endl;
//    cout << d2 << endl;
//    cout << (d1 == d2) << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")


//#include <iostream>
//#include<cstring>
//#include<vector>
//#include<functional>
//
//using namespace std;
//
//template<class T, class Container = std::vector<T>, class Compare = less<T>>
//class priority_queue {
//public:
//    priority_queue() = default;
//
//    template<class InputIterator>
//    priority_queue(InputIterator first, InputIterator last)
//    {
//        while (first != last)
//        {
//            push(*first);
//            ++first;
//        }
//    }
//
//    bool empty() const
//    {
//        return c.empty();
//    }
//
//    size_t size() const
//    {
//        return c.size();
//    }
//
//    const T& top() const
//    {
//        return c.front();
//    }
//
//    void push(const T& x)
//    {
//        c.push_back(x);
//        AdjustUp(size() - 1);
//    }
//    void pop()
//    {
//        std::swap(c[0], c[size() - 1]);
//        c.pop_back();
//        AdjustDown(0);
//    }
//
//private:
//    void AdjustUp(int child)
//    {
//        int parent = (child - 1) / 2;
//        while (child >= 0)
//        {
//            if (Com(c[parent], c[child]))
//            {
//                std::swap(c[parent], c[child]);
//                child = parent;
//                parent = (child - 1) / 2;
//            }
//
//            else
//            {
//                break;
//            }
//        }
//    }
//    void AdjustDown(int parent)
//    {
//        int child = parent * 2 + 1;
//        while (child < size())
//        {
//            if (child + 1 < size() && c[child] < c[child + 1])
//            {
//                ++child;
//            }
//
//            if (Com(c[parent], c[child]))
//            {
//                std::swap(c[parent], c[child]);
//                parent = child;
//                child = parent * 2 + 1;
//            }
//
//            else
//            {
//                break;
//            }
//        }
//    }
//
//private:
//    Container c;
//    Compare Com;
//};
//int main()
//{
//    priority_queue<int> pq;
//    pq.push(10);
//    pq.push(20);
//    pq.push(30);
//
//    cout << pq.top() << endl;
//
//    pq.pop();
//    pq.pop();
//
//    cout << pq.top() << endl;
//
//    return 0;
//}

//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int left = 0;
//        int right = 0;
//        int sum = nums[left];
//        int len = INT_MAX;
//        while (right < nums.size())
//        {
//            if (sum < target && right < nums.size())
//            {
//                right++;
//                if (right >= nums.size())
//                    break;
//                sum += nums[right];
//            }
//
//            if (sum >= target)
//                len = min(len, right - left + 1);
//
//            if (left <= right && sum >= target)
//            {
//                sum -= nums[left];
//                left++;
//            }
//
//
//        }
//
//        if (sum < target)
//            return 0;
//
//        return len;
//
//    }
//};
//
//int main()
//{
//    vector<int> v = { 1, 2, 3, 4, 5 };
//    Solution().minSubArrayLen(11,v);
//	return 0;
//}