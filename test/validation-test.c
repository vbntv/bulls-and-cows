#include <stdio.h>
#include <stdlib.h> 
#include <locale.h> 
#include <time.h> 
#define CTEST_COLOR_OK
#include <ctest.h>
#include "function.h"


CTEST(validation, test1) 
{    
    char str[100] = {1};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test2) 
{    
    char str[100] = {1, 2};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test3) 
{    
    char str[100] = {1, 2 , 3};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test4) 
{    
    char str[100] = {1, 2, 3, 4, 5};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test5) 
{    
    char str[100] = {1, 2, 3, 4, 'a'};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test6) 
{    
    char str[100] = {'a'};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test7) 
{    
    char str[100] = {'a', '%', ' ', '/'};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test8) 
{    
    char str[100] = {1, 'a', '3', '4'};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}

CTEST(validation, test9) 
{    
    char str[100] = {'a', 'b', 'c', 'd', '%', '&', '1', ' '};
    
    int const result = safe_input(str);
    
    ASSERT_EQUAL(0, result);
}
