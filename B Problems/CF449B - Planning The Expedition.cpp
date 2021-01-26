# include <bits/stdc++.h>
using namespace std;
 
typedef long long                                        ll;
typedef long double                                      ld;
typedef pair <int, int>                                  pii;
typedef pair <pii, int>                                  ppi;
typedef pair <int, pii>                                  pip;
typedef pair <pii, pii>                                  ppp;
typedef pair <ll, ll>                                    pll;
 
# define A                                               first
# define B                                               second
# define endl                                            '\n'
# define sep                                             ' '
# define all(x)                                          x.begin(), x.end()
# define kill(x)                                         return cout << x << endl, 0
# define SZ(x)                                           int(x.size())
# define lc                                              id << 1
# define rc                                              id << 1 | 1
# define InTheNameOfGod                                  ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
ll power(ll a, ll b, ll md) {return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));}
 
const int xn = 1e2 + 10;
const int xm = - 20 + 10;
const int sq = 320;
const int inf = 1e9 + 10;
const ll INF = 1e18 + 10;
const int mod = 998244353;
const int base = 257;
int N = 100;
vector <int> v(101);
 
int days(int a){
    vector<int> cc(v);
    int k = 0;
    for (int i = 1; i <= N; i++){
        while (cc[i] >= a) {
            k++;
            cc[i] -= a;
        }
    }
    return k;
 
}
 
int bs(int n,int m){
    int l = 1;
    int r = m;
    int maxn = 0;
    while(l <=r){
        int mid = l +(r-l)/2;
        if(mid == 0){
            return maxn;
        }
        int d = days(mid);
        if(d >=n){
            maxn = mid;
            l = mid+1;
        }else{
            r = mid - 1;
        }
 
    }
    return maxn;
 
 
}
 
int main()
{
    InTheNameOfGod
 
    int n,m;
 
 
    cin>>n>>m;
 
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v[a]++;
    }
 
    cout<<bs(n,m)<<endl;
 
 
 
    return 0;
}
