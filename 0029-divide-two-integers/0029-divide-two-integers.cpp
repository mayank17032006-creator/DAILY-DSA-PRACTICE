class Solution {
public:
    int divide(int dividend, int divisor) {
         long long Dividend  = llabs((long long )dividend);
         long long Divisor = llabs((long long )divisor);
     
      
        long long answer=0;
        if (dividend == INT_MIN && divisor == - 1){
            return INT_MAX;
        }
        bool negative = (dividend < 0) != (divisor < 0);
        while(Dividend >= Divisor){
            long long temp = Divisor;
            long long multiple = 1;
             while(Dividend > (temp+temp)){
                temp = temp+temp;
                multiple +=multiple;
             }
             Dividend -=temp;
             answer +=multiple;
            
        }
        
        
        return negative ? -(long long)answer:(long long)answer;
    }
};