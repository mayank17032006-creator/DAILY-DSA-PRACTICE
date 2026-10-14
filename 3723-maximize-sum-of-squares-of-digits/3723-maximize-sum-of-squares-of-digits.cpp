class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
      
        if(9LL*num < sum){
            return "";
        }
          int q = sum/9;
        int r = sum%9;
      string answer ;
     
        
        answer.append(q,'9');
        num-=q;
        
        if(r){
            answer.push_back(r+'0');
            --num;
        }
       answer.append(num,'0');

        
        return answer;
    }
};