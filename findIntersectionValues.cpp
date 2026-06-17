class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> mp1 ; 
        unordered_map<int , int > mp2 ; 
        for(auto & num : nums1){
            mp1[num]++;
        }
        for(auto & num : nums2){
            mp2[num]++;
        }
        int count1 = 0 , count2 = 0 ; 
        for(auto & [key , value] : mp1){
            if(mp2[key]){
                count1 += value;
                count2 += mp2[key];
            }
        }
        return {count1 , count2};
    }
};
