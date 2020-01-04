#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string straight, rev, temp;

    cin>>straight;
    cin>>rev;

    temp = rev;

    reverse(temp.begin(), temp.end());

    if(straight == temp)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

/**
code
edoc
output:
YES

abb
aba
output:
NO

code
code
output:
NO
**/
