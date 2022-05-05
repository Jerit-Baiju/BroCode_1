# include <stdio.h>

void main(){
    int x = 5;
    for (int a=x; a>=1;a--){
        for (int b=1; b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
}