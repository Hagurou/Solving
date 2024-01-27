#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        ll res = 1;
        for(ll i = 1; i <= n; i++){
            res = (res * i)/(__gcd(res, i));
        }
        cout << res << endl;
    }
    return 0;
}