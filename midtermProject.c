/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Wilson Diep - Role: Quiz Creator and debugger - Participation: x%
(Use this line to describe your contribution to the project)
2- Nathan Ervin - Role: Quiz Creator and debugger - Participation: y%
(Use this line to describe your contribution to the project)
3- 
4-
5-																                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
	//SOME LOOP HERE TO KEEP THE PROGRAM GOING UNTIL PERFECT SCORE

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */


int quiz1() 
{
	int score = 0;
	char answer1[10];
	printf("\naX+b is a linear combination (true/false)");
	scanf("%s", answer1); //true

	char answer2[10];
	printf("\nWhich is a prime number?\n(a) 39\n(b) 37\n(c) 81\n(d) 99");
	scanf("%s", answer2); //a
	
	char answer3[50];
	printf("\nThe ________ sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1");
	scanf("%s", answer2); //fibonacci
	
}

int quiz2()
{
	int score = 0;
	char answer1[10];
	printf("\nThe following code produces a compilation error: int m_idterm_project2023 = 3; (true/false)");
	scanf("%s, answer2); //true

	char answer2[10];
	printf("\nWhich of the following are not string formats?\n(a) %s\n(b) %c\n(c) %If\n(d) %s");
	scanf("%s", answer2); //c
	
	char answer3[50];
	printf("\nWithin C coding 0 respresents false and __ respresents true");
	scanf("%s", answer2); //1
	
}

int quiz3()
{
	int score = 0;
	char answer1[10];
	printf("\nA for loop and a while loop are written the same way, but they have to use different variables (true/false)");
	scanf("%s, answer2); //false

	char answer2[10];
	printf("\nWhich number is divisible by 3? \n(a) 299\n(b) 341\n(c) 103\n(d) 1488");
	scanf("%s", answer2); //d
	
	char answer3[50];
	printf("\nDuring a _______ statement the code takes the value given by the user and assigns it to a variable");
	scanf("%s", answer2); //scanf
	
}

void convertToLowercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
}
