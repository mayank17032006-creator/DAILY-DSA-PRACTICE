class Solution {
public:
    int NumberOfDays(vector<int>&nums,int mid){
        int group = 1;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                group++;
                sum = nums[i];
            }
        }
        return group;
    } 
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low  = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans  = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            int group = NumberOfDays(weights,mid);
            if(group <= days){
                ans = min(ans,mid);
                high = mid-1;
            }
            else {
                low = mid+1;
            }
           
        }
        return ans;
        
    }
};