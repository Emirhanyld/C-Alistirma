#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Turkish");
	int secim;
	float cl, fh;
	printf("Celcius'tan Fahrenheit'a d�n���m i�in 1, Fahrenheit'tan Celcius'a d�n���m i�in 2, ��kmak i�in 0 yaz�n�z\n");
	scanf("%d",&secim);
	while (1) {
		if(secim == 0)
			return 0;
		if (secim == 1) {
			printf("Celcius'u giriniz\n");
			scanf("%f", &cl);
			fh = cl*1.8+32;
			printf("%f Celcius %f Fahrenheit'a e�ittir\n", cl, fh);
		}
		else if (secim == 2) {
			printf("Fahrenheit'� giriniz\n");
			scanf("%f",&fh);
			cl = (fh-32)*5/9;
			if (cl == (int)cl && fh == (int)fh)
				printf("%d Fahrenheit %d Celcius'a e�ittir", (int)fh, (int)cl);
			else if (cl == (int)cl)
				printf("%f Fahrenheit %d Celcius'a e�ittir", fh, (int)cl);
			else if (fh == (int)fh)
				printf("%d Fahrenheit %f Celcius'a e�ittir", (int)fh, cl);
			else
				printf("%f Fahrenheit %f Celcius'a e�ittir", fh, cl);
		}
		else 
			printf("1 veya 0 d���nda bir say� giremezsiniz");
	}
}