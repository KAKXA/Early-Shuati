#include<cstdio>
int main(){
	int num;
	char c;
	while(scanf("%d%c",&num,&c)){
		int sum1 = 0, sum2 = 0;
		if(!num){
			break;
		}
		else{
			double temp;
			for(int i = 0; i < num; i++){
				scanf("%lf%c",&temp,&c);
				if(!temp){
					sum2++;
				}
				else if(temp < 0){
					sum1++;
				}
			}
		}
		printf("%d %d %d\n",sum1,sum2,num - sum1 -sum2);
	}
}
