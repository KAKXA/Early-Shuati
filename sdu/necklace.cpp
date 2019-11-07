#include<iostream>
using namespace std;
void re(string & s){
    string t = s.substr(1,s.size() - 1);
    s = t + s[0];
}
int mod(int a ,int b){
    int t = a % b;
    return t < 0 ? t + b : t;
}
int main(){
    int qjyq = 'r' + 'b';
    int n;
    string s;
    cin >> n >> s;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(i){
            re(s);
        }
        for(int j = 0; j < n; j++){
            bool sign = true;
            int sum = 0;
            char c;
            for(int k = j - 1; mod(k,n) != j; k--){
                k = mod(k,n);
                if(sign && s[k] == 'w'){
                    sum++;
                }
                else{
                    if(sign){
                        sign = false;
                        c = s[k];
                    }
                    if(s[k] != qjyq - c){
                        sum++;
                    }
                    else{
                        break;
                    }
                }
            }
            sign = true;
            for(int k = j; mod(k,n) != mod(j - 1,n); k++){
                k = mod(k, n);
                if(sign && s[k] == 'w'){
                    sum++;
                }
                else{
                    if(sign){
                        sign = false;
                        c = s[k];
                    }
                    if(s[k] != qjyq - c){
                        sum++;
                    }
                    else{
                        break;
                    }
                }
            }
            max = max > sum ? max : sum;
        }
    }
    cout << (max > n ? n : max) << endl;
}

