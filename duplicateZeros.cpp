class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int left = 0 ; 
        for(int left = 0 ; left < arr.size() ; left++){
            if(arr[left]==0){
                for(int right = arr.size() - 1 ; right > left ; right--){
                    arr[right]=arr[right - 1];
                }
                if(left + 1 < arr.size()) {
                    arr[left + 1] = 0;
                    left++; 
                }
            }
        }
    }
};
