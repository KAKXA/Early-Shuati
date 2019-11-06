#include<iostream>
#include<cmath>
using namespace std;
unsigned long long r(int n){
    if(n == 3){
        return 6;
    }
    else {
        return (unsigned long long)(3 * pow(2, n - 1) - r(n - 1));
    }
}
int main() {
    int n;
    while(cin >> n){
        if(n == 1){
            cout << "3" << endl;
        }
        else if(n == 2){
            cout << "6" << endl;
        }
        else{
            cout << r(n) << endl;
        }
    }
}

