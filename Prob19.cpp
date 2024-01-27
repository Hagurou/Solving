#include<iostream>
#include<cmath>
using namespace std;
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int solve(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            return i;
            break;
        }
    }
    return n;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            if(i == 1){
                cout << 1 << " ";
            }else if(i % 2 == 0){
                cout << 2 << " ";
            }else if(check(i)){
                cout << i << " ";
            }else{
            cout << solve(i) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
