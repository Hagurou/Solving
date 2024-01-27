#include<iostream>
using namespace std;
typedef long long ll;
int lastNum(ll n){
    if(n <= 9) return n;
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    n = sum;
    return lastNum(sum);
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        cout << lastNum(n) << endl;
    }
    return 0;
}