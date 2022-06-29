//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//class Solution {
//public:
//    void nextPermutation(vector<int>& nums) {
//    int n = nums.size();
//	if (n <= 1)
//		return;
//	int i = n - 2;
//	while (i>=0 && nums[i]>=nums[i+1]) {
//		i--;
//	}
//	if (i >= 0) {
//		int j = n - 1;
//		while (j >= 0 && nums[i] >= nums[j]) {
//			j--;
//		}
//		swap(nums[i], nums[j]);
//	}
//	reverse(nums.begin()+i+1, nums.end());
//    }
//};
//int main() {
//	vector<int> a;
//	Solution s;
//	a.push_back(1);
//	a.push_back(2);
//	a.push_back(3);
//	a.push_back(4);
//	a.push_back(6);
//	a.push_back(7);
//	a.push_back(8);
//	a.push_back(9);
//	s.nextPermutation(a);
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//		return 0;
//}