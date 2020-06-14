#include <stdio.h>

int Expression (int a, int b, int c, int d) {
    return a * b + c * d;
}
int main() {
int a;
int b;
int c;
int d;
int E;

printf("Erste Zahl: ");
scanf("%d", &a);
printf("Zweite Zahl: ");
scanf("%d", &b);
printf ("Ergebnis Erste Zahle * Zweite Zahle: %d \n", a*b);
printf("Dritte Zahl: ");
scanf("%d", &c);
printf("Vierte Zahl: ");
scanf("%d", &d);
printf ("Ergebnis Dritte Zahle * Viertte Zahle: %d \n", c*d);
E = Expression (a, b, c, d);

printf ("Ergebnis: %d \n", a*b + c*d);
return 0;
}