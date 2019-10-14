#include<iostream>
#include<ctype.h>
#include<sstream>
using namespace std;
int main(){
	string temp;
	int n;
	string N;
	getline(cin,N);
	stringstream ss;
	ss << N;
	ss >> n;
	for(int i = 0; i < n; i++){
		getline(cin,temp);
		int len = temp.length();
		int j;
		for(j = 0; j < len; j++){
			char t = temp[j];
			if(j == 0 && !(isalpha(t) || t == '_')){
				cout << "no" << endl;
				break;
			}
			else if(!(isalnum(t) || t == '_')){
				cout << "no" << endl;
				break;
			}
		}
		if(j == len){
			cout << "yes" << endl;
		}
	}
}
