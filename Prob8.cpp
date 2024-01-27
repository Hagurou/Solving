#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<int> v;
        for(char c : a){
            int digit = c - '0';
            if(digit > 1){
                switch(digit){
//4! = 3!*2!*2!
                    case 4:
                        v.push_back(3);
                        v.push_back(2);
                        v.push_back(2);
                        break;
//6! = 5!*3!
                    case 6:
                        v.push_back(5);
                        v.push_back(3);
                        break;
//8! = 7!*2!*2!*2!
                    case 8:
                        v.push_back(7);
                        v.push_back(2);
                        v.push_back(2);
                        v.push_back(2);
                        break;
//9! = 7!*3!*3!*2!
                    case 9:
                        v.push_back(7);
                        v.push_back(3);
                        v.push_back(3);
                        v.push_back(2);
                        break;
                    default:
                        v.push_back(digit);
                        break;
                }
            }
        }
        sort(v.rbegin(), v.rend());
        for(int digit : v){
            cout << digit;
        }
    }
    return 0;
}