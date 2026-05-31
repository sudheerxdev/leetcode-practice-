class Solution {
public:
    const int MOD = 1e9 + 7;
    int valueAfterKSeconds(int n, int k) {
        vector<int> arr(n, 1);
        while (k--) {

            for (int i = 1; i < n; i++) {
                arr[i] = (arr[i - 1] + arr[i])%MOD;
            }
        }
        return arr[n - 1];
    }
};
