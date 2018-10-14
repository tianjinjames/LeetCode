https://www.geeksforgeeks.org/shortest-distance-between-two-nodes-in-bst/

// CPP program to find distance between 
// two nodes in BST 
#include <bits/stdc++.h> 
using namespace std; 
struct TreeNode { 
	struct TreeNode* left, *right; 
	int val; 
	TreeNode(int x){
	    val = x;
	    left = nullptr;
	    right = nullptr;
	}
}; 

TreeNode* buildTree(vector<int> nums);
TreeNode* helper(vector<int> nums, int start, int end);
TreeNode* findLCA(TreeNode* root, int x, int y);
int findDistanceToLCA(TreeNode* root, int x, int cur);
int findDistance(TreeNode* root, int x, int y);

TreeNode* buildTree(vector<int> nums) {
        return helper(nums, 0, nums.size()-1);
    }
    
TreeNode* helper(vector<int> nums, int start, int end){
    if(start > end || start < 0 || end >= nums.size())
        return nullptr;
        
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = helper(nums, start, mid-1);
    root->right = helper(nums, mid+1, end);
    
    return root;
}

TreeNode* findLCA(TreeNode* root, int x, int y){
    if(x > y)   swap(x,y);
    if(root->val >= x && root->val <= y)
        return root;
    if(root->val > y)
        return findLCA(root->left, x, y);
    else
        return findLCA(root->right, x, y);
}

int findDistanceToLCA(TreeNode* root, int x, int cur){
    if(root->val == x)
        return cur;
    if(root->val > x)
        return findDistanceToLCA(root->left, x, cur+1);
    if(root->val < x)
        return findDistanceToLCA(root->right, x, cur+1);
}

int findDistance(TreeNode* root, int x, int y){
    auto LCA = findLCA(root, x, y);
    return findDistanceToLCA(LCA, x, 0) + findDistanceToLCA(LCA, y, 0);
}

// Driver code 
int main() 
{ 
	auto root = buildTree({1,2,3,4,5,6,7,8});
	int a = 5, b = 55; 
	cout << findDistance(root, 1,8); 
	return 0; 
} 
