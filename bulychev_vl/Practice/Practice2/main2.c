#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void main()
{
    int Bull = 0, Cow = 0, N, k, i, j, CHislo;
    int A[10], C[10];
	int B[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printf("Dobro pozhalovat' v igru <Bulls and Cows> \nTSel' igry: Otgadat' zagadannoe programmoj chislo \nPravila igry: \n1. Vyberite dlinu chisla 0 < N < 10 \n2. Vvedite chislo dlinnoyu toj tsifry kotoroyu vybrali. TSifry v chisle ne dolzhny povtoryat'sya. \n3. Programma vam vydast chislo Korov i Bykov \n<Korovy> - TSifra ugadana na nevernoj pozitsii \n<Byki> - TSifra ugadana vplot' do pozitsii \n4. Povtoryat' do tekh por poka chislo bykov ne sovpadet s zagadannoj tsifroj ili Programma vydast: <You WIN!!!> \n---------------------------------------------\n");
    srand((unsigned int)time(0));

    do 
    {
        printf("Vyberite dlinu chisla 0 < N < 10 \nN = ");
        scanf("%d", &N);
    } 
    while ((N <= 0) || (N > 10));
    i = N - 1;
    k = 9.0 / RAND_MAX * rand() + 1;
    A[0] = k;
    B[k] = -1;
    while (i > 0)
    {
        k = 10.0 / RAND_MAX * rand();
        if (B[k] != -1) 
        {
            A[i] = B[k];
            B[k] = -1;
            i--;
        } 
    }
 
    printf("\nVvedite chislo dlinnoyu toj tsifry kotoroyu vybrali. TSifry v chisle ne dolzhny povtoryat'sya.");

    do 
    {
        Bull = 0;
        Cow = 0;
        do 
        {
            k = 0;
            printf("\nCHislo = ");
            scanf("%d", &CHislo);
            for (i = (N - 1); i >= 0; i--)
            {
                C[i] = CHislo % 10;
                CHislo = CHislo / 10;
            }
            for (i = (N - 1); i >= 0; i--)
            {
                for (j = (i - 1); j >= 0; j--)
                {
                    if (C[i] == C[j]) k++;
                }
            }
        } 
        while (k != 0);
        for (i = (N - 1); i >= 0; i--)
        {
            for (j = (N - 1); j >= 0; j--)
            {
                if ((A[i] == C[j]) && (i == j)) Bull++;
                if ((A[i] == C[j]) && (j != i)) Cow++;
            }
        }
        printf("Cow = %d and Bull = %d", Cow, Bull);
    } 
    while (Bull != N);
    printf("\n-----------\nYou WIN!!!\n-----------\n");
}