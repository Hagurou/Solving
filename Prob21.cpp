#include<iostream>
using namespace std;
int prime[10001];
void sieve(){
    for(int i = 0; i <= 10000; i++){
        prime[i] = 1;
        prime[1] = 0;
        prime[0] = 0;
    }
    for(int i = 2; i <= 100; i++){
        if(prime[i]){
            for(int j = i*i; j <= 10000; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    sieve();
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 2; i <= 10000; i++){
            if(prime[i] == 1 && prime[n - i] == 1){
                cout << i << " " << n - i;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}