class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
      
        if(9LL*num < sum){
            return "";
        }
          int q = sum/9;
        int r = sum%9;
      string answer ;
     
        if(q){
        answer.append(q,'9');
        }
        if(r){
            answer.push_back(r+'0');
        }
        while(answer.size()<num){
            answer.push_back('0');
        }

        
        return answer;
    }
};