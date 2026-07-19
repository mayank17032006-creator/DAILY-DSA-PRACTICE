class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0;
       int maxlen = 0;
       vector<int> sub(256,-1);
       for(int right = 0;right<s.length();right++){
        if (sub[s[right]] != -1){ 
            left = max(left,sub[s[right]]+1);
        }
        sub[s[right]]=right;
        maxlen = max(maxlen,right-left+1);
       }

       return maxlen;
    }

};