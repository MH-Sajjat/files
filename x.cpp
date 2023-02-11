#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vll = vector<ll>;
using vi  = vector<int>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;

const int N   = (int) 2e5 + 5;
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 9;

#define nl      '\n'
#define ff      first
#define ss      second
#define szof(x) (int) x.size()
#define all(x)  x.begin(), x.end()

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false); cin.tie(0);
  int test = 1, tc = 0;
  while (test--) {
  int n; cin >> n;
  map<string, set<pair<string, pair<string, string>>>> m;
  // map<string, pair<string, string>> mm;
  string a, b, c, d, info;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b >> c >> d;
    string temp = "";
    for (int i = 6; i <= 9; ++i) temp += a[i];
    for (int i = 3; i <= 4; ++i) temp += a[i];
    for (int i = 0; i <= 1; ++i) temp += a[i];
    for (int i = 11; i <= 12; ++i) temp += a[i];
    for (int i = 14; i <= 15; ++i) temp += a[i];
    for (int i = 17; i <= 18; ++i) temp += a[i];
    info = temp;
    temp = "";
    for (int i = 6; i <= 9; ++i) temp += c[i];
    m[b].insert({info, {temp, d}}) ;
    }
    map<string, int> year;
    map<string, int> blod;
    for (auto x : m) {
        blod[x.*(ss.rbegin())ss]++;
        year[*(x.ss.rbegin()).ff]++;
    }
    cout << "A+ " << blod["A+"] << nl;
    cout << "A- " << blod["A-"] << nl;
    cout << "AB+ " << blod["AB+"] << nl;
    cout << "AB- " << blod["AB-"] << nl;
    cout << "B+ " << blod["B+"] << nl;
    cout << "B- " << blod["B-"] << nl;
    cout << "O+ " << blod["O+"] << nl;
    cout << "O- " << blod["O-"] << nl;
    for (auto x : year) cout << x.ff << " " << x.ss << nl;
  }
  return 0;
}
