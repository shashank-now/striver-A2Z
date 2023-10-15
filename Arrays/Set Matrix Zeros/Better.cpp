#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();

	int colManager[m] = {0}, rowManager[n] = {0};
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				colManager[j] = 1;
				rowManager[i] = 1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] != 0){
				if(colManager[j] == 1 || rowManager[i] == 1)
					matrix[i][j] = 0;
			}
		}
	}
}

int main(){
  vector<vector<int>> matrix = {{1,2,3,4,0}, {0, 3,4, 5, 1}, {8, 1, 0, 4, 0}};
  return 0;
}
