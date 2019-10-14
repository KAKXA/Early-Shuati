#include<cstdio>
int main(){
	int ar[55];
	ar[1] = 1;
	ar[2] = 2;
	ar[3] = 3;
	for(int i = 4; i < 55; i++){
		ar[i] = ar[i-1] + ar[i-3];
	}
	int n;
	char c;
	while(scanf("%d%c",&n,&c)){
		if(!n){
			break;
		}
		printf("%d\n",ar[n]);
	}
}
