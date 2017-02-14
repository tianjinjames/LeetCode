/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Path Sum.
			  Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
Example		: Given the below binary tree and sum = 22,	  
			    		  5
			             / \
			            4   8
			           /   / \
			          11  13  4
			         /  \      \
			        7    2      1
			  return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
Source      : https://leetcode.com/problems/path-sum/
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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr)
            return false;
        return checkPath(root, 0, sum);
    }
    
    bool checkPath(TreeNode* root, int curSum, int sum)
    {
        if (root == nullptr)
            return false;
        else{
            curSum += root -> val;
            if (curSum == sum && !(root->left) && !(root->right))
                return true;
            else
                return (checkPath(root->left, curSum, sum) || checkPath(root->right, curSum, sum));
        }
    }
};