#include <stdio.h>

int Expression (int a, int b, int c, int d) {
    return a * b + c * d;
}
int main() {
int a;
int b;
int c;
int d;
int e;
int f;
e = a * b; 
f = c * d;


printf("Erste Zahl: ");
scanf("%d", &a);
printf("Zweite Zahl: ");
scanf("%d", &b);
printf ("Ergebnis Erste Zahle * Zweite Zahle: %d \n", e);
printf("Dritte Zahl: ");
scanf("%d", &c);
printf("Vierte Zahl: ");
scanf("%d", &d);
printf ("Ergebnis Dritte Zahle * Viertte Zahle: %d \n", f);


printf ("Ergebnis: %d \n", e * f);
return 0;
}