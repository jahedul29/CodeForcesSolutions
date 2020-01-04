#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        int p,q;

        cin>>p>>q;

        int room_space = q-p;

        if(room_space > 1)
            counter++;
    }

    cout<<counter<<endl;

    return 0;
}

/**
3
1 1
2 2
3 3
output:
0

3
1 10
0 10
10 10
output:
2
**/
