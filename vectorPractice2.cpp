#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > matrix;
	for(int i=0;i<3;++i) {
		//Create a vector
		vector<int> row;
		for(int j=0;j<3;++j){
			int value;
			cin >> value;
			row.push_back(value);
		}
		//Push the row in matrix
		matrix.push_back(row);
	}
    return 0;
}

