class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi = LLONG_MIN; 
        long long mini = LLONG_MAX;
        for(int num : nums){
            mini = min(mini , (long long)num);
            maxi = max(maxi , (long long)num);
        }
        return (maxi - mini) * k;
    }
};
