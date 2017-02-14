/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Palindrome Linked List.
			  Given a singly linked list, determine if it is a palindrome.
Source      : https://leetcode.com/problems/palindrome-linked-list/
*******************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 // Reverse the linked list then traverse
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
            ListNode* newHead = nullptr;
            reverse(head, newHead);
            return newHead;
    }
    
    void reverse(ListNode* oldHead, ListNode*& newHead){
        if(oldHead == nullptr)  return;
        ListNode* temp = oldHead->next;
        oldHead->next = newHead;
        newHead = oldHead;
        reverse(temp, newHead);
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr)    return true;
        ListNode* cur = head;
        int length = 0;
        while(cur){
            length++;
            cur = cur->next;
        }
        int mid = length/2;
        cur = head;
        while (mid != 1){
            cur = cur->next;
            mid--;
        }
        ListNode* temp = cur;
        cur = reverseList(cur->next);
        temp->next = nullptr;
        
        while(cur && head){
            if (cur->val != head->val)  return false;
            cur = cur->next;
            head = head->next;
        }
        return true;
    }
};