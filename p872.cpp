class Solution {
private:
    void getLeafNodes(TreeNode* node, vector<int>& leaf) {
        if (node == NULL) return;
        if (node-> left == NULL && node->right == NULL) {
            leaf.push_back(node->val);
        }
        getLeafNodes(node->left,leaf);
        getLeafNodes(node->right, leaf);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1,leaf2;
        getLeafNodes(root1, leaf1);
        getLeafNodes(root2, leaf2);

        return leaf1 == leaf2;
    }
};
