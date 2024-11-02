#include <stdio.h>

int main () {
    float nilai1, nilai2, hasil;
    float nilai_1, nilai_2, hasil_1;

    printf("Masukkan Nilai Pertama  : "); 
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua    : "); 
    scanf("%f", &nilai2);

    hasil = nilai1 + nilai2;

    printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);

    printf("\n");
    printf("Masukkan Nilai Pertama  : "); 
    scanf("%f", &nilai_1);
    printf("Masukkan Nilai Kedua    : "); 
    scanf("%f", &nilai_2);

    hasil_1 = nilai_1 + nilai_2;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai_1, nilai_2, hasil_1);
}