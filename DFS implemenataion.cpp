#include<bits/stdc++.h>
#define ll  long long 
#define ld  long double 
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define vec vector
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),vine present(container, element)(container.find(element) != container.end())
#define cpresent(container, element)(find(all(container), element) != container.end())
#define gcd(a,b) __gcd(a,b)
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3(a,b,c),d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define er cout<<-1<<endl;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define  mod 1000000007     // 1e9+7
#define pi 3.1415926536
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define fset(n) __builtin_ffs(n)
#define trailzerobit(n) __builtin_ctz(n)
using namespace std;

const int m=1e5+7;


vector<ll>adj[m];
vector<bool>vist(m,false);

void dfs(ll node)
{
  vist[node]=true;
 cout<<node<<' ';

  for(auto child: adj[node])
  {
    if(!vist[child])
    {

      dfs(child);

    }


  }

}


 
void solve()
{
  ll node,edge;
  cin>>node>>edge;
  for(int i=1;i<=edge;i++)
  {
    ll x,y;
    cin>>x>>y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  dfs(1ll);
  //dbg(adj[1]);




}




int main ()
{

  #ifndef ONLINE_JUDGE
freopen ("input.txt","r", stdin);
freopen ("out.txt","w", stdout);
 #endif


  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

 
//int t;cin>>t;for(ll i=1;i<=t;i++)
solve();

return 0;
 
}
