class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;

        for(char ch : text) {
            mp[ch]++;
        }

        int b = mp['b'];
        int a = mp['a'];
        int l = mp['l'] / 2;
        int o = mp['o'] / 2;
        int n = mp['n'];

        int ans = b;

        if(a < ans) ans = a;
        if(l < ans) ans = l;
        if(o < ans) ans = o;
        if(n < ans) ans = n;

        return ans;
    }
};
