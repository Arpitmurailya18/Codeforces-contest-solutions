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
#define test int t; cin>>t; while(t--)
ll fastprime(ll a){ if (a != 2 && a % 2 == 0 || a < 2) return 0;  for(int i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}
constexpr int MOD=1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test {
      int n,m,q;
      cin>>n>>m>>q;
      vector<int> b(m),a(q);
      for(int i=0;i<m;i++){
        cin>>b[i];
      }
      for(int i=0;i<q;i++){
        cin>>a[i];
      }
      sort(b.begin(),b.end());
      for(int i=0;i<q;i++){
        auto it=lower_bound(b.begin(),b.end(), a[i]);
        if(it!=b.end()&&*it==a[i]){
            cout<<0<<endl;
        }else{
            int idx=it-b.begin();
            if (idx==0) {
                cout<<b[0]-1<<endl;
            }else if(it==b.end()) {
                cout<<n-b[m-1]<<endl;
            }else{
               int k=(abs(a[i]-b[idx-1])+abs(a[i]-b[idx]))/2;
               if((abs(a[i]-b[idx-1])+abs(a[i]-b[idx]))%2!=0) (abs(a[i]-b[idx-1])+abs(a[i]-b[idx]))/2 +1;
               cout<<k<<endl;
            }
        }
      }
    }
    return 0;
}