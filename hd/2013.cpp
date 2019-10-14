#include<cstdio>
int main(){
	long long ar[29];
	ar[0] = 1;
	for(int i = 1; i < 29; i++){
		ar[i] = ar[i - 1]*2 + 2;
	}
	int num;
	char c;
	while(scanf("%d%c",&num,&c) != EOF){
		printf("%lld\n",ar[num-1]);
	}
}
