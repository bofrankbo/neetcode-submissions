class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int island_count = 0;
        int m = grid.size();
        int n = grid[0].size();

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j] == '1'){
                    island_count++;


                    queue<pair<int, int>> q;
                    q.push({i, j});
                    grid[i][j] = '0';

                    while(!q.empty()){
                        auto [r, c] = q.front();
                        q.pop();

                        for (int d=0; d<4; d++){
                            int nr = r + dirs[d][0];
                            int nc = c + dirs[d][1];

                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == '1'){
                                q.push({nr, nc});
                                grid[nr][nc] = '0';
                            }
                        }
                    }
                }
            }
        }
        return island_count;
    }
};
