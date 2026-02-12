#include <stdio.h>
#include <conio.h>
#include <string.h>

void strsisip(char sumber[], char sisipan[], int posisi) {
    char hasil[100];
    int i, j = 0;

    for (i = 0; i < posisi; i++) {
        hasil[j++] = sumber[i];
    }

    for (i = 0; sisipan[i] != '\0'; i++) {
        hasil[j++] = sisipan[i];
    }

    for (i = posisi; sumber[i] != '\0'; i++) {
        hasil[j++] = sumber[i];
    }

    hasil[j] = '\0';
    strcpy(sumber, hasil);
}

int main() {
    char teks[100] = "salah orang"; 
    char sisipan[] = "se"; 
    int posisi = 6; 

    printf("Sebelum disisipkan: %s\n", teks);

    strsisip(teks, sisipan, posisi);

    printf("Setelah disisipkan: %s\n", teks);

    getch();
    return 0;
}