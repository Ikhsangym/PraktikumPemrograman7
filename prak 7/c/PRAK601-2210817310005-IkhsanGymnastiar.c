#include<stdio.h>
int main(){
          int baris,kolom ,A ,B ,bil;
          scanf("%d %d", &baris, &kolom);
          int matriks[baris][kolom];
          for(A = 0;  A < baris; A++){
            for(B = 0; B < kolom; B++){
               scanf("%d", &bil);
               matriks[A][B] = bil;}}
          for(A = 0; A < baris; A++){
            for(B = 0; B < kolom; B++){
               printf("%d ", matriks[A][B]);} 
          printf("\n");}
}