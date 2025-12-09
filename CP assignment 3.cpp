#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    int l = 0, r = n - 1, first = -1, last = -1;

    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] >= x) r = m - 1;
        else l = m + 1;
        if(a[m] == x) first = m;
    }

    l = 0; r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x) l = m + 1;
        else r = m - 1;
        if(a[m] == x) last = m;
    }

    cout << first << " " << last;
    return 0;
}

