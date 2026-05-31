class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n);
        arr[0]=nums[0];
        for(int i = 1 ; i < n ; i++){
            arr[i] = arr[i - 1] + nums[i];
        }
        // dekho ki minimum kya hai 
        sort(arr.begin() , arr.end());
        int mini = arr[0];
        if(mini >= 1) return 1;
        return 1 - mini;
    }
};
