#include<iostream>
using namespace std;
typedef long long ll;
bool luckyNumberCheck(ll n){
        return n % 100 == 86;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        if(luckyNumberCheck(n)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}