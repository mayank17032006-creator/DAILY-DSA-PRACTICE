class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        int low = 1;

        int high = x;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(1LL*mid*mid == x){
                return mid;
            }
            else if(1LL*mid*mid > x){
                high = mid-1;
            }
            else if(1LL*mid*mid < x) {
                low = mid+1; 
            }

        }
        return high;
    }
};