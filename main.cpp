/*
#include <bits/stdc++.h>

#define ulli unsigned long long int //64

using namespace std;

int main()
{
    ulli start, end;
    
    while(scanf("%llu %llu",&start, &end)==2)
    {
        if(start==0 && end==0) { break; }
        int count = 0;
        for(ulli num=start;num<=end;++num)
        {
            if(sqrt(num)==(int)sqrt(num)) { ++count; }
        }
        cout << count << "\n";
    }
    return 0;
}

*/