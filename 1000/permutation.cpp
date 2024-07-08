/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")

    Allah's Servant
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector < pair < long long, long long>>
#define pll pair<ll, ll>
#define gcd __gcd
#define inf 1e18
#define pb push_back
#define ff first
#define ss second
#define f(i, a, n) for (long long int i = a; i < n; i++)
#define g(i, a, n) for (long long int i = a; i >= n; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    f(case_num, 1, t + 1)
#define all(x) x.begin(), x.end()
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define ALL(x) (x).begin(), (x).end()
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";

const int N = 1e5 + 5;
#define Mod 1000000007

void solve() {
    long long int n;
    cin >> n;
    vector<long long int> a;
   map<int,int>mp,mp1;
   for(int i=2;i<=n;i++){
     int j=i;
    
     while(j<=n){
       
     if(mp[j]==0){
     a.push_back(j);
     mp[j]=1;
    
     }
    
      j*=2;
      
     }
   }
    
    for (long long int i = 1; i <= n; i++) {  // Make sure loop variable is of type long long int
        if (mp[i] == 0) a.push_back(i);
    }
    
    for (long long int i = 0; i < n; i++) {  // Make sure loop variable is of type long long int
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
