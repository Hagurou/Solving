#include<iostream>
#include<cmath>
using namespace std;
void solve(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int count = 0;
        while(n % i == 0){
            count++;
            n /= i;
        }
        if(count != 0){
            cout << i << " " << count << " ";
        }
    }
    if(n > 1){
        cout << n << " " << 1 << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}