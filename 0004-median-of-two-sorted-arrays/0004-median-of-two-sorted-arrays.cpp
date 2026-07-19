class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int d = nums1.size() + nums2.size();
        vector<int> starr;
        for (int x : nums1) {
            starr.push_back(x);
        }
        for (int x : nums2) {
            starr.push_back(x);
        }
        sort(starr.begin(), starr.end());
        if (d % 2 == 0) {
            return (starr[d / 2] + starr[d / 2 - 1]) / 2.0;
        } else {
            return (starr[d / 2]);
        }
    }
};