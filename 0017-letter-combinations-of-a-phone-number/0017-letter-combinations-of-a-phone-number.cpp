class Solution {
    private:
        void solve (int index, const string &digits, string &current ,vector<string>& answer, const vector<string>keypad){
          if(index==digits.length()){
            answer.push_back(current);
            return ;
          }
          int digit = digits[index]-'0';
          for(char ch : keypad[digit]){
            current.push_back(ch);
            solve(index+1,digits,current,answer,keypad);
            current.pop_back();
          }
        
        }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> answer;
        if (digits.empty()){
            return answer;
        }
        string current="";
        const vector<string> keypad = {" "," ", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,digits,current,answer,keypad);
        return answer;

    }
};