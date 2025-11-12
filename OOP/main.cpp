#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int T,n;
int a[N],b[N];


void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        buc[i]=0;
    }
    for(int i=1;i<=n;++i){
        cin>>a[i];
        get_prime(a[i]);
    }
    for(int i=1;i<=n;++i){
        cin>>b[i];
    }

}
int main(){
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}

/*
1
0 9

7
0 3
0 9
0 15
6 10
1 4
3 6
999999980 1000000009

1
1000000000 1000200000
*/