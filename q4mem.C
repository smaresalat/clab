#include <stdio.h>

int mem[1000];
int f(int n) {
    if (n == 1 || n == 2 || n==3) {
            return 1;
    }
    if(mem[n]==0){
        mem[n]=f(n-1)+f(n-2)+2*f(n-3) ;
    }

    return mem[n] ;

      }
       int main(int argc, const char *argv[]) {
           int n;
           scanf("%d", &n);
           printf("%d",f(n));
           return 0;
       }
