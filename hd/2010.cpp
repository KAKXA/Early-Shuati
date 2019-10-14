#include<cstdio>
int main(){
	bool temp[1000] = {0};
	for(int i = 1; i <= 9; i++){
		for(int j = 0; j <= 9; j++){
			for(int k = 0; k <= 9; k++){
				if(i*i*i + j*j*j +k*k*k == i*100 + j*10 +k){
					temp[i*100+j*10+k] = 1;
				}
			}
		}
	}
	int l, r, t;
	char c;
	while(scanf("%d%c%d%c",&l,&c,&r,&c) != EOF){
		if(l > r){
			t= l;
			l = r;
			r = t;
		}
		bool sign = 0;
		bool sign2 = 1;
		for(;l <= r;l++){
			if(temp[l] == 1){
				if(sign){
					printf(" ");
				}
				else{
					sign = 1;
				}
				printf("%d",l);
				sign2 = 0;
			}
		}
		if(sign2){
			printf("no\n");
		}
		else{
			printf("\n");
		}
	}
}
