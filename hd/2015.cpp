#include<cstdio>
int main(){
	int n,m;
	char c;
	while(scanf("%d%c%d%c",&n,&c,&m,&c) != EOF){
		for(int i = 2; i <= 2*n + 2;){
			if(i != 2){
				printf(" ");
			}
			if(i + 2*(m - 1) < 2*n){
				printf("%d", i + m - 1);
			}
			else if(i + 2*(m - 1) == 2*n){
				printf("%d", i + m - 1);
				break;
			}
			else{
				printf("%d", i/2 + n);
			}
			i += 2*m;
		}
		printf("\n");
	}
}

