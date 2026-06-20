class Solution {
public:
    void helper(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }

        helper(root->left, arr);
        arr.push_back(root->val);
        helper(root->right, arr);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> inorder;
        helper(root, inorder);

        vector<int> modes;

        int maxCount = 0;
        int currCount = 0;

        for (int i = 0; i < inorder.size(); i++) {

            if (i == 0 || inorder[i] != inorder[i - 1]) {
                currCount = 1;
            } else {
                currCount++;
            }

            if (currCount > maxCount) {
                maxCount = currCount;
                modes.clear();
                modes.push_back(inorder[i]);
            }
            else if (currCount == maxCount) {
                modes.push_back(inorder[i]);
            }
        }

        return modes;
    }
};
