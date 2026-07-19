class Solution {
public:
 int getvalue(char p){
        if( p=='I') return 1;
        if( p=='V') return 5;
        if( p=='X') return 10;
        if( p=='L') return 50;
        if( p=='C') return 100;
        if( p=='D') return 500;
        if( p=='M') return 1000;
        return 0;
        }
     int romanToInt(string s) {
        int result=0;
       
        for(int i=0;i<s.length();i++){
           if(getvalue(s[i])<getvalue(s[i+1])){
            result-=getvalue(s[i]);
           }
           else{
            result+=getvalue(s[i]);
           }
        }
   return result;     
}
};