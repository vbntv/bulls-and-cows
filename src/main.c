#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
//#include <conio.h> 
#include <time.h> 
#include "function.h"

int main()
{
    int a, b, c, d;
    
    bcrandom(&a, &b, &c, &d);
    
    bulls_cows(&a, &b, &c, &d);

    return 0;
}
