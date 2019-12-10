#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
   char a[200];
   int i=0,n;
   fgets(a,200,stdin);
   n=strlen(a)-2;
   //printf("%d\n", n);
   while(i<n){
        if(a[i]!=a[n]){
            printf("false");
            return 0;
        }
        i++;
        n--;
   }
   printf("true");
    return 0;
}
