#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int x=1;
	for(;N>0;N--){
		x*=10;
		printf("%d",x);
	}
	return 0;
}
