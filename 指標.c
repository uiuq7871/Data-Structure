#include<stdio.h>
int main() 
{
	int num[] = { 14,23,32,62,19 };//num�O���б`�� ���i�ק�
	const int a = 5;
	const int* pp = &a;//���V���i�ק諸�`��
    int* const ppp = num;//���б`��(���i�ק�)
	
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
