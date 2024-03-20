#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int language = 2;  // Türkçe-1   İngilizce-2
char *markalar[20] = {
    "Aston Martin", "Audi",        "BMW",     "Chevrolet",     "Citroen",
    "Dodge",        "Ferrari",     "Fiat",    "Ford",          "Hyundai",
    "Jaguar",       "Lamborghini", "McLaren", "Mercedes-Benz", "Porsche",
    "Renault",      "Tofas",       "Toyota",  "Volkswagen",    "Volvo"};
char *modeller[][20] = {
    /* 1 Aston Martin */ {"DB7 VANTAGE VOLANTE",
                          "DB9",
                          "DB11",
                          "DBS COUPE",
                          "DBS VOLANTE",
                          "DBS SUPERLEGGERA",
                          "V12 VANQUISH",
                          "V12 VANTAGE",
                          "V12 ZAGATO",
                          "V12 VANTAGE S",
                          "ONE-77",
                          "RAPIDE",
                          "VIRAGE",
                          "CC100",
                          "VANQUISH",
                          "RAPIDE S",
                          "VANQUISH S",
                          "DBX",
                          "VALKYRIE",
                          "VULCAN"},
    /* 2 Audi */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                  "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                  "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 3 BMW */
    {"i3",
     "iX",
     "i4",
     "i4 M50",
     "iX3",
     "5 Sedan",
     "6 Gran Turismo",
     "8 Coupe",
     "8 Cabrio",
     "8 Gran Coupe",
     "X1",
     "X2",
     "X3",
     "X3 M40i",
     "X7",
     "Z4 Roadster",
     "M2",
     "M760 xDrive Sedan",
     "M8 Coupe",
     "M8 Gran Coupe"},
    /* 4 Chevrolet */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                       "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                       "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 5 Citroen */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                     "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                     "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 6 Dodge */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                   "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                   "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 7 Ferrari */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                     "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                     "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 8 Fiat */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                  "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                  "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 9 Ford */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                  "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                  "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 10 Hyundai */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                      "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                      "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 11 Jaguar */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                     "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                     "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 12 Lamborghini */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                          "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                          "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 13 McLaren */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                      "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                      "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 14 Mercedes-Benz */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                            "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                            "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 15 Porsche */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                      "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                      "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 16 Renault */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                      "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                      "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 17 Tofas */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                    "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                    "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 18 Toyota */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                     "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                     "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 19 Volkswagen */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                         "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                         "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"},
    /* 20 Volvo */ {"A3",  "A4",  "A5",  "A6", "A7",    "A8", "S5",
                    "S6",  "S7",  "S8",  "Q5", "Q6",    "Q7", "Q8",
                    "RS5", "RS6", "RS7", "Q8", "TT RS", "R8"}};
int gunlukFiyatlar[20] = {700, 306,  323,  680, 406, 272, 1400, 361, 373, 283,
                          840, 1350, 1500, 472, 228, 390, 180,  403, 211, 218};
int saatlikFiyatlar[20] = {35, 24, 22, 32, 22, 23, 80, 23, 25, 19,
                           35, 80, 85, 16, 15, 25, 13, 15, 23, 17};

char *string;
int strLength(char *);
char toUpper(char);
char toLower(char);
char *strToUpper(char *str);
char *strToLower(char *);
void arabaResmi();
void dilSec(int *);
int markaBastir();
int modelBastir(int);
int saatlikVeyaGunluk(int, int);
int sureGiris(int, int, int);
int fiyatHesapla(int, int, int, int);

int main() {
    SMALL_RECT windowSize = {0, 0, 40, 37};  // 0 0 40 30
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
    int marka, model, flag = 1, fiyat;

    dilSec(&language);
    getch();
}

int strLength(char *str) {
    int lenght = 0;
    for (int i = 0; str[i] != '\0'; ++i) ++lenght;
    return lenght + 1;
}

char toUpper(char ch) {
    if (ch >= 97 && ch <= 122)
        return ch - 32;
    else
        return ch;
}

char toLower(char ch) {
    if (ch >= 65 && ch <= 90)
        return ch + 32;
    else
        return ch;
}

char *strToUpper(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) str[i] = toUpper(str[i]);
    return str;
}

char *strToLower(char *str) {
    for (int i = 0; str[i] != '\0'; ++i) str[i] = toLower(str[i]);
    return str;
}

