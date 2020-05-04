#include<stdio.h>
int main(){
    int l,a,i,max;
    while(scanf("%d",&l)!=EOF){
         max=0;
        if(l>=1 &&l<=500){
            for(i=1;i<=l;i++){
                scanf("%d",&a);
                if(max<a){
                    max=a;
                }
            }
            if(max<10){
                printf("1\n");
            }
            if(max>=10 && max<20){
                 printf("2\n");
            }
            if(max>=20){
                printf("3\n");
            }
        }
    }

    return 0;
}
