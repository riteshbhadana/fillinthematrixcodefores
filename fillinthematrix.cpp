#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m,-1));
    for(int j=0;j<m;j++){
        int start = (j+1)%m;
        for(int i=0;i<n;i++){
            grid[i][j] = start;
            start = (start+1)%m;
            if(start == j) start = (start + 1)%m;
        }
    }
    if(n < m){
        cout<<n+1<<endl;
    } 
    else{
        if(m == 1) cout<<0<<endl;
        else cout<<m<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
