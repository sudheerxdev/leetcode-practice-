class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxrange(n);
        vector<int>minrange(n);
        // fill ocuured max 
        maxrange[0]=nums[0];
        for(int i = 1 ; i < n ; i++){
            maxrange[i]=max(nums[i] , maxrange[i-1]);
        }
        minrange[n -1]=nums[n -1];
        for(int i =n -2 ; i >= 0 ; i--){
            minrange[i]=min(nums[i] , minrange[i+1]);
        }
        int res = -1;
        int mini = INT_MAX;
        vector<int>arr;
        for(int i = 0; i < n ; i++){
            if(maxrange[i] - minrange[i] <=k ){
               arr.push_back(i);
            }
        }

        sort(arr.begin() , arr.end());
        if(arr.size()>=1){
            sort(arr.begin() , arr.end());
            return arr[0];
        }
        return res;
    }
};
