//Link  : https://leetcode.com/problems/increasing-order-search-tree/
//harshvcode created at 20:11 01-09-2020
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> v;
    void Inorder(TreeNode* node) {
        if(node == nullptr) return;
        Inorder(node->left);
        node->left=nullptr;
        v.push_back(node);
        Inorder(node->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) return root;
        Inorder(root);
        int n=(int) v.size()-1;
        for(int i=0; i<n; i++)
            v[i]->right=v[i+1];
        return v[0];
    }
};
