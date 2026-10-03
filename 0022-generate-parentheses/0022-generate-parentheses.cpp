class Solution {
    void solve(vector<string>&answer,string &ch,int open ,int close,int n){
        if(open == n && close == n){
            answer.push_back(ch);
            return ;
        }
        if(open < n){
            ch.push_back('(');
            solve(answer,ch,open+1,close,n);
            ch.pop_back();
        }
        if(close < open){
            ch.push_back(')');
            solve(answer,ch,open,close+1,n);
            ch.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> list;
        string m;
        solve(list,m,0,0,n);

        return list;
    }
};