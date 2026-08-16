class Solution {

private :
    void bfs(queue<pair<int,int>>&q,vector<vector<int>>&vis,vector<vector<int>>&heights) {

        int n = heights.size();
        int m = heights[0].size();

        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >=0 && nrow <n && ncol >=0 && ncol <m && !vis[nrow][ncol]) {
                    
                    if(heights[row][col] <= heights[nrow][ncol]){

                        vis[nrow][ncol] = 1;
                        q.push({nrow, ncol});

                    }
                }
            }

             
        }



    

    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {    
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>>pacific(n,vector<int>(m,0));
        vector<vector<int>>atlantic(n,vector<int>(m,0));

        queue<pair<int,int>>pacificQ;
        queue<pair<int,int>>atlanticQ;

        for(int col =0;col<m;col++){
            pacific[0][col] = 1;
            pacificQ.push({0,col});
        }

        for(int row =0;row<n;row++){
            pacific[row][0] = 1;
            pacificQ.push({row,0});
        }

        for(int col =0;col<m;col++){
            atlantic[n-1][col] = 1;
            atlanticQ.push({n-1,col});
        }

        for(int row=0;row<n;row++){
            atlantic[row][m-1] =1;
            atlanticQ.push({row,m-1});
        }

        bfs(pacificQ,pacific,heights);
        bfs(atlanticQ,atlantic,heights);

        vector<vector<int>>ans;

        for(int row =0;row<n;row++) {
            for(int col =0;col<m;col++){
                if(pacific[row][col] && atlantic[row][col]) {
                    ans.push_back({row,col});
                }
            }
        }

        return ans;

    }
};
