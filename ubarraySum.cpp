class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n);
        arr[0]=nums[0];
        int start = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            start = max(0 , i - nums[i]);
            int sum = 0 ;
            for(int k = start ; k <= i ; k++){
                sum += nums[k];
            }
            arr[i]=sum;

        }
        int res = accumulate(arr.begin() , arr.end() , 0);
        return res;

    }
};
