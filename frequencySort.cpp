class Solution {
public:
    string frequencySort(string s) {
        string str = "";
        unordered_map<char , int>mp ;
        for(char & ch : s){
            mp[ch]++;
        }
        priority_queue<pair< int , char>>pq;
        for(auto & [key , value] : mp){
            pq.push({value , key});
        }
        while(!pq.empty()){
            int freq = pq.top().first ; 
            char c = pq.top().second ; 
            cout << freq;
            str =  str +string(freq , c);
            pq.pop();
        }
        return str;
    }
};
