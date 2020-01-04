#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum =0;

    cin>>n;

    for(int i =0; i<n; i++)
    {
        int s;
        cin>>s;
        sum+=s;
    }

    if(sum % 8 !=0)
        cout<<ceil(float(sum)/4);
    else
        cout<<ceil(float(sum)/4)+1;

    return 0;
}

/**
8
2 3 4 4 2 1 3 1
output:
4

8
2 3 4 4 2 1 3 1
output:
5
**/
