/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        int a[1000];
//        int i = 0;
//        int n;
//
//        ListNode* ptr;
//        ListNode* ans;
//        ListNode* ans1;
//        ListNode* ans2;
//        ptr = list1;
//        ans = ptr;
//        ans1 = ptr;
//        ans2 = ptr;
//        ListNode* ptr1;
//        ptr1 = list2;
//        if (list1 == NULL)//考虑两个链表有一个为空
//            return list2;
//        if (list2 == NULL)
//            return list1;
//        while (ptr != nullptr) {
//            a[i] = ptr->val;
//            ptr = ptr->next;
//            i++;
//        }
//        while (ans->next) {
//            ans = ans->next;
//        }
//        ans->next = list2;
//        n = i;
//        while (ptr1 != nullptr) {
//            a[n] = ptr1->val;
//            ptr1 = ptr1->next;
//            n++;
//        }
//        sort(a, a + n);
//        int j = 0;
//        while (ans1 != nullptr) {
//            ans1->val = a[j];
//            ans1 = ans1->next;
//            j++;
//        }
//        return ans2;
//    }
//};
//
//int main() {
//    ListNode* list1 = nullptr;
//    // Create first node with 12.5
//    list1 = new ListNode; // Allocate new node
//    list1->val = 1;
//    list1->next = new ListNode;
//    list1->next->val = 2;
//    list1->next->next = new ListNode;
//    list1->next->next->val = 4;
//    ListNode* list2 = nullptr;
//    // Create first node with 12.5
//    list2 = new ListNode; // Allocate new node
//    list2->val = 1;
//    list2->next = new ListNode;
//    list2->next->val = 3;
//    list2->next->next = new ListNode;
//    list2->next->next->val = 4;
//    Solution s;
//    cout<<s.mergeTwoLists(list1,list2)->val;
//}