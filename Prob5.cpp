#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& v){
    int totalSum = 0;
    for(int i = 0; i < v.size(); i++){
        totalSum += v[i];
    }
    int lSum = 0;
    for(int i = 0; i < v.size(); i++){
        totalSum -= v[i];
        if(lSum == totalSum){
            return i;
        }
        lSum += v[i];
    }
    return -1;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
        }
        int index = solve(v);
        if(index != -1){
            cout << index << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}