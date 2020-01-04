#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    cin>>n;

    if(n%2 == 0)
    {
        cout<<n/2<<endl;
    }
    else
        cout<<-(n/2 + 1)<<endl;


    return 0;
}

/**
4
output:
2

5
output:
-3
**/
