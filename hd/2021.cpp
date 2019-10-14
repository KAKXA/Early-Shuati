#include<cstdio>
int main(){
	int n;
	char c;
	while(scanf("%d%c",&n,&c)){
		if(!n){
			break;
		}
		int sum = 0;
		for(int i = 0; i < n; i++){
			int j;
			scanf("%d%c",&j,&c);
			sum += j / 100;
			j %= 100;
			sum += j / 50;
			j %= 50;
			sum += j / 10;
			j %= 10;
			sum += j / 5;
			j %= 5;
			sum += j / 2;
			j %= 2;
			sum += j;
		}
		printf("%d\n",sum);
	}
}
