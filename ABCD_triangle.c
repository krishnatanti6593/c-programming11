#include<stdio.h>
int main(){
    int a;
    printf("enter the numbe");
    scanf("%d",&a);
    for(char i=1;i<=a;i++){
        for(char j=65;j<=i+64;j++){
            printf("%c",j);

        }
        printf("\n");
    }
    return 0;
}