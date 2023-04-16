// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal
#include<bits/stdc++.h>
using namespace std;

/* Definition for a binary tree node. */
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    TreeNode * bstFromPreorderImpl(vector<int>& arr, int i, int n) {
    int j;

    if (i >= n || i < 0)
        return NULL;
 
    int rootVal = arr[i];
    for (j = i + 1; j < n; j++) {
        if (arr[j] > rootVal)
            break;
    }

    TreeNode *root = new TreeNode(rootVal);
    root->left = bstFromPreorderImpl(arr, i + 1, j);
    root->right = bstFromPreorderImpl(arr, j, n);

    return root;
}

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bstFromPreorderImpl(preorder, 0, preorder.size());
    }
};