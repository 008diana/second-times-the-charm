#include<stdio.h>



int main(){

	int a = 5;

	/*int b = 9.9;
	printf("the value of b is %d", b);
	will print "the value of b is 9"*/

	float b = 9.7;

	/*char c = 'yay';---> is incorrect since char can store only
	one value*/

	char c = 'k';
	char d = '8'; //note that this is correct!

	printf("the value of a is %d\n", a);
	printf("the value of b is %f\n", b);
	printf("the value of c is %c\n", c);
	printf("the value of d is %c\n", d);

	return 0;
}  