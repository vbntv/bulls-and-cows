#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 
//#include <conio.h> 
#include <time.h> 
#define CTEST_COLOR_OK
#include <ctest.h>
#include "function.h"


CTEST(bulls, test1) 
{    
    int a = 1, b = 2, c = 3, d = 4, fst = 1, scnd = 2, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test2) 
{    
    int a = 2, b = 3, c = 4, d = 5 , fst = 2, scnd = 3, thrd = 4, frth = 5;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test3) 
{    
    int a = 3, b = 4, c = 5, d = 6 , fst = 3, scnd = 4, thrd = 5, frth = 6;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test4) 
{    
    int a = 4, b = 5, c = 6, d = 7 , fst = 4, scnd = 5, thrd = 6, frth = 7;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test5) 
{    
    int a = 5, b = 6, c = 7, d = 8 , fst = 5, scnd = 6, thrd = 7, frth = 8;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test6) 
{    
    int a = 6, b = 7, c = 8, d = 9 , fst = 6, scnd = 7, thrd = 8, frth = 9;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test7) 
{    
    int a = 7, b = 8, c = 9, d = 0 , fst = 7, scnd = 8, thrd = 9, frth = 0;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(bulls, test8) 
{    
    int a = 1, b = 2, c = 3, d = 4 , fst = 1, scnd = 2, thrd = 3, frth = 5;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(bulls, test9) 
{    
    int a = 1, b = 2, c = 3, d = 4 , fst = 1, scnd = 0, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(bulls, test10) 
{    
    int a = 1, b = 2, c = 3, d = 4 , fst = 8, scnd = 2, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(bulls, test11) 
{    
    int a = 1, b = 2, c = 3, d = 4 , fst = 1, scnd = 2, thrd = 9, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(bulls, test12) 
{    
    int a = 7, b = 1, c = 3, d = 4 , fst = 0, scnd = 1, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(bulls, test13) 
{    
    int a = 1, b = 2, c = 3, d = 4 , fst = 0, scnd = 1, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(bulls, test14) 
{    
    int a = 7, b = 8, c = 9, d = 0 , fst = 7, scnd = 2, thrd = 3, frth = 0;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(bulls, test15) 
{    
    int a = 7, b = 8, c = 9, d = 1, fst = 1, scnd = 8, thrd = 9, frth = 0;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(bulls, test16) 
{    
    int a = 6, b = 7, c = 8, d = 9, fst = 6, scnd = 2, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}

CTEST(bulls, test17) 
{    
    int a = 6, b = 7, c = 8, d = 9, fst = 1, scnd = 7, thrd = 3, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}
/*
CTEST(bulls, test18) 
{    
    ASSERT_EQUAL(1, bulls_func(6, 7, 8, 9, 1, 2, 8, 4));
}

CTEST(bulls, test19) 
{    
    ASSERT_EQUAL(1, bulls_func(6, 7, 8, 9, 1, 2, 3, 9));
}

CTEST(bulls, test20) 
{    
    ASSERT_EQUAL(0, bulls_func(1, 2, 3, 4, 5, 6, 7, 8));
}

CTEST(bulls, test21) 
{    
    ASSERT_EQUAL(0, bulls_func(5, 6, 7, 8, 9, 0, 1, 2));
}

CTEST(bulls, test22) 
{    
    ASSERT_EQUAL(0, bulls_func(0, 1, 9, 2, 8, 3, 7, 4));
}

CTEST(cows, test1) 
{    
    ASSERT_EQUAL(0, cows_func(1, 2, 3, 4, 1, 2, 3, 4));
}

CTEST(cows, test2) 
{    
    ASSERT_EQUAL(0, cows_func(2, 3, 4, 5, 2, 3, 4, 5));
}

CTEST(cows, test3) 
{    
    ASSERT_EQUAL(0, cows_func(3, 4, 5, 6, 3, 4, 5, 6));
}

CTEST(cows, test4) 
{    
    ASSERT_EQUAL(0, cows_func(4, 5, 6, 7, 4, 5, 6, 7));
}

CTEST(cows, test5) 
{    
    ASSERT_EQUAL(0, cows_func(5, 6, 7, 8, 5, 6, 7, 8));
}

CTEST(cows, test6) 
{    
    ASSERT_EQUAL(0, cows_func(6, 7, 8, 9, 6, 7, 8, 9));
}

CTEST(cows, test7) 
{    
    ASSERT_EQUAL(0, cows_func(7, 8, 9, 0, 7, 8, 9, 0));
}

CTEST(cows, test8) 
{    
    ASSERT_EQUAL(4, cows_func(1, 2, 3, 4, 4, 3, 2, 1));
}

CTEST(cows, test9) 
{    
    ASSERT_EQUAL(4, cows_func(2, 3, 4, 5, 5, 4, 3, 2));
}

CTEST(cows, test10) 
{    
    ASSERT_EQUAL(4, cows_func(3, 4, 5, 6, 6, 5, 4, 3));
}

CTEST(cows, test11) 
{    
    ASSERT_EQUAL(4, cows_func(4, 5, 6, 7, 7, 6, 5, 4));
}

CTEST(cows, test12) 
{    
    ASSERT_EQUAL(4, cows_func(5, 6, 7, 8, 8, 7, 6, 5));
}

CTEST(cows, test13) 
{    
    ASSERT_EQUAL(4, cows_func(6, 7, 8, 9, 9, 8, 7, 6));
}

CTEST(cows, test14) 
{    
    ASSERT_EQUAL(4, cows_func(7, 8, 9, 0, 0, 9, 8, 7));
}

CTEST(cows, test15) 
{    
    ASSERT_EQUAL(3, cows_func(7, 8, 9, 1, 1, 2, 8, 7));
}

CTEST(cows, test16) 
{    
    ASSERT_EQUAL(3, cows_func(6, 7, 8, 9, 9, 6, 3, 7));
}

CTEST(cows, test17) 
{    
    ASSERT_EQUAL(3, cows_func(6, 7, 8, 9, 7, 1, 6, 8));
}

CTEST(cows, test18) 
{    
    ASSERT_EQUAL(2, cows_func(6, 7, 8, 9, 8, 9, 1, 4));
}

CTEST(cows, test19) 
{    
    ASSERT_EQUAL(2, cows_func(6, 7, 8, 9, 7, 2, 3, 9));
}

CTEST(cows, test20) 
{    
    ASSERT_EQUAL(2, cows_func(1, 2, 3, 4, 5, 6, 1, 2));
}

CTEST(cows, test21) 
{    
    ASSERT_EQUAL(1, cows_func(5, 6, 7, 8, 8, 0, 1, 2));
}

CTEST(cows, test22) 
{    
    ASSERT_EQUAL(1, cows_func(0, 1, 9, 2, 8, 3, 7, 1));
}
*/
