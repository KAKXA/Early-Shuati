#include<cstdio>
long long ora(long long i, long long j){
    long long mod;
    if(i < j){
        mod = i;
        i = j;
        j = mod;
    }
    while(mod = i % j){
        i = j;
        j = mod;
    }
    return j;
}
int main(){
    int n;
    char c;
    while(scanf("%d%c",&n,&c) != EOF){
        int t;
        long long mul;
        for(int i = 0; i < n; i++){
            scanf("%d%c",&t,&c);
            if(!i){
                scanf("%lld%c",&mul,&c);
                i++;
            }
            mul = t*mul/(ora(t,mul));
        }
        printf("%lld\n",mul);
    }
}