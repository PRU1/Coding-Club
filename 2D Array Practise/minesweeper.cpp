#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> vec, vector<vector<char>> ref, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (ref[i][j] == '*') { // Print locations of bombs
				cout << '*';
			}
			else {
			cout << vec[i][j];
			}
		}
		cout << "\n";
	}
}
int main() {
	// take input 
	unsigned int rows; unsigned int cols;
	cin >> rows >> cols;
	// input grid
	vector<vector<char>> input_grid;
	// create 2d vector with input. Fill it with 0s
	vector <vector<int>> output_grid (rows, vector<int> (cols, 0));
	// inputs grid into input_grid
	for (int r = 0; r < rows; ++r) { // row traversal
		char temp;
		vector<char> temp2;
		for (int c = 0; c < cols; ++c) { // column traversal
			cin >> temp;
			temp2.push_back(temp);
			if (temp == '*') { // Bomb is asterix. Add one to cells touching it in output_grid
				// If r-1 < 0, do nothing
				// If r+1 > rows, do nothing
				// If c-1 < 0, do nothing
				// If c+1 > cols, do nothing
				if (r - 1 >= 0 && c-1 >= 0) 
					++output_grid[r - 1][c - 1];
				if (r - 1 >= 0 && c + 1 < cols) 
					++output_grid[r - 1][c + 1];
				if (r - 1 >= 0) 
					++output_grid[r - 1][c];
				if (r + 1 < rows) 
					++output_grid[r + 1][c];
				if (r + 1 < rows && c - 1 >= 0)
					++output_grid[r + 1][c - 1];
				if (r + 1 < rows && c + 1 < cols)
					++output_grid[r + 1][c + 1];
				if (c - 1 >= 0)
					++output_grid[r][c - 1];
				if (c + 1 < cols)
					++output_grid[r][c + 1];
			}
		}
		input_grid.push_back(temp2);
	}
	print(output_grid, input_grid, rows, cols);
	return 0;
}
