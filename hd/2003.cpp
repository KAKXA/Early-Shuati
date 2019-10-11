#include<cstdio>
int main(){
	double i;
	char z;
	while(scanf("%lf%c",&i,&z) != EOF){
		printf("%.2f\n",i > 0 ? i : -i);
	}
}
