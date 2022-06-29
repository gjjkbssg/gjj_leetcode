//#include <cstdio>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//
//class solution {
//public :
//	string longestPalindrome(string s) {
//		int n = s.length();
//		if (n < 2) {
//			return s;
//		}
//		int maxLen = 1;
//		int begin = 0;
//		vector<vector<int>> dp(n, vector<int>(n));
//		for (int i = 0; i < n; i++) {
//				dp[i][i] = true;
//			}
//		for (int L = 2; L <= n; L++) {
//			for (int i = 0; i < n; i++) {
//				int j = L + i - 1;
//				// 如果右边界越界，就可以退出当前循环
//				// L为字符串长度，L = j-1-(i+1)+1 或者 L = j-i-1;
//				// 由此可以推出 右边界为 L+i-1;
//				if (j >= n) {
//					break;
//				}
//				if (s[i] != s[j]) {
//					dp[i][j] = false;
//				}
//				else {
//					if (j - i -1 < 2) {
//						dp[i][j] = true;
//					}
//					else {
//						dp[i][j] = dp[i + 1][j - 1];
//					}
//				}
//				if (dp[i][j] && j - i + 1 > maxLen) {
//					maxLen = j - i + 1;
//					begin = i;
//				}
//				
//			
//			}
//		}
//		return s.substr(begin, maxLen);
//	}
//
//
//};
//
//int main() {
//	string ex = "babad";
//	solution s;
//	cout << s.longestPalindrome(ex) << endl;
//}