#include<iostream>
#include<iomanip>

using namespace std;
long long c(int a, int b){
    long long temp = 1;
    for(int i = 2; i <= a; i++){
        temp *= i;
    }
    for(int i = 2; i <= b; i++){
        temp /= i;
    }
    for(int i = 2; i <= a-b; i++){
        temp /= i;
    }
    return temp;
}
long long z(int a){
    long long temp = 1;
    for(int i = 2; i <= a; i++){
        temp *= i;
    }
    return temp;
}
int main(){
    double d[21];
    long long a[21];
    d[2] = 50;
    a[2] = 1;
    for(int i = 3; i < 21; i++){
        long long temp = 1;
        for(int j = 2; j < i; j++){
            temp += a[j]*c(i,j);
        }
        a[i] = z(i) - temp;
        d[i] = (double)a[i]/z(i)*100;
    }
    int n;
    cin >> n;
    int m;
    while(n--){
        cin >> m;
        cout << fixed
        <<setprecision(2)
        << d[m] << "%" << endl;
    }
}
