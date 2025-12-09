
#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin >> x;
int a[x];
for(int i=0;i<x;++i)
{
cin >> a[i];
}
sort(a,a+x);
for(int i=0;i<x;++i)
{
cout << a[i] << " " ;
}
cout << endl;
int key; cin >> key;

int *ptr = lower_bound(a,a+x,key);

cout << "Index : " << (ptr-a) << endl;
return 0;
}
