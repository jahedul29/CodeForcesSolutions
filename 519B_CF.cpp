#include<bits/stdc++.h>
using namespace std;

bool compare(int i, int j){return i<j;}

int main()
{
    int n, temp;
    vector<vector<long int > >matrix;

    cin>>n;

    temp = n;
    for(int i =0; i<3; i++)
    {
        vector<long int >row;
        for(int j = 0; j<temp; j++)
        {
            long int a;
            cin>>a;
            row.push_back(a);
        }
        temp-=1;
        sort(row.begin(), row.end(), compare);
        matrix.push_back(row);
    }

    for(int i = 0; i<2; i++)
    {
        temp = matrix[i].size()-1;
        for(int j = 0; j<temp; j++)
        {
            if(matrix[i][j] != matrix[i+1][j])
            {
                cout<<matrix[i][j]<<endl;
                break;
            }
            else if(j== (temp-1))
            {
                cout<<matrix[i][j+1];
            }
            continue;
        }
    }

    return 0;
}

/**
5
1 5 8 123 7
123 7 5 1
5 1 7
output:
8
123

6
1 4 3 3 5 7
3 7 5 4 3
4 3 7 5
output:
1
3
**/
