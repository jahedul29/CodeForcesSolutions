#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, counter = 0;

    cin>>a>>b;

    while(a<=b)
    {
        counter++;
        a *= 3;
        b *= 2;
    }
    cout<<counter<<endl;

    return 0;
}

/**
4 7
output:
2

4 9
output:
3

1 1
output:
1
**/
