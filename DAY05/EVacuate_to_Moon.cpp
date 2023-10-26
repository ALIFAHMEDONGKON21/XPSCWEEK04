#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//

bool sorting(ll a, ll b)
{
    return a > b;
}

int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n, m, h, sum = 0;
        cin >> n >> m >> h;
        vector<ll> v1, v2;
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            v1.push_back(x);
        }
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v2.push_back(x*h);
        }
        sort(v1.begin(), v1.end(), sorting);
        sort(v2.begin(), v2.end(), sorting);
        for (ll k = 0; k < min(n, m); k++)
        {
            if (v1[k] >= v2[k])
                sum += v2[k];
            else
                sum += v1[k];
        }
        cout << sum << endl;
    }
    
    return 0;
}