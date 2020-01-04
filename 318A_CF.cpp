#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    int odd;

    cin>>n>>k;

    if(n%2 == 0)
    {
        odd = n/2;
    }
    else
    {
        odd = n/2+1;
    }

    if(k<=odd)
    {
        cout<<(2*k-1)<<endl;
    }
    else
    {
        cout<<2*(k-odd)<<endl;
    }

    return 0;
}


/**
10 3
output:
5

7 7
output:
6
**/
