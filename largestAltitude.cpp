class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0 , curr = 0 ; 
        for(auto & num : gain){
            sum += num ; 
            curr = max(sum , curr);
        }
        return curr;
    }
};
