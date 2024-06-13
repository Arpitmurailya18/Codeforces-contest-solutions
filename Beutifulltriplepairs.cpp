#include<bits/stdc++.h>
using namespace std;
typedef long double lld;
typedef unsigned long long ull;
typedef long long ll;
typedef int in;
typedef char ch;
typedef float fl;
typedef double dou;
typedef string ss;

#define ub upper_bound
#define lb lower_bound
#define AJ(i,a,b) for(int i=a;i<b;i++)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define test int t; cin>>t; while(t--)
constexpr int MOD=1000000007;

void _print(ll t) {cerr << t;} 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else
#define debug(x);
#endif

int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
       int n;
       cin>>n;
       vector<int> a(n);
       AJ(i,0,n) cin>>a[i];
       vector<map<pair<int,int>,vector<int>>> m(3);
       AJ(i,0,n-2){
        m[0][{a[i],a[i+1]}].push_back(a[i+2]);
        m[1][{a[i+1],a[i+2]}].push_back(a[i]);
        m[2][{a[i],a[i+2]}].push_back(a[i+1]);
       }
       ll ans=0;

       for(int i=0;i<3;i++){
        for(auto& kv:m[i]){
          auto &k=kv.first;
          auto &v=kv.second; 
          sort(v.begin(),v.end());
          ll op=0;
          map<int, int> count;
          for(auto j:v) count[j]++;
          for(auto j:v){
            op+=(v.size()-count[j]);
          }
          ans+=op/2;
        }
       }

       cout<<ans<<endl;
    } 
}