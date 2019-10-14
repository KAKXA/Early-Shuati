#include<cstdio>
int main(){
	int num;
	char c;
	double res[301];
	res[1] = 1;
	scanf("%d%c",&num,&c);
	for(int i = 2; i < 301; i++){
		if(i % 2 == 0){
			res[i] = res[i-1] - 1.0/(double)i;
		}
		else{
			res[i] = res[i-1] + 1.0/(double)i;
		}
	}
	for(int i = 0; i < num; i++){
		int temp;
		scanf("%d%c",&temp,&c);
		if(temp > 299){
			printf("%.2f\n",res[300]);
		}
		else{
			printf("%.2f\n",res[temp]);
		}
	}
}
