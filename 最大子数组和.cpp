//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) { // 计算最大子数组和
//        int a = nums.size();
//		if (a == 0) return 0;
//		int max = nums[0];
//		int sum = 0;
//		for (int i = 0; i < a; i++) {
//			sum += nums[i];
//			if (sum > max) max = sum;
//			if (sum < 0) sum = 0;
//		}
//		return max;
//		
//			
//    }
//};
//
//int main() {
//	vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//	Solution s;
//	cout << s.maxSubArray(nums) << endl;
//	return 0;
//
//}
