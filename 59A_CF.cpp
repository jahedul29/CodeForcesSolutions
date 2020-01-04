#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp;
    cin>>s;

    int count_lower = 0, count_upper = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(islower(s[i]))
           count_lower++;
        else
            count_upper++;
    }

    temp.resize(s.length());

    if(count_lower >= count_upper)
        transform(s.begin(), s.end(),temp.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), temp.begin(), ::toupper);

     cout<<temp<<endl;

    return 0;
}

/**
HoUse
output:
house

ViP
output:
VIP

maTRIx
output:
matrix
**/
