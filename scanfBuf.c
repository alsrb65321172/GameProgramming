#include<stdio.h>

int main()
{
	char string[20];
	char c;
	char s;
	printf("���ڿ� �Է�: ");
	scanf("%s", string);
	
	printf("���� �Է�:"); 
	scanf("%c", &c);
	
	printf("%s\n", string);
	printf("!!%c!!\n", c);
	
	return 0;
}
