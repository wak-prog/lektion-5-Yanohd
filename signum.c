#include <stdio.h>

int lol(int a) {
    return a * -1;
}

int main() {
int a;

printf("Bitte einen Zahl eingeben: ");
scanf("%d", &a);

if (a >=1) {
printf ("Ergebnis: %d \n", 1);
}
else if(a<=-1){
    printf ("Ergebnis: %d \n",-1);
}
else {
    printf ("Ergebnis: %d \n", 0);
}
return 0;
}