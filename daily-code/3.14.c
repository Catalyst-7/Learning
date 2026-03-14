#include<stdio.h>
#include<stdlib.h>
void minmax(int a[],int len,int *min,int*max);

int main(){
	int number;
	int *a;
	int i;
	scanf("%d",&number);
	a=(int*)malloc(number*4);
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}