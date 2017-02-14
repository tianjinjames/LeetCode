/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Add Strings.
			  Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
Source      : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
*******************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0)
            return NULL;
        return buildBST(nums);
    }
    
    TreeNode* buildBST(vector<int>& input)
    {
        TreeNode* root;
        if (input.size() == 0)
            return root; 
            
        if (input.size() > 0)
            root = new TreeNode(input[input.size()/2]);
    
        if (input.size() > 1){
            vector<int> leftV(input.begin(), input.begin() + input.size()/2);
            root->left = buildBST(leftV);
        }
        
        if (input.size() > 2){
            vector<int> rightV(input.begin() + input.size()/2 + 1, input.end());
            root->right = buildBST(rightV);
            
        return root;
    }
};