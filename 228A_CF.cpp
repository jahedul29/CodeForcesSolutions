#include<bits/stdc++.h>
using namespace std;
bool compare(int i, int j)
{
    return(i<j);
}

int main()
{
    long int s, previous;
    vector<long int> inputs;
    for(int i =0; i<4; i++)
    {
        cin>>s;
        inputs.push_back(s);
    }

    sort(inputs.begin(), inputs.end(), compare);

    int counter = 0;

    for(int i =0; i<inputs.size(); i++)
    {
        if(i == 0)
        {
            previous = inputs[i];
            continue;
        }
        if(inputs[i] == previous)
            counter++;
        previous = inputs[i];
    }

    cout<<counter<<endl;

    return 0;
}

/**
1 7 3 3
output:
1

7 7 7 7
output:
3
**/
