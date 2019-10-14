#include<cstdio>
#include<cmath>
int main(){
	int l, r;
	char c;
	bool ar[90];
	for(int i = -39; i < 51; i++){
		int temp = i*i + i + 41;
		int sqtemp = (int)sqrt(temp);
		int j;
		for(j = 2; j < sqtemp + 1; j++){
			if(temp % j == 0){
				break;
			}
		}
		if(j == sqtemp + 1){
			ar[i+39] = 1;
		}
		else{
			ar[i+39] = 0;
		}
	}
	while(scanf("%d%c%d%c",&l,&c,&r,&c)){
		if(!(l||r)){
			break;
		}
		int i;
		for(i = l + 39; i <= r + 39; i++){
			if(ar[i] == 0){
				break;
			}
		}
		if(i == r + 40){
			printf("OK\n");
		}
		else{
			printf("Sorry\n");
		}
	}
}
