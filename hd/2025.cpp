#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
char change(const char & c){
    return c;
}
int main(){
    string temp;
    while(!cin.eof()){
        if(!getline(cin,temp)){
            return 0;
        }
        set<char> cset;
        char mChar;
        insert_iterator<set<char>> itr(cset,cset.begin());
        string sub;
        transform(temp.begin(),temp.end(),itr, change);
        mChar = *cset.rbegin();
        sub = mChar + (string)"(max)";
        int len = temp.length();
        for(int i = len - 1; i >= 0; i--){
            if(temp[i] == mChar){
                temp.replace(i,1,sub);
            }
        }
        cout << temp << endl;
    }
    return 0;
}