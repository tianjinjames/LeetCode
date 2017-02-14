/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Intersection of Two Arrays.
			  Given two arrays, write a function to compute their intersection.
Example		: Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
Source      : https://leetcode.com/problems/intersection-of-two-arrays/
*******************************************/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.erase(unique( nums1.begin(), nums1.end() ), nums1.end() );
        nums2.erase(unique( nums2.begin(), nums2.end() ), nums2.end() );

        if(nums1.size() < nums2.size())     swap(nums1,nums2);
        for(int i = 0; i < nums2.size(); i++){
            auto ele = find(nums1.begin(), nums1.end(), nums2[i]);
            if(ele == nums1.end()){
                nums2.erase(nums2.begin()+i);
                i--;
            }  
        }
        return nums2;
    }
};