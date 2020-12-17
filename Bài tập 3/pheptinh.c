#include <stdio.h>
int main(){
  int a = 2, b = 8;
  char pt;
  printf ("vui long nhap phep tinh ");
  scanf ("%c",&pt);
  switch(pt) {
     case '+': 
      printf (" a + b = %d",a +b);
      break;
  	 case '-': 
      printf (" a - b = %d",a -b);
      break;
      default:
       printf(" Vui long nhap cong hoac tru ");
  }
  getchar;
  return 0;
}


