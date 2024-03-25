#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Turkish");
	int secim;
	float cl, fh;
	printf("Celcius'tan Fahrenheit'a dönüþüm için 1, Fahrenheit'tan Celcius'a dönüþüm için 2, çýkmak için 0 yazýnýz\n");
	scanf("%d",&secim);
	while (1) {
		if(secim == 0)
			return 0;
		if (secim == 1) {
			printf("Celcius'u giriniz\n");
			scanf("%f", &cl);
			fh = cl*1.8+32;
			printf("%f Celcius %f Fahrenheit'a eþittir\n", cl, fh);
		}
		else if (secim == 2) {
			printf("Fahrenheit'ý giriniz\n");
			scanf("%f",&fh);
			cl = (fh-32)*5/9;
			if (cl == (int)cl && fh == (int)fh)
				printf("%d Fahrenheit %d Celcius'a eþittir", (int)fh, (int)cl);
			else if (cl == (int)cl)
				printf("%f Fahrenheit %d Celcius'a eþittir", fh, (int)cl);
			else if (fh == (int)fh)
				printf("%d Fahrenheit %f Celcius'a eþittir", (int)fh, cl);
			else
				printf("%f Fahrenheit %f Celcius'a eþittir", fh, cl);
		}
		else 
			printf("1 veya 0 dýþýnda bir sayý giremezsiniz");
	}
}