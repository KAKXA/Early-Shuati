#include<cstdio>
int main(){
    char c;
    int suma = 0,sume = 0,sumi = 0,sumo = 0,sumu = 0,n;
    scanf("%d%c",&n,&c);
    int i = 0;
    while(i != n){
        scanf("%c",&c);
        switch(c){
            case 'a': suma++; break;
            case 'e': sume++; break;
            case 'i': sumi++; break;
            case 'o': sumo++; break;
            case 'u': sumu++; break;
            case '\n':{
                if(i){
                    printf("\n");
                }
                printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",suma,sume,sumi,sumo,sumu);
                suma = sume = sumi = sumo = sumu = 0;
                i++;
                break;
            }
        }
    }
}