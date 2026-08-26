class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        if(s[0]==')'||s[0]=='}'||s[0]==']'||s.length()==0){
            return false;
        }

        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack.push_back(s[i]);
            }
            else {
            if(stack.empty()){
                return false;
            }

            if(s[i]==')' && stack.back()=='('){
               stack.pop_back();
            }
            else if(s[i]=='}' && stack.back()=='{'){
                stack.pop_back();
            }
            else if(s[i]==']' && stack.back()=='['){
                stack.pop_back();
            }
            else {
                return false;
            }
        }
        }

        return stack.empty();
}
};