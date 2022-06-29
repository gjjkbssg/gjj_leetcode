//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//class Solution {
//public:
//    vector<string> res; //¼ÇÂ¼´ð°¸ 
//    vector<string> generateParenthesis(int n) {
//        dfs(n, 0, 0, "");
//        return res;
//    }
//    void dfs(int n, int lc, int rc, string str)
//    {
//        if (lc == n && rc == n) res.push_back(str);    //µÝ¹é±ß½ç
//        else
//        {
//            if (lc < n) dfs(n, lc + 1, rc, str + "(");            //Æ´½Ó×óÀ¨ºÅ
//            if (rc < n && lc > rc) dfs(n, lc, rc + 1, str + ")"); //Æ´½ÓÓÒÀ¨ºÅ
//        }
//    }
//};
//
//int main() {
//    Solution s;
//    vector<string> V = s.generateParenthesis(2);
//    for (int i = 0; i < V.size(); i++) {
//                cout << V[i]<<endl;
//           }
//}