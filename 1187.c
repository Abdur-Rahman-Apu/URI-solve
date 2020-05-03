#include<stdio.h>
int main(){
    double a[12][12],count=0,sum=0;
    int i,j;
    char o;
    scanf("%c",&o);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }

        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                if(i<j && i+j<11){
                    sum=sum+a[i][j];
                    count++;
                }
            }
        }
        if(o=='S'){
            printf("%lf\n",sum);
        }
        if(o=='M'){
            printf("%lf\n",sum/count);
        }

}
