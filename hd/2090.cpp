#include<cstdio>
int main(){
	double sum = 0;
	char tmp[100];
	char c;
	double i,j;
	while(scanf("%s%c%lf%c%lf%c",tmp,&c,&i,&c,&j,&c) != EOF){
		sum += i * j;
	}
	sum = sum*100;
	if(((int)(sum) % 10) >= 5){
		printf("%.1f\n",(sum+1)/100);
	}
	else{
		printf("%.1f\n",sum/100);
	}
}
