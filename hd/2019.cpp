#include<cstdio>
int main(){
	int n,m;
	char c;
	while(scanf("%d%c%d%c",&n,&c,&m,&c)){
		if(!(n||m)){
			break;
		}
		int temp;
		bool sign = 1;
		for(int i = 0; i < n; i++){
			if(i){
				printf(" ");
			}
			scanf("%d%c",&temp,&c);
			if(sign && temp > m){
				printf("%d ",m);
				sign = 0;
			}
			printf("%d",temp);
		}
		if(sign){
			printf(" %d",m);
		}
		printf("\n");
	}
}
