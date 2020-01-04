#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        bool check;
        cin>>check;
        if(check)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }

    cout<<"EASY"<<endl;

    return 0;
}

/**
3
0 0 1
output:
HARD

1
0
output:
EASY
**/
