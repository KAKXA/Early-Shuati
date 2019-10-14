#include<cstdio>
int main(){
	int n;
	char c;
	while(scanf("%d%c",&n,&c) != EOF){
		int sum = 0;
		int temp;
		int max = 0;
		int min = 100;
		for(int i = 0; i < n; i++){
			scanf("%d%c",&temp,&c);
			if(temp > max){
				max = temp;
			}
			else if(temp < min){
				min = temp;
			}
			sum += temp;
		}
		printf("%.2f\n",(sum - max - min)/(float)(n-2));
	}
}
