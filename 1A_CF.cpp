#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a ,stone_primery, area_rec, area_square;

    cin>>n>>m>>a;

    area_rec = n * m;
    area_square = a * a;

    if(area_square >= area_rec)
    {
        printf("%d", 1);
        return 0;
    }


    stone_primery = ceil(area_rec/area_square);

    if(stone_primery % 2 == 1)
        stone_primery = stone_primery + 1;


    int dec1 = (stone_primery * area_square)%n;
    int dec2 = (stone_primery * area_square)%m;

    if(dec1 == 0 || dec2 == 0)
        printf("%lld", stone_primery);
    else
    {
        long long int new_width =
    }
        printf("%lld", (area_rec*area_square)/n);

    return 0;
}
