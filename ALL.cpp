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


string to_lower(string s)
{
    //transform(s.begin(), s.end(), s.begin(), ::tolower); 
    
    for(int i=0;i<s.length();++i)
    {
        if(s[i]>='A' && s[i]<='Z') { s[i]+= 32; }
    }
    return s;
}

int main()
{
    fast;
    clr;
    
    string s;
    vector<string> dict;
    while(1)
    {
        getline(cin, s);
        if(s=="") { break; }
        
        s = to_lower(s);
        int left= -1, right= -1;
        for(int i=0;i<s.length();++i)
        {
            if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ) { if(left==-1) { left=i; } }
            else 
            { 
                right= i-1;
                string st = s.substr(left, (right-left)+1);
                dict.push_back(st);
                left=-1;
            }
            
            if(left!=-1 && i==s.length()-1)
            {
                right= i;
                string st = s.substr(left, (right-left)+1);
                dict.push_back(st);
                left=-1;
            }
        }
            
    }
    
    sort(dict.begin(), dict.end());
        
    for(int i=0;i<dict.size();++i)
    {
        ol(dict[i]);
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
