class Solution {
public:
 void set(vector<vector<int>>&answer,vector<int>&temp,int index,vector<int>&nums){
   
      answer.push_back(temp);
        for(int i = index;i<nums.size();i++){

        
        temp.push_back(nums[i]);
        set(answer,temp,i+1,nums);
        temp.pop_back();

        // set(answer,temp,index+1,nums);
        }
 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int>temp;
        set(answer,temp,0,nums);
        return answer;
        
    }
};