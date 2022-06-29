//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        int a = nums.size();
//        vector<vector<int>> ans;
//        if(nums.empty()==true || a < 3) return ans;
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < a - 1; i++) {
//            int b = nums[i];
//            if (b > 0) //说明三个数一定大于0
//                break;
//            if (i > 0 && nums[i] == nums[i - 1]) //去除重复
//                continue;
//            int L = i + 1;
//            int R = a - 1;
//            while (L < R) {
//                int sum = nums[i] + nums[L] + nums[R];
//                if (sum == 0) {
//                    ans.push_back({ nums[i], nums[L], nums[R] });
//                    while (L < R && nums[L] == nums[L + 1]) L++;
//                    while (L < R && nums[R] == nums[R - 1]) R--;
//                    L++;
//                    R--;
//                }
//                else if (sum > 0)
//                    R--;
//                else
//                    L++;
//            }
//        }
//        return ans;
//    }
//};
//
//
//int main() {
//    Solution s;
//    vector<int> nums;
//    nums = { -1, 0, 1, 2, -1, -4 } ;
//    vector<vector<int >> V = s.threeSum(nums);
//    for (int i = 0; i < V.size(); i++)
//    {
//        for (int j = 0; j < V[0].size(); j++)
//            cout << V[i][j] << " ";
//        cout << endl;
//    }
//
//
//
//
//}