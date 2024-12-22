#include<stdio.h>

int main(){
    int i,j;

for( i = 1;i<101;i++){
    if (i>1){
        for( j=2;j<i;j++){
            if(i%j==0){
                break;
        }
            }    
           
    } 

            printf("%d ",i);
        
}
    return 0;
}