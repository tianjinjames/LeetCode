/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Remove Linked List Elements.
			  Remove all elements from a linked list of integers that have value val.
Example		: Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
			  Return: 1 --> 2 --> 3 --> 4 --> 5
Source      : https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head){
            if (head->val == val && head->next)
                head = head->next;
            else if (head->val == val && !head->next)
                head = nullptr;
            else    break;
        }
        if (head == nullptr)    return nullptr;
        ListNode* current = head;
        while (current->next){
            while (current->next->val == val && current->next->next)
                *current->next = *current->next->next;
            if (current->next->val == val && !current->next->next)
                current->next = nullptr;
            if (current->next)
                current = current->next;
        }
        return head;
    }
};