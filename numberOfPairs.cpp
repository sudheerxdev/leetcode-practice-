class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int , int>mp ; 
        for(int num: nums){
            mp[num]++;
        }
       
        int pair = 0, rem = 0 ; 
        for(auto & [key , value] : mp){
            pair += value/2;
            rem += value % 2 ;
        }
        return {pair , rem};

    }
};
