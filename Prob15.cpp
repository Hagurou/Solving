#include<iostream>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;
ll lcm(ll a, ll b){
    return a*b / (__gcd(a, b));
}
int solve(int x, int y, int z, int n){
    ll min = pow(10, n - 1);
    ll max = pow(10, n) - 1;
    ll bcnn = lcm(x, lcm(y, z));
        for(int i = min; i <= max; i++){
            if(i % bcnn == 0){
                return i;
                break;
            }
        }
    return -1;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << solve(x, y, z, n) << endl;
    }
    return 0;
}