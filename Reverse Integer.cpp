class Solution {
public:
    int reverse(int x) {
        int s = 0;
        while (x != 0) {
            s = s*10 + x%10;
            x /= 10;
            
        }
        return s;
    }
};

