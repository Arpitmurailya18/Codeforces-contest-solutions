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

    // ll n;
    // cin>>n;
    // ll upb=max(100,int(n*log(n)+n*log(log(n))));
    // deb(upb);
    // vector<ll> isprime(upb+1,true);
    // isprime[0]=isprime[1]=false;

    // for(int p=2;p*p<=upb;p++){
    //     if(isprime[p]){
    //         for(int i=p*p;i<=upb;i+=p){
    //             isprime[i]=false;
    //         }
    //     }
    // }

    // int count=0;
    // for(int i=2;i<=upb&&count<n;i++){
    //    if(isprime[i]){
    //     cout<<i<<" ";
    //     count++;
    //    }
    // }cout<<endl;
    // deb(count);

    ll n;
    cin>>n;
    // ll a=2;
    // while(n){
    //     if(fastprime(a)){
    //         cout<<a<<" ";
    //         n--;
    //     }
    //     a++;
    // }
    for(int i=n;i<2*n;i++){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}