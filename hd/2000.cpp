#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string> vec;
	string temp;
	while(getline(cin,temp)){
		if(temp == ""){
			break;
		}
		else{
			vec.push_back(temp);
		}
	}
	char t;
	int len = vec.size();
	for(int i = 0; i < len; i++){
		char a = (vec[i])[0];
		char b = (vec[i])[1];
		char c = (vec[i])[2];
		if(a > b && a > c){
			t = a;
			a = c;
			c = t;
		}
		else if(b > c && b > a){
			t = b;
			b = c;
			c = t;
		}
		if(a > b){
			t = a;
			a = b;
			b = t;
		}
		vec[i] = "";
		(vec[i]).append(1,a).append(1,' ').append(1,b).append(1,' ').append(1,c);
	}
	for(auto itr = vec.begin(); itr != vec.end(); itr++){
		cout << (*itr) << endl;
	}

}
