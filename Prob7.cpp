#include<iostream>
#include<cmath>
using namespace std;
bool check(int n){
    if(n < 2) return false;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int phi(int n){
    int res = n;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                res -= res / i;
            }
        }
    }
    if(n != 1){
        res -= res / n;
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        if(check(phi(n))){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}