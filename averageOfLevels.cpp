class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            long long sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                sum += (long long)temp->val;
                q.pop();

                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }
            ans.push_back((double)sum / size);
        }
        return ans;
    }
};
