#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        ll n, m;
        cin >> n >> m;
        ll sum = (n * (n + 1) / 2);
        ll sum1 = (sum + m) / 2;
        ll sum2 = (sum - m) / 2;
        if(sum1 - sum2 == m && __gcd(sum1, sum2) == 1 && sum1 + sum2 == sum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}