class Solution {
public:
    bool isPalindrome(int x) {
        int z=x;
        long long  int y=0;
     
        while(x>0){
        int c=0;
        c=x%10;
        y=y*10+c;
        x=x/10;
        }
        if(y==z){
            return true;
        }
        else{
            return false;
        }
    }
};