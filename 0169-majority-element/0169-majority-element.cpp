class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sum = nums[0];
        int count = 0;
        for(int i = 1;i<nums.size();i++){
            if(sum == nums[i]){
                count++;

            }
            else if(count == 0){
                sum = nums[i];
            }
            else{
               count--; 
            }
        }
        return sum;
    }
};