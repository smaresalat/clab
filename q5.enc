#include<stdio.h>
int mem[1000] ;
int xe(int x, int y){
	if(y==0){
		return 1 ;
	}
	if(y==1){
		return x ;
	}
	if(x==y){
		return 1 ;
	}
	if (mem[(x,y)]==0){
    mem[(x,y)]=(x-1,y)+(x-1,y-1) ;
}
return mem[(x,y)] ;
}
main(){
	int x,y,a ;
	scanf("(%d,%d)",&x,&y) ;
	a=xe(x,y) ;
	printf("%d",a) ;
}
