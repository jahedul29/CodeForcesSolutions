#include<bits/stdc++.h>
using namespace std;

bool compare(int i, int j){return i<j;}
int main()
{
    int n;
    vector<int >column;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        column.push_back(a);
    }
    sort(column.begin(), column.end(), compare);

    for(int i = 0; i<n; i++)
    {
        cout<<column[i]<<' ';
    }
    return 0;
}

/**
4
3 2 1 2
output:
1 2 2 3

3
2 3 8
output:
2 3 8

**/
