#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    char c;
    scanf("%d%c",&n,&c);
    for(int i = 0; i < n; i++){
        char t[1000];
        int sum = 0;
        cin.getline(t,1000);
        for(int i = 0; t[i] != '\0'; i++){
            if(t[i] < 0){
                sum++;
                i++;
            }
        }
        cout << sum << endl;
    }
}