#include<iostream>
#include<algorithm>
#include<cmath>
typedef long long ll;
const int mod = 1e9 + 7;
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll tich = 1, ucln = a[0];
        for(int i = 0; i < n; i++){
            tich = (tich*a[i]) % mod;
            ucln = __gcd(ucln, a[i]);
        }
        ll res = 1;
        for(int i = 0; i < ucln; i++){
            res = (res*tich) % mod;
        }
        cout << res << endl;
    }
    return 0;
}
