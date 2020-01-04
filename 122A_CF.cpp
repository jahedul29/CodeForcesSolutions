#include<bits/stdc++.h>
using namespace std;

bool IsLucky(int n)
{
    int counter_lucky = 0, counter =0;

    while(n!=0)
    {
        int temp = n%10;
        if(temp == 7 || temp ==4)
            counter_lucky++;

        counter++;
        n = n/10;
    }

    if(counter == counter_lucky)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cin>>n;

    for(int i = 2; i<=n; i++)
    {
        if(IsLucky(i))
            if(n%i == 0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
    }

    cout<<"NO"<<endl;

    return 0;
}

/**
47
output:
YES

16
output:
YES

78
output:
NO
**/
