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

#ifndef AREVEL07
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int main(){
clock_t time_req = clock();
fastio

#ifndef AREVEL07
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif
    // string s;
    // cin>>s;
    // map<char,int> mp;
    // AJ(i,0,s.size()){
    //    mp[s[i]]++;
    // }
    // ll oc=0,ec=0;
    // for(auto i:mp){
    //     if(i.second%2==0) ec++;
    //     else oc++;
    // }
    // if(ec>0){
    //    if(oc==0 || oc%2==1) cout<<"First"<<"\n";
    //    else cout<<"Second"<<"\n";
    // }
    // else{
    //     if(oc%2==1) cout<<"First"<<"\n";
    //     else cout<<"Second"<<"\n";
    // }

#ifndef AREVEL07
cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
#endif
}