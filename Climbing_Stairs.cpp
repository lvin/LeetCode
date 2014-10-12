class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) {
            return 1;
        }
        int last = 1;
        int nexttolast = 1;
        int answer = 1;
        for(int i = 2; i <=n; ++i) {
            answer = last + nexttolast;
            nexttolast = last;
            last = answer;
        }
        
        return answer;
    }
};