void arabaResmi() {
    printf("\n\n\n");
    printf("                 ______\n");
    printf("                /   |  \\\n");
    printf("               /    |   \\\n");
    printf("          ____/_____|____\\____\n");
    printf("         /                    \\\n");
    printf((language == 1) ? "         | __ Oto Kiralama __ |\n"
                           : "         | __  Rent a Car  __ |\n");
    printf("         \\/  \\____________/  \\/\n");
    printf("          \\__/            \\__/ \n");
}

void dilSec(int *dil) {
    while (1) {
        arabaResmi();
        printf("\n\n\n\n\n\n\n");
        printf("      Please choose your language\n");
        printf("\n\n\n\n\n\n\n");
        printf("               0 - Exit\n");
        printf("               1 - Turkce\n");
        printf("               2 - English\n");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("               Your choose=");
        scanf("%d", dil);
        if (*dil == 0)
            return;
        else if (*dil == 1 || *dil == 2)
            break;
    }
    markaBastir();
}

int markaBastir() {
    int marka = -1;
    while (1) {
        arabaResmi();
        printf("\n\n");
        printf((language == 1) ? "     Lutfen araba markasini seciniz\n\n"
                               : "        Please choose car brand\n\n");
        printf((language == 1) ? "              0 - Geri\n"
                               : "              0 - Back\n");
        for (int i = 0; i < 20; ++i)
            printf("              %d - %s\n", i + 1, markalar[i]);
        printf((language == 1) ? "\n\n              Seciminiz="
                               : "\n\n              Your choise=");
        scanf("%d", &marka);
        if (marka == 0) {
            dilSec(&language);
            break;
        } else if (marka >= 1 && marka <= 20) {
            modelBastir(marka);
            return marka;
        }
    }
}

int modelBastir(int marka) {
    int model = -1;
    while (1) {
        arabaResmi();
        printf("\n\n");
        printf((language == 1) ? "     Lutfen araba modelini seciniz\n"
                               : "           Please choose car model\n");
        printf((language == 1) ? "              0 - Geri\n"
                               : "              0 - Back\n");
        for (int i = 0; i < 20; ++i)
            printf("              %d - %s\n", i + 1, modeller[marka - 1][i]);
        printf((language == 1) ? "\n\n              Seciminiz="
                               : "\n\n              Your choice=");
        scanf("%d", &model);
        if (model == 0) {
            markaBastir();
            return 0;
        } else if (model >= 1 && model <= 20) {
            saatlikVeyaGunluk(marka, model);
            return model;
        }
    }
}

int saatlikVeyaGunluk(int marka, int model) {
    int secim;
    while (1) {
        arabaResmi();
        printf("\n\n\n\n\n");
        printf("                %s %s\n", markalar[marka - 1],
               modeller[marka - 1][model - 1]);
        printf("\n\n\n\n");
        printf("\n          Kiralama tipini seciniz\n");
        printf("\n\n\n\n\n");
        printf("               0 - Geri\n");
        printf("               1 - Gunluk\n");
        printf("               2 - Saatlik\n");
        printf("\n\n\n\n\n\n");
        printf("               Seciminiz=");
        scanf("%d", &secim);
        if (secim == 0) {
            modelBastir(marka);
            return 0;
        } else if (secim == 1 || secim == 2) {
            sureGiris(marka, model, secim);
            return secim;
        }
    }
}

int sureGiris(int marka, int model, int secim) {
    int sure;
    arabaResmi();
    printf("\n\n\n\n\n\n");
    printf("                 Audi A3");
    printf("\n\n\n\n\n\n");
    if (secim == 1)
        printf("  Araci kac gunlugune kiralayacaksiniz?\n");
    else if (secim == 2)
        printf("  Araci kac saatligine kiralayacaksiniz?\n");
    printf("\n\n\n\n\n\n");
    printf("                 0 - Geri");
    printf("\n\n\n\n\n\n\n");
    printf("               Cevabiniz=");
    scanf("%u", &sure);
    if (sure == 0)
        saatlikVeyaGunluk(marka, model);
    else
        fiyatHesapla(marka, model, secim, sure);
    return sure;
}

int fiyatHesapla(int marka, int model, int secim, int sure) {
    int fiyat = 0;
    if (secim == 1)
        fiyat = sure * gunlukFiyatlar[marka - 1];
    else if (secim == 2)
        fiyat = sure * saatlikFiyatlar[marka - 1];
    arabaResmi();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("      Odemeniz gereken tutar %dTL", fiyat);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return fiyat;
}