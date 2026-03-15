#include<stdio.h>
int main(int argc,char const *argv[]){
	struct date{
		int month;
		int day;
		int year;
	};
	struct date today;
	today.month=07;
	today.day=31;
	today.year=2014;
	printf("Today date is %i-%i-%i.\n",today.year,today.month,today.day);
	return 0;	
	}                                                               