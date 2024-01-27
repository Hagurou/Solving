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
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, m;
        cin >> n >> m;
        for(int i = n; i <= m; i++){
            if(check(i)){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//Có thể dùng sàng trên [L, R] nhưng R bé quá nên time complexity không chênh lệch nhiều.