#include <stdio.h>

int main() {
    int a = 5;
    
    int* x = &a; // x ias a pointer here
    
    printf("%p\n",x);  //%p se address print hota h
    printf("%p\n",&x);  // adress of x pointer 
    return 0;
}
