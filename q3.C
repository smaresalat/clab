#include <stdio.h>
int memory[1000];
int fibonacci(int n) {
if (n == 1 || n == 2) {
return 1;
}
if (memory[n] == 0) {
memory[n] = fibonacci(n - 1) + fibonacci(n - 2);
}
return memory[n];
}

int main(int argc, const char *argv[]) { 
     int n;
     scanf("%d", &n);
     printf("%d", fibonacci(n));
     

}
