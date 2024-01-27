#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        ll a, x, y;
        cin >> a >> x >> y;
        for(int i = 1; i <= __gcd(x,y); i++)
        cout << a;
        cout << endl;
    }
    return 0;
}
//gcd(f(n, x), f(n, y)) = gcd(n, gcd(x, y))