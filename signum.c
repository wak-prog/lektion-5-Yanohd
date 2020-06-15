#include <stdio.h>

int signum(int a){

    if (a >=1) {
        return 1;
    }
    else if(a<=-1){
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
int a;
 
printf("Bitte einen Zahl eingeben: \n");
scanf("%d", &a);
printf ("%d \n", signum(a));


return 0;
}