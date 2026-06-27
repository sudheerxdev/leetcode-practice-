class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // Pointer to track the next position for valid elements
    
    // Iterate over the entire array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // Place the current element at the next available spot
            k++;  // Increment k to track the number of valid elements
        }
    }
    
    // Return the number of valid elements
    return k;
    }
};
