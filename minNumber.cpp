class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int, int > mp1 ; 
        map<int , int > mp2 ; 
        for(auto   & num : nums1){
            mp1[num]++;
        }
        for(auto & num : nums2){
            mp2[num]++;
        }
        // check similar element 
        sort(nums1.begin() , nums1.end());
        for(int i= 0 ; i < nums1.size() ; i++){
            if(mp2.find(nums1[i]) != mp2.end()){
                return nums1[i];
            }
        }
        int first = mp1.begin() -> first ; 
        int second = mp2.begin() -> first ; 
        if(first < second){
            return first * 10 + second ;
        }
        return second * 10 + first ;

    }
};
