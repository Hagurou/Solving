#include<iostream>
using namespace std;
typedef long long ll;
ll check(ll a, ll b){
    while(b){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll a, b;
        cin >> a >> b;
        cout << check(a, b) << endl;
    }
    return 0;
}