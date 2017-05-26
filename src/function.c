#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <ctype.h>
//#include <conio.h> 
#include <time.h> 
#include "function.h"
#include <unistd.h>


void menu()
{
    
	printf("\n\n\n\n\nДобро пожаловать в игру БЫКИ И КОРОВЫ\n\n");
	printf("Навигация по пунктам меню осуществляется нажатием соответвутствующих клавиш\n");
	printf("1. Начать игру\n");
	printf("2. Правила игры\n");
	printf("3. Выход\n");
	int punkt2;
	int punkt;	
	scanf("%d", &punkt); 
    int a, b, c, d;	
	
		
	
	
	switch(punkt){
		case 1:
			
    
    			bcrandom(&a, &b, &c, &d);
                
                    
    
    			bulls_cows(&a, &b, &c, &d);
			
			break;
		case 2:
			printf("Правила игры: ");
			printf("Компьютер задумывает четырехзначное число. Цифры в числе не повторяются, \n");
			printf("0 может стоять на первом месте.\n");
			printf("Игрок делает ходы, чтобы узнать это число. \n");
			printf("В ответ на каждый ход компьютер показывает число отгаданных цифр,\n");
			printf("стоящих на своих местах (число быков) и число отгаданных цифр, \n");
			printf("стоящих не на своих местах (число коров).\n\n");
			
			printf("Вернутся в меню? 1 - да, 2 - Выход из игры\n");
			scanf("%d", &punkt2);
			
            
			
			    switch(punkt2){
			        case 1:
                    menu();
                    break;
                    case 2:
                    _Exit (EXIT_SUCCESS);
				
		}
		case 3:
			_Exit (EXIT_SUCCESS);
	
		break;			
	}
			

   

}				
			
	

	
   
   
 
   

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
        sleep(1);
	
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

    printf("Поздравляем, вы победили!\n\n Возвращение в меню.");

    menu();
   
    return 0;

}

