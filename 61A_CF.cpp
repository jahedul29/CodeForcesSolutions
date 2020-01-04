#include<bits/stdc++.h>
using namespace std;

int main()
{
    string firstNumber, secondNumber, output;
    cin>>firstNumber>>secondNumber;

    for(int i =0; i<firstNumber.size(); i++)
    {
        if(firstNumber[i] == secondNumber[i])
            output+='0';
        else
            output+='1';
    }

    cout<<output<<endl;

    return 0;
}

/**
1010100
0100101
output:
1110001

000
111
output:
111

1110
1010
output:
0100

01110
01100
output:
00010

**/
