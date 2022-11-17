#include<stdio.h>
int main(){
        int matriksA[10][10], matriksB[10][10], matriksAB[10][10];
        int a, b, c, d, jumlah=0;
        scanf("%d", &d);
        printf("Matriks A\n");
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              scanf("%d", &matriksA[a][b]);}}  
        printf("Matriks B\n");
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              scanf("%d", &matriksB[a][b]);}}
        for(a=0; a<d; a++){
          for(b=0; b<d; b++){
              for(c=0; c<d; c++){
                  jumlah = jumlah + matriksA[a][c] * matriksB[c][b];}      
                matriksAB[a][b]= jumlah;
                jumlah = 0;}}
        printf("Matriks AXB\n");
        for (a=0; a<d; a++){
          for(b=0; b<d; b++){
                    printf("%d ", matriksAB[a][b]);}
          printf("\n");}}
          
