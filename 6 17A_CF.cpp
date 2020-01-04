#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;

    cin>>n;

    if(n == 1 || n==2|| n==3|| n==4)
    {
        counter = 1;
        cout<<counter<<endl;
        return 0;
    }

    counter+=(n/5);
        if((n%5) != 0)
            counter++;

    cout<<counter<<endl;

    return 0;
}

/**
5
output:
1

12
output:
3
**/
