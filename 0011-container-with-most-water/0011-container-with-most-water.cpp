class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int  maxi = INT_MIN;
        while(left<=right){
           

            int width = right - left;
            int length = min(height[left],height[right]);
            int area = width*length;
            maxi = max(maxi,area);

            if(height[left] < height[right]){
                left++;

            }
            else{

                right--;
            }

        }
        return maxi;
    }
};