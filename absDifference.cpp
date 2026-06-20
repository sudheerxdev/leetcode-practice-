class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int large = 0 , small = 0 ; 
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < k ; i++){
            small += nums[i];
            large+=nums[nums.size() -  1 - i];
        }
        return abs(large - small);
    }
};
