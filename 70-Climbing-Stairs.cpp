class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int n1 = 2, n2 =3;
        int t =0 ;
        for(int i = 4 ; i <= n; i++){
            t = n1 + n2;
            n1 = n2;
            n2 = t;
        }
        return t;
    }
};