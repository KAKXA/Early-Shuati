#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    string temp;
    char c;
    scanf("%d%c",&n,&c);
    for(int i = 0; i < n; i++){
        getline(cin,temp);
        int l = temp.length();
        int j;
        for(j = 0; j < l/2; j++){
            if(temp[j] != temp[l-1-j]){
                break;
            }
        }
        if(j == l/2){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}