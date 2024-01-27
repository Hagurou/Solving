#include<iostream>
using namespace std;
typedef long long ll;
int ucln(ll a, ll b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int bcnn(ll a, ll b){
    return (a*b)/ucln(a,b);
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll a, b;
        cin >> a >> b;
        cout << bcnn(a, b) << " "  << ucln(a, b) << endl;    
    }
    return 0;
}