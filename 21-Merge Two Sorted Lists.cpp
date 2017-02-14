/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Merge Two Sorted Lists.
			  Merge two sorted linked lists and return it as a new list. 
			  The new list should be made by splicing together the nodes of the first two lists.
Source      : https://leetcode.com/problems/merge-two-sorted-lists/
*******************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // a1 is the smaller list to begin with
        if (l1 == nullptr)  return l2;
        if (l2 == nullptr)  return l1;
        
        ListNode* a1 = l1;
        ListNode* a2 = l2;
        if (l1->val > l2->val) {
            a1 = l2;    a2 = l1;}
        ListNode* head = a1;
        while(a1 && a2){
            if (a2->val >= a1->val && a1->next == nullptr){
                a1->next = a2;
                break;
			}
            else if (a1->val <= a2->val && a2->val <= a1->next->val){
                ListNode* a1next = a1->next;
                a1->next = a2;
                a2 = a2->next;
                a1->next->next = a1next;
                a1 = a1->next;
            }
            else if (a2->val > a1->val && a2->val > a1->next->val)
                a1 = a1->next;
        }
        return head;
    }
};