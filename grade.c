#include<stdio.h>
int main()
{
	int i;
	printf("enter the marks");
	scanf("%d",&i);
	if(i<0||i>100)
	{
		printf("wrong entery");
	}
	else if(i<=100 && i>=85)
	{
		printf("A");
	}
	 else if(i<=84&&i>=70)
	 {
	 	printf("grade B");
	 	
	 }
	 else if(i<=69&&i>=55)
	 {
	 	printf("grade C");
	 	
	 }
	 else if(i<=54&&i>=40)
	 {
	 	printf("grade D");
	 	
	 }
	 else if(i<=39&&i>=0)
	 {
	 	printf("grade F");
	 	
	 }
	}
