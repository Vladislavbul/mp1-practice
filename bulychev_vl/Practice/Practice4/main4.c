#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
#define _ 16
#define _ 71

void menu()
{
    printf("Menu:\n");
    printf("1- Scan product \n");
    printf("2- Add product to check \n");
    printf("3- Check \n");
    printf("4- To pay \n");
}

void main()
{
    int i, menu;
    srand((unsigned)time(0));
    for (i = 0; i < _; i++)
	{
		_[i] = rand() % 50 + 1;
	}

    do 
    {
		printf("Your choice = ");
        scanf("%d", &menu);
        switch (menu) 
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
			printf("!!!Wrong!!!\n\n");
        }
	} while (1);
} 