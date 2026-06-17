class Solution {
public:
    bool helper(int num){
        bool change = false;
        while(num > 0){
            int r = num % 10 ; 
            if(r == 2 || r == 6 || r == 5 || r == 9){
                change =true;
            }
            if(r == 3 || r == 4 || r == 7){
                return false;
            }
            num /= 10;
        }
        return change;
    }
    int rotatedDigits(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (helper(i) == true) {
                count++;
            } else {
                continue;
            }
        }
        return count;
    }
};
