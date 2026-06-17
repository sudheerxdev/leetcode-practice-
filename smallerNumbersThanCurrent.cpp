class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> ans;
       
        vector<int> sorted = nums;
        unordered_map<int, int> mp;
        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < nums.size(); i++) {
            if(mp.find(sorted[i]) == mp.end())
            mp[sorted[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};
