#include<cstdio>
#include<stack>
using namespace std;
int main(){
    int n,m;
    char c;
    while(scanf("%d%c%d%c",&n,&c,&m,&c) != EOF){
        stack<int> st;
        int t = 1;
        bool sign = 0;
        if(n < 0){
            sign = 1;
            n = -n;
        }
        while(n){
            st.push(n%m);
            n /= m;
        }
        if(sign){
            printf("-");
        }
        while(!st.empty()){
            int t = st.top();
            if(t >= 10){
                printf("%c",t - 10 + 'A');
            }
            else{
                printf("%d",t);
            }
            st.pop();
        }
        printf("\n");
    }
}