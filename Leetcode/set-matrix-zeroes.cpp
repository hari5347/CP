// https://leetcode.com/problems/set-matrix-zeroes
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c = 1;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (matrix[row][col] == 0) {
                    if (col == 0)
                        c = 0;
                    else 
                        matrix[0][col] = 0;
                    
                    matrix[row][0] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] != 0) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }   
        
        if (c == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    
    }
};