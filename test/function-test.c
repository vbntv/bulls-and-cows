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
    ASSERT_EQUAL(4, bulls_func(1, 2, 3, 4, 1, 2, 3, 4));
}

CTEST(bulls, test2) 
{    
    ASSERT_EQUAL(4, bulls_func(2, 3, 4, 5, 2, 3, 4, 5));
}

CTEST(bulls, test3) 
{    
    ASSERT_EQUAL(4, bulls_func(3, 4, 5, 6, 3, 4, 5, 6));
}

CTEST(bulls, test4) 
{    
    ASSERT_EQUAL(4, bulls_func(4, 5, 6, 7, 4, 5, 6, 7));
}

CTEST(bulls, test5) 
{    
    ASSERT_EQUAL(4, bulls_func(5, 6, 7, 8, 5, 6, 7, 8));
}

CTEST(bulls, test6) 
{    
    ASSERT_EQUAL(4, bulls_func(6, 7, 8, 9, 6, 7, 8, 9));
}

CTEST(bulls, test7) 
{    
    ASSERT_EQUAL(4, bulls_func(7, 8, 9, 0, 7, 8, 9, 0));
}

CTEST(bulls, test8) 
{    
    ASSERT_EQUAL(3, bulls_func(1, 2, 3, 4, 1, 2, 3, 5));
}

CTEST(bulls, test9) 
{    
    ASSERT_EQUAL(3, bulls_func(1, 2, 3, 4, 1, 0, 3, 4));
}

CTEST(bulls, test10) 
{    
    ASSERT_EQUAL(3, bulls_func(1, 2, 3, 4, 8, 2, 3, 4));
}

CTEST(bulls, test11) 
{    
    ASSERT_EQUAL(3, bulls_func(1, 2, 3, 4, 1, 2, 9, 4));
}

CTEST(bulls, test12) 
{    
    ASSERT_EQUAL(3, bulls_func(7, 1, 3, 4, 0, 1, 3, 4));
}

CTEST(bulls, test13) 
{    
    ASSERT_EQUAL(2, bulls_func(1, 2, 3, 4, 0, 1, 3, 4));
}

CTEST(bulls, test14) 
{    
    ASSERT_EQUAL(2, bulls_func(7, 8, 9, 0, 7, 2, 3, 0));
}

CTEST(bulls, test15) 
{    
    ASSERT_EQUAL(2, bulls_func(7, 8, 9, 1, 1, 8, 9, 0));
}

CTEST(bulls, test16) 
{    
    ASSERT_EQUAL(1, bulls_func(6, 7, 8, 9, 6, 2, 3, 4));
}

CTEST(bulls, test17) 
{    
    ASSERT_EQUAL(1, bulls_func(6, 7, 8, 9, 1, 7, 3, 4));
}

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


