#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2 == 0)
        if((n/2)%2 == 0)
            printf("YES");
        else
            printf("NO");
    else
        printf("NO");

    return 0;
}
