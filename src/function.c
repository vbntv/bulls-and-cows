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

int bulls_func(int *a, int *b, int *c, int *d, int *fst, int *scnd, int *thrd, int *frth)
{
	int bulls = 0;
	
	if (*fst == *a)
		bulls++;
    if (*scnd == *b)
        bulls++;
	if (*thrd == *c)
        bulls++;
	if (*frth == *d)
        bulls++;
        
    return bulls;
}

int cows_func(int *a, int *b, int *c, int *d, int *fst, int *scnd, int *thrd, int *frth)
{
	int cows = 0;
	
	if (*fst == *b || *fst == *c || *fst == *d)
		cows++;
    if (*scnd == *a || *scnd == *c || *scnd == *d)
	    cows++;
    if (*thrd == *b || *thrd == *a || *thrd == *d)
        cows++;
    if (*frth == *b || *frth == *c || *frth == *a)
        cows++;
        
    return cows;
}

int bulls_cows(int *a, int *b, int *c, int *d)
{
    int number = 0, fst, scnd, thrd, frth;
    int bulls, cows;

    while (number != (*a * 1000 + *b * 100 + *c * 10 + *d))
    {
        printf("Enter the four-digit celery: = ");
        scanf("%d", &number); 
        printf("\n");
        fst = number / 1000;
        scnd = number / 100 % 10;
        thrd = number / 10 % 10;
        frth = number % 10;
        
        bulls = bulls_func(a, b, c, d, &fst, &scnd, &thrd, &frth);

        /*if (fst == *a)
            bulls++;
        if (scnd == *b)
            bulls++;
        if (thrd == *c)
            bulls++;
        if (frth == *d)
            bulls++;*/
            
        cows = cows_func(a, b, c, d, &fst, &scnd, &thrd, &frth);

        /*if (fst == *b || fst == *c || fst == *d)
            cows++;
        if (scnd == *a || scnd == *c || scnd == *d)
            cows++;
        if (thrd == *b || thrd == *a || thrd == *d)
            cows++;
        if (frth == *b || frth == *c || frth == *a)
            cows++;*/

        printf("%d bulls\n", bulls);
        printf("%d cows\n", cows);
        printf("\n");
        printf("\n");
        //cows = 0;
        //bulls = 0;
    }

    printf("Congratulations\n");

    return 0;

}
