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
string primeFactors(lli n)
{
    lli upto = (lli)ceil(sqrt(n));
    lli divideBy;
    string s="";
    lli c=0;
    
    while(n%2==0)
    {
        s+= "2 x ";
        n/=2;
        ++c;
    }
    for(divideBy = 3; divideBy<=upto; divideBy+=2)
    {
        if(n % divideBy==0)
        {
            ++c;
            while(n % divideBy==0)
            {
                n/=divideBy;
                s+= to_string(divideBy) + " x ";
            }
        }
    }
    if(n!=1) { s+= to_string(n); }
    else { s.erase(s.begin()+s.size()-3, s.end()); }
    if(c==0) { return to_string(n); }
    return s;
}
lli num_of_dist_pFact(lli num)
{
    lli n = 1000000;
    bool p[n+1]; for(int i=0;i<=n;++i) { p[i]=false; } 
    p[0] = p[1] = true; int m = (int)ceil(sqrt(n));
    for(int i=3; i<=m; i+=2)
    {
        if(p[i]==false && i*i<=n)
        {
            for(int j=i*i; j<=n; j+=2*i)
            {
                p[j] = true;
            }
        }
    }
    lli upto = (lli)ceil(sqrt(num));
    lli divideBy;
    set<lli> fact;
    
    while(num%2==0)
    {
        num/=2;
        fact.insert(2);
    }
    for(divideBy = 3; divideBy<=upto; divideBy+=2)
    {
        if(num % divideBy==0 && !p[divideBy])
        {
            fact.insert(divideBy);
            while(num % divideBy==0)
            {
                num/=divideBy;
            }
        }
    }
    if(!p[num]) { fact.insert(num); }
    return fact.size();
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
string removeHabijabi_toLower(string str)
{
    string newstr="";
    for(int i=0;i<str.length();++i)
    {
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ' ) 
        { 
            if((str[i]>='A' && str[i]<='Z'))
            {
                newstr+= (str[i]+32); 
            }
            else { newstr+= str[i];  }
        }        
    }
    return newstr;
}
bool checkBracket(string s)
{
    if(s[0]==')' || s[0]=='}' || s[0]==']') { return false; }
    
    stack<char> stck;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') { stck.push(s[i]); }
        else if(s[i]==')' && !stck.empty() && stck.top()=='(') { stck.pop(); }
        else if(s[i]=='}' && !stck.empty() && stck.top()=='{') { stck.pop(); }
        else if(s[i]==']' && !stck.empty() && stck.top()=='[') { stck.pop(); }
    }
    
    if(stck.empty()) { return true; }
    else { return false; }

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

bool is_palindrome(int a[], int left, int right)
{
    while(left<=right)
    {
        if(a[left]!=a[right]) { return false; } ++left; --right;
    }
    return true;
}
int main()
{
    return 0;
}

*/
