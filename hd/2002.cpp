#include<cstdio>
#define PI 3.1415927
int main(){
	double r;
	char i;
	while(scanf("%lf%c",&r,&i) != EOF){
		printf("%.3f\n",r*r*r*PI*(4.0/3));
	}
}
