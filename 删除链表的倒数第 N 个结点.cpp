//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//using namespace std;
//
//
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* ans = { NULL };
//        int a = 1;
//        ListNode* ptr;
//        ptr = head;
//        while (ptr->next != NULL) {
//            ptr = ptr->next;
//            a++;
//        }
//        ptr = head;
//        int index = a - n + 1;
//        int b = 1;
//        bool c = true;
//        if (a == 1)
//            return ans;
//        else if (a == 2) {
//            if (n == 1) {
//                ans = head;
//                ans->next = NULL;
//                return ans;
//
//            }
//            else if (n == 2) {
//                ans = head->next;
//                return ans;
//            }
//        }
//        else {
//
//
//            while (c) {
//                if (b == index - 1 && index > 1) {
//                    ptr->next = ptr->next->next;
//                    c = false;
//                }
//                else if (index == 1) {
//                    ans = head->next;
//                    c = false;
//                    return ans;
//                }
//                else {
//                    ptr = ptr->next;
//                    b++;
//                }
//            }
//        }
//        ans = head;
//        return ans;
//    }
//};
//int main() {
//    ListNode* head;
//
//
//
//}