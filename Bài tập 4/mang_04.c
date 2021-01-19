#include <stdio.h>


int main(void){
	
  int n, tong = 0;
  
  //nhap so nguyên n (n > 0) tu bàn phím
  printf ("nhap n =  ");
  scanf("%d", &n);
  
  //tao mang a chua so nguyen kich thuoc n 
  int a[n];
  
  //nhap n phan tu cua mang a tu ban phim
  for(int i = 0;  i < n; i++){
  printf ("nhap phan tu thu %d  ", i);
  scanf("%d", &a[i]);
  printf("\n");
  }
 
  //tinh tong va hien thi cac phan tu mang a
 for (int i = 0; i < n; i++) {  
 tong=tong+a[i];
}
    printf("%d",tong);
 
     return 0;
} 
 
