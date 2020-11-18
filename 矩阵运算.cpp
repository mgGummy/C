#include<stdio.h>
int main(void){
    int hang,lie,sum = 0;
    scanf("%d %d",&hang,&lie);
    int a[hang][lie];
    for(int i=0;i<hang;i++){
        for(int j=0;j<lie;j++){
            scanf("%d",a[i][j]);
             if(a[i][j]>0){
        sum+=a[i][j];
    }
        }
   
    }
    printf("%d",sum);
    return 0;
}

