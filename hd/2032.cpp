#include<cstdio>
int main(){
	int *num[31];
	num[1] = new int[1];
	num[1][0] = 1;
	num[2] = new int[2];
	num[2][0] = num [2][1] = 1;
	for(int i = 3; i <= 30; i++){
		num[i] = new int[i];
		num[i][0] = num[i][i-1] = 1;
		for(int j = 1; j < i-1; j++){
			num[i][j] = num[i-1][j-1]+num[i-1][j];
		}
	}
	int n;
	char c;
	bool sum = 0;
	while(scanf("%d%c",&n,&c) != EOF){
	//if(sum == 1){
	//	printf("\n");
	//}
	//else{
	//	sum = 1;
	//}
		for(int i = 1; i <= n; i++){
			for(int j = 0; j < i; j++){
				printf("%d",num[i][j]);
				if( j != i - 1){
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
