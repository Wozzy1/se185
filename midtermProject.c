/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Student 1 - Role: Quiz Creator	and debugger - Participation: x%
(Use this line to describe your contribution to the project)
2- Student 2 - Role: Quiz Creator and debugger - Participation: y%
(Use this line to describe your contribution to the project)
3- Look Wilson I can edit this file!
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
	
	if (convertToLowercase(answer1) == 'true')
	{
		
	}
	
}

void convertToLowercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
}
