#include<iostream>
#include<cmath>
using namespace std;
//legendre
int solve(int n, int p){
    int res = 0;
    for(int i = p; i <= n; i *= p){
        res += n/i;
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, p;
        cin >> n >> p;
        cout << solve(n, p) << endl;
    }
    return 0;
}