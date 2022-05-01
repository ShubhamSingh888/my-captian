#include<stdio.h>
int main()
{
int n;
printf("THE MENU ARE\nPASTA=150\nCOLDRINK=250\nSAMOOSA=120\nICECREAK=210\nSANDWITCH=109\nenter the number between 1 to 5\n");
scanf("%d",&n);

switch(n)
{
	case(1):printf("\nPASTA\n PRICE=150");
		break;
	case(2):printf("\ncoldrink\nprice=250");
	    break;
	case(3):printf("\nSAMOOSA\n PRICE=120");
		break;
	case(4):printf("\nICECREAM\n PRICE=210");
		break;
	case(5):printf("\nSANDWITCH\nPRICE=109");
		break;
	default:printf("\nwrong input for order");
}
if(n<=5)
printf("\nMEAL IS GETTING READY .. THANKYOU FOR THE ORDER .. WAIT FEW MIN \a");
}
