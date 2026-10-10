class Solution {
public:
 void set(vector<vector<int>>&answer,vector<int>&temp,int index,vector<int>&nums){
    if(index==nums.size()){
        answer.push_back(temp);
        return ;
    }
   
        temp.push_back(nums[index]);
        set(answer,temp,index+1,nums);
        temp.pop_back();
        set(answer,temp,index+1,nums);
 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int>temp;
        set(answer,temp,0,nums);
        return answer;
        
    }
};