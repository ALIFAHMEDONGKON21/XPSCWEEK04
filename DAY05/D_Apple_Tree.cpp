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

const int N = (int) 1e6+5;

vector<int> adj[N];
vector<ll> leafs;
 
void DFS(int curr,int par){
	bool hasChild=false;
	for(auto i:adj[curr]){
		if(i==par)continue;
		hasChild=true;
		DFS(i,curr);
		leafs[curr]+=leafs[i];
	}
	if(!hasChild){
		leafs[curr]=1;
	}
}
 
int main(){
  
   int t;							cin>>t;
   while(t--){
   		int n;					cin>>n;
   		for(int i=0;i<=n;i++){
   			adj[i].clear();
   		}
   		leafs.assign(n+2,0);
   		for(int i=1;i<=n-1;i++){
   			int u,v;				cin>>u>>v;
   			adj[u].push_back(v);
   			adj[v].push_back(u);
   		}
   		DFS(1,-1);
   		int q;					cin>>q;
   		while(q--){
   			int x,y;				cin>>x>>y;
   			ll ans=leafs[x]*leafs[y];
   			cout<<ans<<endl;
   		}
   }
   return 0;
}