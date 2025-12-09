
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, mod = 1000000007;
    cin >> n;

    long long ans = 1;
    for(long long i = 0; i < n; i++){
        if(i % 2 == 0) ans = (ans * 5) % mod;
        else ans = (ans * 4) % mod;
    }

    cout << ans;
    return 0;
}

