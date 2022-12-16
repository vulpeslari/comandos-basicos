#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, N2, N3, N4, Media;
    printf("Nota 01: ");
    scanf("%f", &N1);
    printf("Nota 02: ");
    scanf("%f", &N2);
    printf("Nota 03: ");
    scanf("%f", &N3);
    printf("Nota 04: ");
    scanf("%f", &N4);
    Media = (N1 + N2 + N3 + N4)/4;
    printf("Sua media: %.2f", Media);
}
