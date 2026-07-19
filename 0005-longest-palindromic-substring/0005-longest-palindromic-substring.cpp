class Solution {
public:
   int start = 0;
   int maxlen = 1;
    
    void  expand(string &s,int left,int right){

        while(( left>=0 && right <s.length())&&s[left]==s[right]){
            if(right-left+1>maxlen){
                start = left;
                maxlen = right-left+1;
            }
                left--;
                right++;
        }
    }
    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s;
        }

       
    

        for(int i=0;i<s.length();i++){
           
                expand(s,i,i+1);

                expand(s,i,i);
            
        }
    return s.substr(start,maxlen);

    }

    
    
};