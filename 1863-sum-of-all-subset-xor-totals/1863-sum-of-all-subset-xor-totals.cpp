class Solution {
public:
    void xo(vector<int>& nums,int currxor, int begin, int& add) {

        if (begin == nums.size()) {
           
            add = add + currxor;
          
            return ;
        }
        xo(nums,currxor^nums[begin],begin+1,add);
        xo(nums,currxor,begin+1,add);
    }
    int subsetXORSum(vector<int>& nums) {
        int begin = 0;
        int add = 0;
        int currxor = 0;
        
     
        xo(nums, currxor, begin, add);
        return add;
    }
};