//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <unordered_map>
//#include <stack>
//using namespace std;
//
//class Solution {
//public:
//    bool isValid(string s) {
//        unordered_map<char, int> m { {'(',1},{'[',2},{'{',3},
//                                {')',4},{']',5},{'}',6} };
//        stack<char> st;
//        bool istrue = true;
//        for (const char& c : s) {
//            int flag = m[c];
//            if (flag >= 1 && flag <= 3) st.push(c);
//            else if (!st.empty() && m[st.top()] == flag - 3) st.pop();
//            else { istrue = false; break; }
//        }
//
//         if (!st.empty()) istrue = false;
//        return istrue;
//    }
//        
//};
//
//int main() {
//    Solution s;
//    string a = "() { [] }";
//    cout << s.isValid(a) << endl;
//}