//Link  : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int dfs(Node* node) {
        if(node == nullptr) return 0;
        int current=1;
        for(Node* e : node->children)
            current=max(current, 1 + dfs(e));
        return current;
    }
    int maxDepth(Node* root) {
        return dfs(root);
    }
};
