class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(nums.size());
        vector<int>odd;
        vector<int>even;
        for(int i = 1 ; i < n ; i+=2){
            odd.push_back(nums[i]);
        }
        sort(odd.begin() , odd.end());
        reverse(odd.begin() , odd.end());
        for(int i = 0 ; i < n ; i+=2){
            even.push_back(nums[i]);
        }
        sort(even.begin() , even.end());
        int idx = 0;
        for(int i = 1 ; i < n ; i+=2){
            arr[i]=odd[idx++];
        }
        idx = 0;
        for(int i = 0 ; i < n; i+=2){
            arr[i]=even[idx++];
        }
        return arr;

    }
};
