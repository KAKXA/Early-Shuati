#include<cstdio>
int main(){
	int big, small;
	char ch;
	while(scanf("%d%c%d%c",&big,&ch,&small,&ch)){
		if(!(big || small)){
			break;
		}
		int temp = small - big*100%small;
		if(temp == small){
			temp = 0;
		}
		bool sign = 0;
		while(temp <= 99 - small){
			if(sign){
				printf(" ");
			}
			else{
				sign = 1;
			}
			printf("%02d",temp);
			temp += small;
		}
		if(temp <= 99){
			if(sign){
				printf(" ");
			}
			printf("%02d\n",temp);
		}
	}
}
