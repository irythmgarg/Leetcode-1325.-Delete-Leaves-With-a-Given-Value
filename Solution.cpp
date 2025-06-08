/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;               // Value of the node
    TreeNode *left;        // Pointer to left child
    TreeNode *right;       // Pointer to right child

    // Constructors
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    /**
     * Removes all leaf nodes from the binary tree that have the given target value.
     * 
     * @param root Root of the binary tree
     * @param target Value to remove if found in leaf nodes
     * @return Modified root of the tree after removal
     */
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (!root) 
            return nullptr;  // Base case: empty node

        // Recursively process left and right subtrees
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        // After processing children, check if current node is a leaf with target value
        if (!root->left && !root->right && root->val == target) {
            return nullptr;  // Remove this leaf node
        }

        return root;  // Return current node if not removed
    }
};
