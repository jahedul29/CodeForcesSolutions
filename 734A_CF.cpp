#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sequence;
    int n;

    int count_A = 0, count_D = 0;

    cin>>n;

    for(int i = 0; i<n; i++)
    {
        char status;
        cin>>status;

        if(status == 'A')
            count_A++;
        else
            count_D++;
    }

    if(count_A > count_D)
        cout<<"Anton"<<endl;
    else if(count_A < count_D)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}

/**
6
ADAAAA
output:
Anton

7
DDDAADA
output:
Danik

6
DADADA
output:
Friendship
**/
