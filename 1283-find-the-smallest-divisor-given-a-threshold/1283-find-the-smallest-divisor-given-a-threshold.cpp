class Solution {
public:
    long long div(int mid,vector<int>&nums){
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=(nums[i]+mid-1)/mid;       
             }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int divisor = INT_MAX;;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long value = div(mid,nums);
            
            if(value<=threshold){
                divisor = min(divisor,mid);
                high = mid-1; 
            }
            else{
                low = mid+1;
            }
        }
        return divisor;
    }
};