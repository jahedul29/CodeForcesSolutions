#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string feeling;

    cin>>n;

    for(int i =1; i<=n; i++)
    {
        if(i == 1)
            feeling = "I hate it";
        else if(i%2 ==1)
        {
            feeling = feeling.substr(0, feeling.size()-2);
            feeling+="that I hate it";
        }
        else
        {
            feeling = feeling.substr(0, feeling.size()-2);
            feeling+="that I love it";
        }
    }

    cout<<feeling<<endl;

    return 0;
}

/**
1
output:
I hate it

2
output:
I hate that I love it

3
output:
I hate that I love that I hate it
**/
