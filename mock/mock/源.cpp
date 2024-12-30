//替换所有的问号（easy）
//class Solution {
//public:
//    string modifyString(string s) {
//        int n = s.size();
//        for (int i = 1; i < n - 1; i++) {
//            if (s[i] == '?')
//                for (char j = 'a'; j <= 'z'; j++) {
//                    if (s[i - 1] != j && s[i + 1] != j)
//                        s[i] = j;
//                }
//        }
//        if (s[0] == '?')
//            for (char j = 'a'; j <= 'z'; j++) {
//                if (s[1] != j)
//                    s[0] = j;
//            }
//        if (s[n - 1] == '?')
//            for (char j = 'a'; j <= 'z'; j++) {
//                if (s[n - 2] != j)
//                    s[n - 1] = j;
//            }
//        return s;
//    }
//};