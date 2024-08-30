#include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pb push_back
#define gi greater<int>
#define mii map<int, int>
const int MODD = 1e9+7;
using namespace __gnu_pbds;
using namespace std;

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[30004];
    int b[30004];
    int res;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }     
    for(int i = 1;i <= n;i++){
        int j = lower_bound(b+1, b+res+1, a[i]) - b;
        b[j] = a[i];
        res = max(res, j);
    }
    cout << res << endl;
}