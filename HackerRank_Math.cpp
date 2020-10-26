
#include <bits/stdc++.h>

using namespace std;

/*FIND POINTS: here qx,qy are middle point of rx and ry, so just 
 modify the formula of middle point to find rx and ry*/
vector<int> findPoint(int px, int py, int qx, int qy)
{
    vector<int> points;
    int rx = 2*qx - px;
    int ry = 2*qy - py;
    
    points.push_back(rx);
    points.push_back(ry);
    
    return points;
}

/*MAXIMUM DRAWS: there are n pairs of socks that means 2*n
 number of socks, at worst case n number of socks can be drawn
 without a match, so n+1 draws will guarantee a match*/
int maximumDraws(int n) 
{
    return n+1;
}

/* HANDSHAKES: I (PersonA) am one out of N people, so I need to shake hands 
 * with (N-1) people. This reasoning holds true for all of the 
 * N people, so the number of hand shakes is N * (N-1). 
 * Now that PersonA and PersonB shook hands, PersonB and 
 * PersonA (same people, but from PersonB's perspective) 
 * don't need to shake anymore. So we initially 
 * counted each combination twice. Therefore, the 
 * number of hand shakes is
nShakes = (N * (N-1)) / 2*/
int handshake(int n) 
{
    return (n*(n-1)/2);
}

void generatePrime(int n)
{
    bool not_prime[n+1] {0}; not_prime[0] = not_prime[1] = 1; not_prime[2] = 0;
    int m = ceil(sqrt(n+1))+1;
    for(int i=3; i<=m; i+=2)
    {
        if(not_prime[i]==0)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                not_prime[j] = 1;
            }
        }
    }
    
    for(int i=2;i<n+1;++i)
    {
        if(not_prime[i]==0 && (i&1)) cout << i << endl;
    }
}


/*
int main()
{
    generatePrime(20);
    return 0;
}
 */

