#include<stdio.h>
int main() 
{
	int num[] = { 14,23,32,62,19 };//num是指標常數 不可修改
	const int a = 5;
	const int* pp = &a;//指向不可修改的常數
    int* const ppp = num;//指標常數(不可修改)
	
	printf("%d\n", *num);

	int* p1, * p2;
	p1 = p2 = num;
	int* p=num;

	
	printf("*p1=%d\n", p1);
	p1++;
	printf("*p1=%d\n", p1);

	(*p2)++;
	printf("*p2=%d\n", *p2);
}
