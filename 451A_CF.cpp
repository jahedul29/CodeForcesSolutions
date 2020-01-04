#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, min_move;

    cin>>n>>m;

    if(n<=m)
        min_move = n;
    else
        min_move = m;

    if(min_move%2 == 0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;

    return 0;
}

/**
2 2
output:
Malvika

2 3
output:
Malvika

3 3
output:
Akshat
**/
