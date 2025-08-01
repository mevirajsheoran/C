#include <stdio.h>

int mazetwo(int n, int m) {
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){//cannot go down
        rightways+=mazetwo(n,m-1);
    }
    if(m==1){//cannot go right
      downways+=mazetwo(n-1,m);  
    }
    if(n>1&&m>1){
        rightways += mazetwo(n,m-1);
        downways += mazetwo(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main() {
    int n;
    printf("enter no of rows of mazetwo: ");
    scanf("%d", &n);
    int m;
    printf("enter no of columns of mazetwo: ");
    scanf("%d", &m);

    int noofways = mazetwo( n, m);
    printf("%d is the no of ways to reach (%d,%d) position from (1,1) position\n", noofways, n, m);

    return 0;
}
