/*******************************************
Author      : Xiang Zhang
E-mail      : tianjinjames@gmail.com
Time        : 2016-12-28 16:49
Description : Binary Tree Paths.
			  Given a binary tree, return all root-to-leaf paths.
Example		: Given the following binary tree:
				   1
				 /   \
				2     3
				 \
				  5
			  All root-to-leaf paths are: ["1->2->5", "1->3"]		  
Source      : https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> output;
        string myString;
        
        if (root == nullptr)
            return output;
        
        myString += std::to_string(root->val);
        Traverse(0, output, root, myString);
        
        return output;
    }
    
    vector<string> Traverse(int counter, vector<string> &output, TreeNode* root, string oldString){
        if (root -> left == nullptr && root -> right == nullptr){
            output.push_back(oldString);
            counter++;
        }
        else if (root -> left && root -> right){
            string newString = oldString;
            oldString+= "->";
            oldString+= std::to_string(root->left->val);
            Traverse(counter, output, root->left, oldString);
            
            newString+= "->";
            newString+= std::to_string(root->right->val);
            Traverse(counter, output, root->right, newString);
        }
        else if (root->left){
            oldString+= "->";
            oldString+= std::to_string(root->left->val);
            Traverse(counter, output, root->left, oldString);
        }

        else if (root->right){
            oldString+= "->";
            oldString+= std::to_string(root->right->val);
            Traverse(counter, output, root->right, oldString);
        }
        return output;
    }
};