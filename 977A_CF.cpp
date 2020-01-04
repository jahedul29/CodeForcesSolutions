#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, counter = 0;
    int temp_previous;

    cin>>n;

    for(int i =0; i<n; i++)
    {
        cin>>temp;

        if(i == 0)
        {
            counter++;
            temp_previous = temp;
            continue;
        }

        if(temp != temp_previous)
            counter++;

        temp_previous = temp;
    }

    cout<<counter<<endl;

    return 0;
}

/**
6
10
10
10
01
10
10
output:
3

4
01
01
10
10
output:
2
**/
