#include<cstdio>
int main(){
	int num;
	char ch;
	while(scanf("%d%c",&num,&ch) != EOF){
		long long sum = 1;
		long long temp;
		for(int i = 0; i < num; i++){
			scanf("%lld%c",&temp,&ch);
			if(temp % 2 == 1){
				sum *= temp;
			}
		}
		printf("%lld\n",sum);
	}
}
