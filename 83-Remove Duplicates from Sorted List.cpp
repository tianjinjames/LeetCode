/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Remove Duplicates from Sorted List.
			  Given a sorted linked list, delete all duplicates such that each element appear only once.
Examples	: Given 1->1->2, return 1->2.
			  Given 1->1->2->3->3, return 1->2->3.	
Source      : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while (current && current->next){
            ListNode* temp = current;
            while (temp && temp->next && temp->val == temp->next->val)
                temp = temp->next;
            current->next = temp->next;
            current = current->next;
        }
        return head;
    }
};