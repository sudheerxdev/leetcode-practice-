class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp ; 
        for(int num : nums){
            mp[num]++;

        }
        priority_queue<pair<int, int>>pq;
        for(auto & p : mp){
            pq.push({p.second , p.first});
        }
        // sare elemnt got push aur max heap bna 
        vector<int>res ;
        while(k--){
            auto p = pq.top();
            res.push_back(p.second);
            pq.pop();
        }
        return res;

    }
};
