#include <stdio.h>

int atopowerb(int a, int b){
    if(b==0) return 1;   // base case
    return a*atopowerb( a , b-1 );
}

int main() {
    
   int a;
   printf("enter a : ");
   scanf("%d",&a);
   int b;
   printf("enter b : ");
   scanf("%d",&b);
   
   
   printf(" %d raise to %d is %d ",a,b,atopowerb(a,b));
    return 0;
}