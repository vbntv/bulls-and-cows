#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
//#include <conio.h> 
#include <time.h> 
#include "function.h"

void main()
{
    int a, b, c, d;
    
    bcrandom(&a, &b, &c, &d);
    
    bulls_cows(&a, &b, &c, &d);

    //_getch();
}
