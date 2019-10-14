#include<cstdio>
int main(){
	int n;
	char c;
	while(scanf("%d%c",&n,&c)){
		if(n == 0){
			break;
		}
		int ar[n];
		for(int i = 0; i < n; i++){
			scanf("%d%c",&ar[i],&c);
		}
		int m = 2147483647;
		int i,j = 0;
		for(i = 0; i < n; i++){
			if(m > ar[i]){
				m = ar[i];
				j = i;
			}
		}
		i = ar[j];
		ar[j] = ar[0];
		ar[0] = i;
		for(i = 0; i < n; i++){
			if(i){
				printf(" ");
			}
			printf("%d",ar[i]);
		}
		printf("\n");
	}
}


