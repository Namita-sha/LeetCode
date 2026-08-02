class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh = 0, minutes = 0;
        int m = grid.size(), n = grid[0].size();

        // Push all rotten + count fresh
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2) q.push({i,j});
                if(grid[i][j] == 1) fresh++;
            }
        }
        if(fresh == 0) return 0;

        int dirs[5] = {0,1,0,-1,0};

        // BFS level by level
        while(!q.empty()){
            int sz = q.size();
            bool changed = false;
            while(sz--){
                auto [x,y] = q.front(); q.pop();
                for(int k=0;k<4;k++){
                    int nx = x + dirs[k], ny = y + dirs[k+1];
                    if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1){
                        grid[nx][ny] = 2;
                        fresh--; changed = true;
                        q.push({nx,ny});
                    }
                }
            }
            if(changed) minutes++;
        }
        return fresh==0 ? minutes : -1;
    }
};
