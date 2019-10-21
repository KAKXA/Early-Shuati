#include<iostream>
using namespace std;
int main(){
	bool s = 1;
	int p;
	while((p = cin.get()) != EOF){
		if(p == '\"' && s){
			cout << "``";
			s ^= 1;
		}
		else if(p == '\"'){
			cout << "\'\'";
			s ^= 1;
		}
		else{
			cout << (char)p;
		}
	}
}
