class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>c(nums1.begin(),nums1.end());
        c.insert(c.end(),nums2.begin(),nums2.end());

        sort(c.begin(),c.end());

        int len = c.size();

        if(len % 2 ==0){
            return (c[len/2] + c[len/2 -1]) / 2.0;
        }

        else{
            return c[len/2];
        }
    }
};
