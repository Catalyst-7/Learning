#include<stdio.h>
int f(void);
int gAll;
int main(int argc,char const *argv[])
{
	printf("in %s gAll=%d\n",__func__,gAll);
	f();
	printf("agn in %s gAll=%d\n",__func__,gAll);
}
int f(void){
	static int a=0;
	printf("in %s gAll=%d\n",__func__,gAll);
	gAll+=2;
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return gAll;
}