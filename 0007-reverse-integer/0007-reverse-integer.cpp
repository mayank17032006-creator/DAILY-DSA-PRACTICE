class Solution {
public:
    int reverse(int x) {
        signed int dig = 0;
        while (x != 0) {
            int lstdig=x%10;
           if(dig > INT_MAX/10 || dig < INT_MIN/10){
            return 0;

           }
           dig=dig*10+lstdig;
           x=x/10;
            
        }
        return dig;
    }
};