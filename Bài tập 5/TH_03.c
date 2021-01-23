//Khoi khai bao
#include<stdio.h>

int a, b, c;

//khoi ham main

  int main(){
    // nhap a, b, c tu ban phim
    
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);

  return 0;
}

int so_lon_nhat(); 

//khoi dinh nghia ham

float solonnhat(){//Giá tr? tr? v? c?a hàm solonnhat()
  if(a>b &&a>c)//dk a>b và a>c
   printf("%g",a);//n?u a là s? l?n nh?t thì in ra man hình
   
  if (b>a&& b>c)
 printf("%g",b);//n?u b là s? l?n nh?t thì in ra man hình

  if (c>a&&c>b)
 printf("%g",c);//n?u c là s? l?n nh?t thì in ra man hình
 return 0;
}
