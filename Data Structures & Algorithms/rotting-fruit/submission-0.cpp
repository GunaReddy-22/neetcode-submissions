class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;

        int fresh =0;

        for(int row =0;row<n;row++){
            for(int col =0;col<m;col++){
                if(grid[row][col]==2){
                    vis[row][col] = 1;
                    q.push({row,col});
                }
                if(grid[row][col]==1){
                    fresh++;
                }
            }
        }

        int time =0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};


        while(!q.empty()){

            int size = q.size();
            bool rotten = false;

          for(int i =0;i<size;i++){

            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int j=0;j<4;j++){
                int nrow = row + delrow[j];
                int ncol = col + delcol[j];

                if(nrow>=0 && nrow <n && ncol >=0 && ncol <m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});

                    fresh--;
                    rotten = true;
                }
            }

          }

          if(rotten) time++;

        }
        if(fresh>0) return -1;
    

        return time;

        

        
    }
};
