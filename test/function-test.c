#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 
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

CTEST(bulls, test18) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 1, scnd = 2, thrd = 8, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}

CTEST(bulls, test19) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 1, scnd = 2, thrd = 3, frth = 9;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}

CTEST(bulls, test20) 
{    

    int a = 1, b = 2, c = 3, d = 4, fst = 5, scnd = 6, thrd = 7, frth = 8;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(bulls, test21) 
{    

    int a = 5, b = 6, c = 7, d = 8, fst = 9, scnd = 0, thrd = 1, frth = 2;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(bulls, test22) 
{    

    int a = 0, b = 1, c = 9, d = 2, fst = 8, scnd = 3, thrd = 7, frth = 4;
    
    int const result = bulls_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test1) 
{    

    int a = 1, b = 2, c = 3, d = 4, fst = 1, scnd = 2, thrd = 3, frth = 4;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test2) 
{    

    int a = 2, b = 3, c = 4, d = 5, fst = 2, scnd = 3, thrd = 4, frth = 5;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test3) 
{    
    int a = 3, b = 4, c = 5, d = 6, fst = 3, scnd = 4, thrd = 5, frth = 6;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test4) 
{    

    int a = 4, b = 5, c = 6, d = 7, fst = 4, scnd = 5, thrd = 6, frth = 7;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test5) 
{    

    int a = 1, b = 2, c = 3, d = 4, fst = 1, scnd = 2, thrd = 3, frth = 4;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test6) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 6, scnd = 7, thrd = 8, frth = 9;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test7) 
{    

    int a = 7, b = 8, c = 9, d = 0, fst = 7, scnd = 8, thrd = 9, frth = 0;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(0, result);
}

CTEST(cows, test8) 
{    
    int a = 1, b = 2, c = 3, d = 4, fst = 4, scnd = 3, thrd = 2, frth = 1;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test9) 
{    
    int a = 2, b = 3, c = 4, d = 5, fst = 5, scnd = 4, thrd = 3, frth = 2;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test10) 
{    

    int a = 3, b = 4, c = 5, d = 6, fst = 6, scnd = 5, thrd = 4, frth = 3;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test11) 
{    

    int a = 4, b = 5, c = 6, d = 7, fst = 7, scnd = 6, thrd = 5, frth = 4;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test12) 
{    

    int a = 5, b = 6, c = 7, d = 8, fst = 8, scnd = 7, thrd = 6, frth = 5;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test13) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 9, scnd = 8, thrd = 7, frth = 6;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test14) 
{    

    int a = 7, b = 8, c = 9, d = 0, fst = 0, scnd = 9, thrd = 8, frth = 7;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(4, result);
}

CTEST(cows, test15) 
{    

    int a = 7, b = 8, c = 9, d = 1, fst = 1, scnd = 2, thrd = 8, frth = 7;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(cows, test16) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 9, scnd = 6, thrd = 3, frth = 7;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(cows, test17) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 7, scnd = 1, thrd = 6, frth = 8;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(3, result);
}

CTEST(cows, test18) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 8, scnd = 9, thrd = 1, frth = 4;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(cows, test19) 
{    

    int a = 6, b = 7, c = 8, d = 9, fst = 7, scnd = 2, thrd = 9, frth = 3;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(cows, test20) 
{    

    int a = 1, b = 2, c = 3, d = 4, fst = 5, scnd = 6, thrd = 1, frth = 2;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(2, result);
}

CTEST(cows, test21) 
{    

    int a = 5, b = 6, c = 7, d = 8, fst = 8, scnd = 0, thrd = 1, frth = 2;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}

CTEST(cows, test22) 
{    

    int a = 0, b = 1, c = 9, d = 2, fst = 8, scnd = 3, thrd = 7, frth = 1;
    
    int const result = cows_func(&a, &b, &c, &d, &fst, &scnd, &thrd, &frth);
    
    ASSERT_EQUAL(1, result);
}
