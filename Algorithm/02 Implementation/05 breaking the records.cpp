  #include <bits/stdc++.h>
  using namespace std;

  #define fastio                        \
      ios_base::sync_with_stdio(false); \
      cin.tie(NULL);                    \
      cout.tie(NULL)

  #define st string
  #define ll long long
  #define ld long double
  #define ull unsigned long long

  #define pll pair<ll, ll>
  #define tll tuple<ll, ll, ll>
  #define sll set<ll>
  #define mll map<ll, ll>
  #define ssll set<sll>
  #define vll vector<ll>
  #define vpll vector<pll>
  #define vtll vector<tll>
  #define vvll vector<vll>
  #define vvpll vector<vpll>
  #define vpllvll vector<pair<ll, vll>>

  #define fi first
  #define se second
  #define pb push_back

  #define mp make_pair
  #define mt make_tuple

  #define mx max
  #define mn min

  #define maxLL LLONG_MAX
  #define minLL LLONG_MIN

  #define all(x) x.begin(), x.end()
  #define rall(x) x.rbegin(), x.rend()

  int solve() {
    
    ll n,maxV,minV,temp,maxAns=0,minAns=0; cin >> n;
    for(int i=0; i<n; i++){
      cin >> temp;
      if(i == 0){
        maxV = temp;
        minV = temp;
        continue;
      }
      if(temp > maxV){
        maxV = temp;
        maxAns++;
      }else if(temp < minV){
        minV = temp;
        minAns++;
      }
    }
    cout << maxAns << " " << minAns;
    return 0;
  }

  int main() {
    fastio;

    int t = 1;
    // int t; cin >> t; 

    while(t--){
      solve();
    }

    return 0;
  }