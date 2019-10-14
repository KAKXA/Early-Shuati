#include<cstdio>
int main(){
	int n,m;
	char c;
	while(scanf("%d%c%d%c",&n,&c,&m,&c) != EOF){
		int ar[m+1][n+1];
		for(int i = 0; i < n; i++){
			int sum1 = 0;
			int temp;
			for(int j = 0; j < m; j++){
				scanf("%d%c",&temp,&c);
				ar[j][i] = temp;
				sum1 += temp;
			}
			ar[m][i] = sum1;
		}
		for(int i = 0; i < n; i++){
			if(i){
				printf(" ");
			}
			printf("%.2f",(double)ar[m][i]/m);
		}
		printf("\n");
		double t[m];
		for(int i = 0; i < m; i++){
			double sum2 = 0;
			for(int j = 0; j < n; j++){
				sum2 += ar[i][j];
			}
			sum2 /= n;
			if(i){
				printf(" ");
			}
			t[i] = sum2;
			printf("%.2f",sum2);
		}
		printf("\n");
		int sum3 = 0;
		for(int i = 0; i < n; i++){
			int j;
			for(j = 0; j < m; j++){
				if(ar[j][i] < t[j]){
					break;
				}
			}
			if(j == m){
				sum3++;
			}
		}
		printf("%d\n",sum3);
		printf("\n");
	}
}
