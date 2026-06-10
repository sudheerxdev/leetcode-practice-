class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> mp ; 
        for(auto  num : nums){
            mp[num]++;
        }
        priority_queue<pair<int , int>> pq ; 
        for(auto & [value , freq] : mp){
            pq.push({freq , value});
        }
        vector<int > res ; 
        int n = nums.size();
        while(!pq.empty() && pq.top().first > n / 3){
            if(pq.top().first > n / 3){
                res.push_back(pq.top().second);
            }
            pq.pop();
        }
        return res;
    }
};
