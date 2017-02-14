/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Merge Sorted Array.
			  Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
Source      : https://leetcode.com/problems/merge-sorted-array/
*******************************************/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cur1 = m-1;
        int cur2 = n-1;
        int pos = m + n - 1;
        while (pos >= 0){
            if (cur2 < 0 || (cur1 >=0 &&nums1[cur1] > nums2[cur2])){
                nums1[pos] = nums1[cur1];
                cur1--;
            }
            else{
                nums1[pos] = nums2[cur2];
                cur2--;
            }
            pos--;
        }
    }
};