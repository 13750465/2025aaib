// week14-4.cpp
// 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> left(M), up(N);
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){
                    left[i] = 7;
                    up[j] = 7;
                }
            }
        }
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(left[i]==7 || up[j]==7) matrix[i][j] = 0;
            }
        }
    }
};
