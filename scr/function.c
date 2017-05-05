#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
//#include <conio.h> 
#include <time.h> 
#include "function.h"

int bcrandom(int *a, int *b, int *c, int *d)
{
    srand(time(NULL));

    do {
        *a = 0 + rand() % 9;
        *b = 0 + rand() % 9;
        *c = 0 + rand() % 9;
        *d = 0 + rand() % 9;
    } while (*d == *a || *d == *b || *d == *c || *c == *a || *c == *b || *b == *a);
    
    printf("Rand number %d%d%d%d\n", *a, *b, *c, *d);

    return 0;

}

int bulls_cows(int *a, int *b, int *c, int *d)
{
    int number = 0, fst, scnd, thrd, frth;
    int bulls = 0, cows = 0;

    while (number != (*a * 1000 + *b * 100 + *c * 10 + *d))
    {
        printf("Vvedite chetyrehznachnoe chislo = ");
        scanf("%d", &number); 
        printf("\n");
        fst = number / 1000;
        scnd = number / 100 % 10;
        thrd = number / 10 % 10;
        frth = number % 10;

        if (fst == *a)
            bulls++;
        if (scnd == *b)
            bulls++;
        if (thrd == *c)
            bulls++;
        if (frth == *d)
            bulls++;

        if (fst == *b || fst == *c || fst == *d)
            cows++;
        if (scnd == *a || scnd == *c || scnd == *d)
            cows++;
        if (thrd == *b || thrd == *a || thrd == *d)
            cows++;
        if (frth == *b || frth == *c || frth == *a)
            cows++;

        printf("%d bull's\n", bulls);
        printf("%d cow's\n", cows);
        printf("\n");
        printf("\n");
        cows = 0;
        bulls = 0;
    }

    printf("Congratulations\n");

    return 0;

}
