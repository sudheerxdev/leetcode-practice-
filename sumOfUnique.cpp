class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int , int> mp ;
        // couhnt freqquwnrcy basically 
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
       
        int sum = 0;
        for(auto it = mp.begin() ; it != mp.end() ; ){
            if(it->second == 1){
                sum += it->first;

            }
            it++;
        }
        return sum ;
    }
};
