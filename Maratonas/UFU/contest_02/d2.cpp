#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++)
        v.push_back(i);

    int k = -1;
    while(!v.empty()){
        k = (k+2)%v.size();
        cout << v[k];
        v.erase(v.begin()+k);
        k--;
        if(i != n-1) cout << " ";
    }
    cout << endl;
    return 0;
}
