class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int i=0;
        int j=n-1;
        int maxprod = 0;

        while(i<j) {
            int width = j-i;

            int prod = min(heights[i],heights[j])*width;

            maxprod = max(maxprod,prod);

            heights[i] < heights[j] ? i++ : j--;
           
                   }
            
            
        return maxprod;    
    }
};
