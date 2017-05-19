#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <ctype.h>
//#include <conio.h> 
#include <time.h> 
#include "function.h"

int safe_input(int *fst, int *scnd, int *thrd, int *frth)
{
    int test, number;
    char str[6];
	fgets(str, sizeof(str), stdin);
	test = atoi(str);
	

    if(test > 10000 || test < 100)
	{
		printf("Error. It`s not four-digit number\n");
		return 0;
	}
	
	if(str[0] == str[1] || str[0] == str[2] || str[0] == str[3] || str[1] == str[2] || str[1] == str[3] || str[2] == str[3])
    {   
	    printf("Error. Incorrect input! Please, enter different digits\n");
	    return 0;
    }
    
    if(isdigit(str[0]) && isdigit(str[1]) && isdigit(str[2]) && isdigit(str[3]))
   	{
        number = atoi(str);
		return number;
	} else 
	  {
	    printf("Error. It`s not four-digit number\n");
        return 0;
      }

}

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
	
        number = safe_input(&fst, &scnd, &thrd, &frth);
        if(number > 0)
        {
            printf("\n");
            fst = number / 1000;
            scnd = number / 100 % 10;
            thrd = number / 10 % 10;
            frth = number % 10;
            
            bulls = bulls_func(a, b, c, d, &fst, &scnd, &thrd, &frth);
                
            cows = cows_func(a, b, c, d, &fst, &scnd, &thrd, &frth);
    
            printf("%d bulls\n", bulls);
            printf("%d cows\n", cows);
            printf("\n");
            printf("\n");
        }
    }

    printf("Congratulations\n");

    return 0;

}
