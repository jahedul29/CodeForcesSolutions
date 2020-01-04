#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input, temp;
    int flag;

    cin>>input;

    if(islower(input[0]))
        temp = char(toupper(input[0]));
    else
        temp = char(tolower(input[0]));


    for(int i=1 ; i<input.size(); i++)
    {
        if(isupper(input[i]))
            temp+=char(tolower(input[i]));
        else
        {
            cout<<input<<endl;
            return 0;
        }
    }

    cout<<temp<<endl;

    return 0;
}

/**
cAPS
output:
Caps

Lock
output:
Lock

**/
