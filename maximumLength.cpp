class Solution {
public:
    int maximumLength(vector<int>& nums) {

        unordered_map<long long, int> mp;
        // store freq
        for (auto& num : nums) {
            mp[num]++;
        }
        int res = 0;
        if (mp[1] % 2) { // Odd
            res = mp[1];
        } else { // even
            res = mp[1] - 1;
        }
        // traverse in map
        for (auto& [key, val] : mp) {
            int len = 0;
            long long curr = key;
            if (key == 1)
                continue;
            while (mp.count(curr) && mp[curr] > 1) {
                len += 2;
                curr = curr * curr;
            }
            if (mp.count(curr) == 1) {
                len += 1;
            } else {
                len -= 1;
            }
            res = max(res, len);
        }
        return res;
    }
};
