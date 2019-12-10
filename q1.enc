#include <stdio.h>

int mem[1000];
int fibonacci(int n) {
    if (n == 1 || n == 2 || n==3) {
            return 1;
        }
    return fibonacci(n - 1) + fibonacci(n - 2)+2*fibonacci(n-3);
      }
       int main(int argc, const char *argv[]) {
           int n;
           scanf("%d", &n);
           printf("%d",fibonacci(n));
           return 0;
       }
