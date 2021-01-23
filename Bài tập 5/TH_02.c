#include <stdio.h>
 int main(){
   int n, tong = 0;
   
   printf ("nhap so nguyen bat ky n = ");
   scanf ("%d", &n);
   
   for (int i = 1; i <= n; i++){
       tong = tong + i;
   }
   printf("S = 1 + 2 + ... + %d",n);
     printf (" \ntong can tim %d ", tong);
     
     
   return 0;
   }
