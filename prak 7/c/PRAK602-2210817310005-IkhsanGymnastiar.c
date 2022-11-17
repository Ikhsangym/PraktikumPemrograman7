#include<stdio.h>
int main(){
          int ruang, zp, n;
          scanf("%d", &ruang);  
          int total[ruang];
          for(n=0; n<ruang; n++){
                    scanf("%d", &zp);
                    total[n] = zp;}
          for(n = 0; n<ruang; n++){
                    printf("%d ", total[n] * (n+1));}  
}