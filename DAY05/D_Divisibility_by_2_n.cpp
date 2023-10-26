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



int main(){
    
    int t; 
    cin>>t;
    
    while(t--) {
        ll n; cin>>n;
        ll res = 0;
        vector<ll>v;

        for(ll i=1; i<=n; i++) {
            ll x; cin>>x;

            while(x%2 == 0) {
                res++;
                x /= 2;
            }

            ll cur = i;
            ll temp = 0;
            while(cur%2 == 0) {
                temp++;
                cur /= 2;

            }
            v.push_back(temp);
        }

        sort(v.rbegin(), v.rend());

        if(res>=n) cout<<0<<endl;
        else {
            ll ans = 0;
            for(int i=0; i<v.size(); i++) {
                res += v[i];
                ans++;
                if(res>=n) {
                    cout<<ans<<endl;
                    break;
                }
            }
            if(res<n) cout<<-1<<endl;
        }
        
    }
    
    return 0;
}