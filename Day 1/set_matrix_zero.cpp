#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
        unordered_map<int,int> r,c;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(auto i:r){
            for(int j=0;j<m;j++)
                matrix[i.first][j]=0;
        }
         for(auto i:c){
            for(int j=0;j<n;j++)
                matrix[j][i.first]=0;
        }
		return matrix;
}