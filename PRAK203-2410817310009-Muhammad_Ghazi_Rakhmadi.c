#include <stdio.h>

float hitungan1(float a1, float b1, float i1, float j1, float x1, float y1) {
    return (((a1 - b1) * i1) / j1) - (x1 + y1);
}

int main() {
    //test case ke 1
    float a1, b1, i1, j1, x1, y1;
    float hasil1;
    printf("Masukkan nilai a, b, i, j, x, dan y : ");
    scanf("%f %f %f %f %f %f", &a1, &b1, &i1, &j1, &x1, &y1);
    hasil1 = hitungan1(a1, b1, i1, j1, x1, y1);
    printf("Hasil : %.3f\n", hasil1);
    printf("\n");

    //test case ke 2
    float a2, b2, i2, j2, x2, y2;
    float hasil2;
    printf("Masukkan nilai a, b, i, j, x, dan y : ");
    scanf("%f %f %f %f %f %f", &a2, &b2, &i2, &j2, &x2, &y2);
    hasil2 = hitungan1(a2, b2, i2, j2, x2, y2);
    printf("Hasil : %.3f\n", hasil2);

    return 0;
}