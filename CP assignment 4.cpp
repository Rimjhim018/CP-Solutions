
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s >> s >> s;
    vector<string>a;
    string t;

    while(cin >> s){
        if(s == "]") break;
        t = "";
        for(char c : s){
            if(isalpha(c)) t += c;
        }
        if(t.size()) a.push_back(t);
    }

    string p = a[0];
    for(int i = 1; i < a.size(); i++){
        int j = 0;
        while(j < p.size() && j < a[i].size() && p[j] == a[i][j]) j++;
        p = p.substr(0, j);
        if(p == "") break;
    }

    cout << p;
    return 0;
}

