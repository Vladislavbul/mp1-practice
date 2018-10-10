#include <stdio.h>
#include <math.h>
void main()
{
	float h, w, d; //vysota(h), shirina(w), glubina(d)
	float pDVP, pDSP, pDerevo; //plotnosti
	float zad, bok, verkh, niz, dveri, polki; //komplektuyushhie shkafa
	float x;
	double a; //kolichestvo polok

	printf("Vvedite po poryadku vysotu (h), shirinu (w), glubinu(d) \nDannye dolzhny sootvetstvovat' sleduyushhemu: 180 < h < 220; 80 < w < 120; 50 < d < 90 \n");
	scanf("%f %f %f", &h, &w, &d);
	
	if ((h < 180) || (220 < h))
	{
		printf("Nepravil'nye dannye \n");
		return;
	}

	if ((w < 80) || (120 < w))
	{
		printf("Nepravil'nye dannye \n");
		return;
	}

	if ((d < 50) || (90 < d))
	{
		printf("Nepravil'nye dannye \n");
		return;
	}
	
	printf("Vyberete 1 ili 2 \n1 - ispol'zovanie standart nastroek (DVP = 0.85; DSP = 0.65; Derevo = 0.69) \n2 - vvod znachenij plotnostei samostoyatel'no  \nDannye vvodyatsya v g/cm^3 \n");
	scanf("%f", &x);
	
	if ((x < 1) || (2 < x))
	{
		printf("Nepravil'nye dannye \n");
		return;
	}

	if (x == 1)
	{
		pDVP = 0.85;
		pDSP = 0.65;
		pDerevo = 0.69;
	}

	if (x == 2)
	{
		printf("Vvedite plotnost' DVP (pDVP); plotnost' DSP (pDSP); plotnost' dereva (pDereva) \n");
		scanf("%f %f %f", &pDVP, &pDSP, &pDerevo);

		if ((pDVP <= 0) || (pDSP <= 0) || (pDerevo <= 0))
		{
		printf("Nepravil'nye dannye \n");
		return;
		}
	}
	
	zad = h * w * 0.5/*tolshhina*/ * pDVP;
	bok = 2 * h * d * 1.5/*tolshhina*/ * pDSP;
	verkh = w * d * 1.5/*tolshhina*/ * pDSP;
	niz = w * d * 1.5/*tolshhina*/ * pDSP;
	dveri = h * w * 1/*tolshhina*/ * pDerevo;
	a = floor (h / 40); //kolichestvo polok
	polki = a * d * w * 1/*tolshhina*/ * pDSP; //V zadache net znacheniya tolshhiny polki, beru za 1 cm

	printf("Otvet dan v kilogrammakh \nMassa shkafa = %f", (zad + bok + verkh + niz + dveri + polki)/1000);
}