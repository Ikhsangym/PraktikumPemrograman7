#include<stdio.h>
int main(){
    int a1, a2, bilangan, n;
    scanf("%d %d", &a1, &a2);
    if(a1 != a2){
          printf("Jumlah tidak sama");}
    int b1[a1];
    int b2[a2];
    for(n = 0; n < a1; n++){
          scanf("%d", &b1[n]);}
    for(n = 0; n < a2; n++){
          scanf("%d", &b2[n]);}
    for(n = 0; n < a1; n++){
          bilangan = b1[n] * b2[n];
          printf("%d", bilangan);}      
}