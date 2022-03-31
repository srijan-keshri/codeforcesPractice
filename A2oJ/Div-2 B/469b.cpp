#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define F first
#define S second
#define pb push_back
#define double long double
#define print(a) for (auto x: a) cout << x << " ";
#define print1(a) for (auto x: a) cout << x.F << " " << x.S << endl
#define all(p) p.begin(), p.end()
int checkRange(int a, int b, int x, int y) {
  //a=1 b=2
  // x=0 y=1
  //cout << a << " " << b << " " << x << " " << y << endl;
  if(max(a,x)<=min(b,y))
    return 1;
  return 0;
}
int helper(vector < pair < int, int >> v1, vector < pair < int, int >> v2, int l, int r) {
  int count = 0;
  set<int> s;
  for (int i = 0; i < v1.size(); i++)
  {

    for (int j = 0; j < v2.size(); j++) {
      int flag = 0;
      for (int xx = l; xx <= r; xx++) {

        int a = v1[i].F - xx;
        int b = v1[i].S - xx;
        //cout << v2[j].F << " " << v2[j].S << endl;
        if (checkRange(a, b, v2[j].F, v2[j].S)) {
          s.insert(xx);
          // break;
        }
      }
      // if (flag)
      //   break;
    }
  }

    return s.size();
}
void solve() {
  int p, q, l, r;
  cin >> p >> q >> l >> r;
  vector < pair < int, int >> v1(p), v2;
  for (int i = 0; i < p; i++) {
    int a, b;
    cin >> a >> b;
    v1[i] = {
      a,
      b
    };
  }
  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    v2.push_back({
      a,
      b
    });

    // for (int x = l; x <= r;x++){
    //     int xx = a + x;
    //     int yy = b + x;
    // }
  }
  sort(all(v1));
  sort(all(v2));
  //print1(v2);
  //cout << "hy" << endl;
  int ans = helper(v1, v2, l, r);
  cout << ans << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  //cin >> t;
  while (t--)
    solve();

  return 0;
}