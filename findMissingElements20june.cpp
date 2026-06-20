class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans ; 
        sort(nums.begin() , nums.end());
        int diff = 0;
        int cnt = 0 ;
        for(int i = nums[0] ; i < nums[nums.size() - 1] ; i++){
            if(cnt < nums.size() && i == nums[cnt]){
                cnt++;
            }
            else{
                ans.push_back(i);
            }
            
        }
        return ans;
    }
};
