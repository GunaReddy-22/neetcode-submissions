class Solution {
public:
    
    int uniquePaths(int m, int n) {
        vector<int>prev(n,1),curr(n,0);

        
        
        for(int i =1;i<m;i++){
            curr[0] =1;
            for(int j = 1;j<n;j++){
                
               int up = prev[j];
               int left = curr[j-1];

               curr[j] = up + left;

            }
            prev = curr;
        }

        return prev[n-1];


        

    }
};
