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
#define tst clock_t start = clock(); 
#define ten clock_t stop = clock();
#define tp double duration = double(stop-start) / double(CLOCKS_PER_SEC); printf("%.10f\n",duration);

#define os(x) cout << x << " "
#define o(x) cout << x
#define ol(x) cout << x << "\n"

#define ulli unsigned long long int //64
#define lli long long int //64
#define uli unsigned long int //32
#define li long int //32
#define pi 3.1415926535897932384626433832795

using namespace std;


lli trailingzero(lli n)
{
    lli count=0;
    
    for(lli i=5;n/i>=1;i*=5)
    {
        count+= n/i;
    }
    return count;
}
string timeConversion(string s) 
{
    if(s[s.length()-2]=='P')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s.erase(s.size()-2, 2);
        }
        else
        {
            int h = stoi(s.substr(0,2));
            h+=12;
            string hs = to_string(h);
            s[0] = hs[0]; s[1] = hs[1];
            s.erase(s.size()-2, 2);
        }
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0'; s[1]='0';
            s.erase(s.size()-2, 2);
        }
        else { s.erase(s.size()-2, 2); }
    }
    return s;
}

int main()
{
    fast;
    clr;
    //tst
    //ten
    //tp
    
    ol(timeConversion("02:05:45PM"));
    
    return 0;
}

//getline(cin,s1); // string input until end of line
//getc(stdin); // reads a single character, don't need to press enter. so basically reads '\n' as input
//read.clear();//resetting stuffs
//read.seekg(0,ios::beg);//going back to the start of the file
 
//freopen("input.txt", "r", stdin); 
//freopen("output.txt", "w", stdout);

//set.lower_bound(x) returns first element(iterator) e where e>=x
//set.upper_bound(x) return first element(iterator) e where e>x