/*
#include <bits/stdc++.h>

#define ulli unsigned long long int //64
#define lli long long int //64
#define uli unsigned long int //32
#define li long int //32

using namespace std;

bool isCompletion(int z) // if a number is 2^n -1 or not
{
    int bitval = 0;
    z += 1; while (z % 2 == 0) {z /= 2; bitval++;}
    return (z == 1);
}

bool isPowerOfTwo (int x) // if a number is power of 2 or not
{
    return x && (!(x&(x-1)));
}

string to_binary(lli x)
{
    string s = "";
    
    while(x>0)
    {
        lli rem = x%2;
        s = rem==0 ? "0" + s : "1" + s;
        x/=2;
    }
    return s;
}

ulli power(ulli x, ulli n, ulli m)
{
    while((n&1)==0)
    {
        x = x*x;
        n/=2;
    }
    ulli p = x;
    n/=2;
    while(n>0)
    {
        x = x*x;
        if((n&1)==1)
        {
            p = p*x;
        }
        n/=2;
    }
    return p;
}

ulli gcd(ulli a, ulli b)
{
    return b == 0 ? a : gcd(b, a % b);
}
 
ulli lcm(ulli a, ulli b)
{
    return (a / gdc(a,b)) * b;
}

int fact(int n)
{
    if(n<=1) return 1;
    
    int res = 1;
    for(int num=2;num<=n;++num)
    {
        res *= num;
    }
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n-r));
}

ulli sumofdigits(ulli x)
{
    ulli sum=0;
    while(x>0)
    {
        sum+= (x%10);
        x/=10;
    }
    return sum;
}

bool customSort(const pair<int,int> &a, const pair<int,int> &b)
{ 
    if(a.first != b.first) { return (a.first < b.first); }
    return (a.second > b.second); 
} 

string to_upper(string s)
{
    string st = s;
    transform(st.begin(), st.end(), st.begin(), ::toupper);
    return st;
}
string to_lower(string s)
{
    string st = s;
    transform(st.begin(), st.end(), st.begin(), ::tolower); 
    return st;
}

string to_lower(char s[], int n)
{
    string st="";
    for(int i=0;i<n;++i)
    {
        if(s[i]>='A' && s[i]<='Z') { s[i]+= 32; }
        st+= s[i];
    }
    return st;
}

void seive(int n)
{
    bool arr[n+1]; arr[0] = arr[1] = true; int m = (int)ceil(sqrt(n));
    for(int i=3; i<=m; i+=2)
    {
        if(arr[i]==false && i*i<=n)
        {
            for(int j=i*i; j<=n; j+=2*i)
            {
                arr[j] = true;
            }
        }
    }
}
int main()
{
    return 0;
}

*/
