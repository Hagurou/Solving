#include<iostream>
#include<cmath>
using namespace std;
int solve(int n){
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        int res = 0;
        while(n % i == 0){
            res++;
            n /= i;
        }
        if(res >= 2) return 0;
        if(res == 1) count++;
    }
    if(n > 1){
        count++;
    }
    return count == 3;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}