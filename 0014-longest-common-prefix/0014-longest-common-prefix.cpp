class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0;
        int length = strs.size();
        string st="";
        while(i<strs[0].length()){
            if(strs[0][i]==strs[length-1][i]){
                st+= strs[0][i];
            }
            else {
                break;
            }
            i++;
        }
        return st;
    }
};