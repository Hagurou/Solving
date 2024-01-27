#include<iostream>
using namespace std;
typedef long long ll;
bool check(ll n){
    if(n < 9) return false;
    if(n == 9) return true;
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return check(sum);
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        if(check(n)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}