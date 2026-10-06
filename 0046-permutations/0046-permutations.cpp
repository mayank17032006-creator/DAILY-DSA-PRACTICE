class Solution {

public:
    void permutation(vector<int>&nums,vector<vector<int>>&answer,int begin){
        if(begin>=nums.size()){
            answer.push_back(nums);
            return;
        }
        for(int i= begin;i<nums.size();i++){
            swap(nums[begin],nums[i]);
            permutation(nums,answer,begin+1);
            swap(nums[begin],nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>list;
        permutation(nums,list,0);
        return list;
            
 }
};