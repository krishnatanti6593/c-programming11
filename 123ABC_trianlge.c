#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
            printf("\n");
            for(char p=65;p<=i+64;p++){
                printf("%c",p);
            }
            printf("\n");
        
    }
        return 0;
}