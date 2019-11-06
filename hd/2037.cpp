#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(!n){
            return 0;
        }
        int s;
        int e;
        map<int,int> m;
        int sum = 0;
        int temp = 0;
        while(n--){
            cin >> s >> e;
            m.insert(pair<int,int>(e,s));
        }
        while(!m.empty()){
            temp = m.begin()->first;
            sum++;
            while(!m.empty() && m.begin()->second < temp){
                m.erase(m.begin());
            }
        }
        cout << sum << endl;
    }
}
