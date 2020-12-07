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

vector<lli> str_to_vecInt(string line)
{
    vector<lli> n;
    string s="";
    
    for(int i=0;i<line.length();++i)
    {
        if(line[i]==' ')
        {
            lli x = stoi(s); n.push_back(x); s = "";
        }
        else { s+= line[i]; }
    }
    lli x = stoi(s); n.push_back(x);
    return n;
}

lli gcd(lli a, lli b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ulli trailingzero(ulli n)
{
    ulli count=0;
    
    for(ulli i=5;n/i>=1;i*=5)
    {
        count+= n/i;
    }
    return count;
}

int main()
{
    fast;
    clr;
    freopen("input.txt", "r", stdin);
    
    int T;
    i1(T);
    string s;
    cin.ignore();
    
    while(T--)
    {
        int n;
        vector<int> num;
        while(1) 
        {
            i1(n);
            char c = cin.get();
            num.push_back(n); 
            if(c==13) { break; }
        }
        for(int i=0;i<num.size();++i) { os(num[i]); } ol("");
    }
    
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