#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    for(char i=65;i<=a+64;i++){
        for(char j=65;j<=a+64;j++){
            printf("%c",j);

        }
        printf("\n");
    }
    return 0;
}