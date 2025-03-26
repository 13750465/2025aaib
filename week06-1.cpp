// week06-1.cpp
// LeetCode 2033.
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN);
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                int k = i*N+j;
                a[k] = grid[i][j];
            }
        }
        sort(a.begin(),a.end());
        int mid = a[MN/2];
        int ans = 0;
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);
            if(diff%x !=0) return -1;
            ans += diff/x;
        }
        return ans;
    }
};
