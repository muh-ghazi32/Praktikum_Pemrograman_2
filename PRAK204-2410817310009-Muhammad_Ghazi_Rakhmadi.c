#include <stdio.h>

int main () {
    float jari_jari1, tinggi1;

    printf("Masukkan jari-jari : ");
    scanf("%f", &jari_jari1);

    printf("Masukkan tinggi : ");
    scanf("%f", &tinggi1);

    float luas = 2 * 22.0/7.0 * jari_jari1 * (jari_jari1 + tinggi1);
    float volume = 22.0/7.0 * (jari_jari1 * jari_jari1) * tinggi1;
    float keliling = 2 * 22.0/7.0 * jari_jari1;

    printf ("Volume tabung = %.2f\n", (volume));
    printf ("Luas permukaan tabung = %.2f\n", (luas)); 
    printf ("Keliling tabung = %.2f\n", (keliling));
    printf("\n");

    float jari_jari2, tinggi2;

    printf("Masukkan jari-jari : ");
    scanf("%f", &jari_jari2);

    printf("Masukkan tinggi : ");
    scanf("%f", &tinggi2);

    float luas2 = 2 * 22.0/7.0 * jari_jari2 * (jari_jari2 + tinggi2);
    float volume2 = 22.0/7.0 * (jari_jari2 * jari_jari2) * tinggi2;
    float keliling2 = 2 * 22.0/7.0 * jari_jari2;

    printf ("Volume kerucut = %.2f\n", (volume2));
    printf ("Luas permukaan kerucut = %.2f\n", (luas2));
    printf ("Keliling kerucut = %.2f\n", (keliling2));

    return 0; 
}