#include<cstdio>
#include<map>
using namespace std;
int main(){
	int n;
	char c;
	while(scanf("%d%c",&n,&c)){
		if(!n){
			break;
		}
		map<long long,bool> vec;
		for(int i = 0; i < n; i++){
			long long temp;
			scanf("%lld%c",&temp,&c);
			if(temp >= 0){
				vec.insert(pair<long long,bool>(temp,0));
			}
			else{
				vec.insert(pair<long long,bool>(-temp,1));
			}
		}
		for(map<long long, bool>::reverse_iterator rit = vec.rbegin();rit != vec.rend(); rit++){
			if(rit != vec.rbegin()){
				printf(" ");
			}
			if(rit->second){
				printf("%lld",-(rit->first));
			}
			else{
				printf("%lld",rit->first);
			}
		}
		printf("\n");
	}
}
