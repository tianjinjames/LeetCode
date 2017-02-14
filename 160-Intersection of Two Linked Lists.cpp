/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Intersection of Two Linked Lists.
			  Write a program to find the node at which the intersection of two singly linked lists begins.
Example		: A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
			  B:     b1 → b2 → b3
			  
			  begin to intersect at node c1.
Notes		:
			1. If the two linked lists have no intersection at all, return null.
			2. The linked lists must retain their original structure after the function returns.
			3. You may assume there are no cycles anywhere in the entire linked structure.
			4. Your code should preferably run in O(n) time and use only O(1) memory.
			
Source      : https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lengthA = 0, lengthB = 0, dif = 0;
        
        // get linked list length
        while(curA){
            lengthA++;
            curA = curA->next;
        }
        while(curB){
            lengthB++;
            curB = curB->next;
        }
        // to make two linked list has equal length at the beginning of traversal
        dif = lengthA-lengthB;
        while (dif > 0){
            headA = headA -> next;
            dif--;
        }
        while (dif < 0){
            headB = headB -> next;
            dif++;
        }
        
        while (headA && headB){
            if (headA == headB) return headA;
            headA = headA -> next;
            headB = headB ->next;
        }
        return nullptr;
    }
};