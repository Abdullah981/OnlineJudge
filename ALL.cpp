//#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false)
#define clr cin.tie(NULL)

#define i1(x) cin >> x
#define i2(x,y) cin >> x >> y
#define i3(x,y,z) cin >> x >> y >> z
#define i4(w,x,y,z) cin >> w >> x >> y >> z
#define i5(w,x,y,z,a) cin >> w >> x >> y >> z >> a
#define min_pq(x) priority_queue<x, vector<x>, greater<x> >
#define max_pq(x) priority_queue<x>
#define t_st clock_t start = clock(); 
#define t_en clock_t stop = clock();
#define t_p double duration = double(stop-start) / double(CLOCKS_PER_SEC); printf("%.10f\n",duration);

#define os(x) cout << x << " "
#define o(x) cout << x
#define ol(x) cout << x << "\n"

#define ulli unsigned long long int //64
#define lli long long int //64
#define uli unsigned long int //32
#define li long int //32
#define pi 3.1415926535897932384626433832795

using namespace std;

int main()
{
    fast;
    clr;
    int N;
    
    vector<int> a = {1,2,5,8,10,15,16,20};
    auto it = upper_bound(a.begin(), a.end(), 10);
    ol((*it));
    /*
    while(1)
    {
        i1(N);
        if(N==0) { break; }
        
        vector<li> stck(N);
        for(int i=0;i<N;++i) { i1(stck[i]); }
        sort(stck.begin(), stck.end());
        li ways=0;
        for(li sum=N-1;sum>1;--sum)
        {
            for(li sec=sum-1;sec>0;--sec)
            {
                for(li fst=sec-1;fst>=0;--fst)
                {
                    if(stck[fst]+stck[sec]<stck[sum]) { ways+= fst+1; break; }
                }
            }
        }
        ol(ways);
    }
    */
    return 0;
}

//getline(cin,s1); // string input until end of line
//getc(stdin); // reads a single character, don't need to press enter. so basically reads '\n' as input
//cin.get() // Reads a single character, don't need to press enter, better than getc;
//read.clear();//resetting stuffs
//read.seekg(0,ios::beg);//going back to the start of the file
 
//freopen("input.txt", "r", stdin); 
//freopen("output.txt", "w", stdout);

//set.lower_bound(x) returns first element(iterator) e where e>=x
//set.upper_bound(x) return first element(iterator) e where e>x