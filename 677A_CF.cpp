#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, total_width = 0;

    cin>>n>>h;

    for(int i =0 ; i<n; i++)
    {
        int width;
        cin>>width;

        if(width <= h)
            total_width+=1;
        else
            total_width+=2;
    }

    cout<<total_width<<endl;

    return 0;
}

/**
3 7
4 5 14
output:
4
6 1
1 1 1 1 1 1
output:
6

6 5
7 6 8 9 10 5
output:
11

**/
