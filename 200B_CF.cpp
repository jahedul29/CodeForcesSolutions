#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;

    cin>>n;

    for(int i =0; i<n; i++)
    {
        int p;
        cin>>p;
        sum+=p;
    }
    cout<<fixed<<setprecision(12)<<double(sum)/n<<endl;

    return 0;
}

/**
3
50 50 100
output:
66.666666666667

4
0 25 50 75
output:
37.500000000000
**/
