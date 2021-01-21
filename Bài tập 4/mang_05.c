#include <stdio.h>

int main(void){
  int n,m;
  
  //nhap so nguyên n (n > 0) tu bàn phím
  printf ("nhap n =  ");
  scanf("%d", &n);
  
  //tao mang a chua so nguyen kich thuoc n 
  int a[n];
  
  //nhap n phan tu cua mang a tu ban phim
  for(int i = 0;  i < n; i++){
  printf ("nhap phan tu thu %d: ", i);
  scanf("%d", &a[i]);
  printf("\n");
  }
  
  //hien thi tat ca cac phan tu mang a
  printf("phan tu cua mang a: ");
 	for(int i=0;i<n;i++){
 		printf(" %d",a[i]);
	 }
	 
  //nhap 1 so nguyen m bat ky tu ban phim
  printf ("m");
  scanf("%d", &m);
  
  
  
  
     return 0;
} 
 
