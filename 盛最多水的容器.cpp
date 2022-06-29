//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int r = height.size() - 1;
//        int l = 0;
//        int ans = 0;
//        while (l < r) {
//            int area = min(height[l], height[r]) * (r - l);
//            ans = max(ans, area);
//            if (height[l] <= height[r]) {
//                ++l;
//            }
//            else {
//                --r;
//            }
//
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//     vector<int> height = {1, 1};
//    cout <<s.maxArea(height) << endl;
//
//
//}