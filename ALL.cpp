//#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false)
#define clr cin.tie(NULL)

#define i1(x) cin >> x
#define i2(x,y) cin >> x >> y
#define i3(x,y,z) cin >> x >> y >> z
#define i4(w,x,y,z) cin >> w >> x >> y >> z
#define i5(w,x,y,z,a) cin >> w >> x >> y >> z >> a

#define os(x) cout << x << " "
#define o(x) cout << x
#define ol(x) cout << x << "\n"

#define ulli unsigned long long int //64
#define lli long long int //64
#define uli unsigned long int //32
#define li long int //32


using namespace std;


int main()
{
    fast;
    clr;
    
    ulli n;
    lli x;
    i2(n,x);
    
    lli a[n]; lli cache[n];
    
    for(ulli i=0;i<n;++i) 
    { 
        i1(a[i]);
        if(i==0)
        {
            cache[i] = a[i];
        }
        else if(i>0)
        {
            cache[i] = a[i] + cache[i-1];
        }
    }
    
    lli mx_sub = 0, left=-1, right=-1;
    
    bool mul = false;
    for(ulli i=0;i<n;++i)
    {
        /*without multiplying x*/
        /*just one element*/
        if(a[i]>mx_sub) { left=i; right=i; mx_sub = a[i]; mul = false; }
        /*from 0 to i*/
        else if(cache[i]>mx_sub) { left=0, right=i; mx_sub = cache[i]; mul = false; }
        /*from i to n-1*/
        else if(i>0 && cache[n-1]-cache[i-1]>mx_sub) { left=i, right=n-1; mx_sub = cache[n-1]-cache[i-1]; mul = false; }
        else if(i==0 && cache[n-1]>mx_sub) { left=0; right=n-1; mx_sub = cache[n-1]; mul = false; }
        
        /*multiplying x*/
        /*just one element*/
        if(a[i]*x>mx_sub) { left=i; right=i; mx_sub = a[i]*x; mul = true; }
        /*from 0 to i*/
        else if(cache[i]*x>mx_sub) { left=0, right=i; mx_sub = cache[i]*x; mul = true; }
        /*from i to n-1*/
        else if(i>0 && (cache[n-1]-cache[i-1])*x>mx_sub) { left=i, right=n-1; mx_sub = (cache[n-1]-cache[i-1])*x; mul = true; }
        else if(i==0 && cache[n-1]*x>mx_sub) { left=0; right=n-1; mx_sub = cache[n-1]*x; mul = true; }
        
    }
    
    if(mul)
    {s
        mx_sub = 0;
        for(lli i=left;i<=right;++i) { a[i]*=x; }
        
        cache[0] = a[0];
        for(lli i=1;i<n;++i) { cache[i] = a[i]+cache[i-1]; }
        
        for(ulli i=0;i<n;++i)
        {
            /*without multiplying x*/
            /*just one element*/
            if(a[i]>mx_sub) { left=i; right=i; mx_sub = a[i]; }
            /*from 0 to i*/
            else if(cache[i]>mx_sub) { left=0, right=i; mx_sub = cache[i]; }
            /*from i to n-1*/
            else if(i>0 && cache[n-1]-cache[i-1]>mx_sub) { left=i, right=n-1; mx_sub = cache[n-1]-cache[i-1]; }
            else if(i==0 && cache[n-1]>mx_sub) { left=0; right=n-1; mx_sub = cache[n-1]; }
        }
        ol(mx_sub);
        
    }
    else
    {
        ol(mx_sub);
    }
    return 0;

}

//getline(cin,s1); // string input until end of line
//read.clear();//resetting stuffs
//read.seekg(0,ios::beg);//going back to the start of the file
 
//freopen("input.txt", "r", stdin); 
//freopen("output.txt", "w", stdout);

//set.lower_bound(x) returns first element(iterator) e where e>=x
//set.upper_bound(x) return first element(iterator) e where e>x
