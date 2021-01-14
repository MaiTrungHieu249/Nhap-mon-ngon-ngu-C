#include<stdio.h>

int main(void){
	
    int a[4];// khai bao hop 4 ngan
    a[0] = 3;   // ngan thu 1
    a[1] = 5;   // ngan thu 2
	a[2] = 7;   // ngan thu 3 
    a[3] = 2;   // ngan thu 4
    
    //tinh tong cac phan tu mang a  
   int sum = 0;
 for(int i = 0; i < 4; i++){
   sum=sum+a[i];
}
    printf("%d",sum);
 
     return 0;
}
