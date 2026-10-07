class Solution {
public:
    void permutation(vector<int>&nums,set<vector<int>> &set,int begin){
        if(begin == nums.size()){
           set.insert(nums);
           return;
        }
        for(int i=begin;i<nums.size();i++){
            if(i!=begin && nums[i]==nums[begin]){
                continue;
            }
            swap(nums[i],nums[begin]);
            permutation(nums,set,begin+1);
            swap(nums[i],nums[begin]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> set;
        sort(nums.begin(),nums.end());
        vector<vector<int>> list;
        permutation(nums,set,0);
        for(auto it : set){
            list.push_back(it);
        }
        return list;
        
    }
};