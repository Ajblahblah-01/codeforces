// standard libraries
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>

// data structures
#include <bitset>
#include <deque>
#include <list>

using namespace std;

// useful macros
#define ll long long
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// mathematical functions and constants
#define PI 3.14159265358979323846
#define INF 1000000005
#define MOD 1000000007

// debugging tools
#define trace(x) cerr << #x << ": " << x << endl;


void solve(){
  int n;
  cin>>n;
  vector<ll> nums(n);
  for(auto &x:nums) cin>>x; 
  for(auto i:nums) cout<<i<<" ";
}


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif 
  cout<<fixed<<setprecision(0);
  solve();
  return 0;
}