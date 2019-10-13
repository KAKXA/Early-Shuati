#include<cstdio>
int main(){
	long long l,r,temp;
	char ch;
	//bool sign = 0;
	while(scanf("%lld%c%lld%c",&l,&ch,&r,&ch) != EOF){
		if(l > r){
			temp = l;
			l = r;
			r = temp;
		}
		long long sum1 = 0, sum2 = 0;
		for(;l <= r; l++){
			if(l % 2 == 0){
				sum1 += l*l;
			}
			else{
				sum2 += l*l*l;
			}
		}
		printf("%lld %lld\n",sum1,sum2);
	}
}
