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
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

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

//global vars
int trueFinal[3][25]; // 3 quizzes, 25 attempts each
int score = 0;

int main()
{
	//SOME LOOP HERE TO KEEP THE PROGRAM GOING UNTIL PERFECT SCORE
	printf("\nThis is Midterm Exam 1");
	int num;
	printf("\nEnter a random number (1-9) ");
	scanf("%d", &num);
	//srand(time(num));
	
	bool allComplete = false;
	bool complete1 = false;
	bool complete2 = false;
	bool complete3 = false;
	bool isFinished = false; // true means done | false means continue
	int randNum = rand() % 3 + 1;
	
	printf("\nYou were randomly selected to start with Exam %d", randNum);
	printf("\n\n\n\n\n\n");
	
	while (!allComplete || !isFinished)
	{
		
		if (randNum == 1)
		{
			score = quiz1();
			
			if (score == 15)
			{
				complete1 = true;
			}
		}
		
		else if (randNum == 2)
		{
			score = quiz2();
			
			if (score == 15)
			{
				complete2 = true;
			}
		}
		
		else if (randNum == 3)
		{
			score = quiz3();
			
			if (score == 15)
			{
				complete3 = true;
			}
		}
		
		if (complete1 || complete2 || complete3)
		{
			int response;
			printf("\nNice job. Now you can choose to take another quiz or be done");
			printf("\nTo take another quiz, enter the number (1, 2, 3) quiz you want to take and to be done, enter '0' ");
			scanf("%d", &response);
			
			printf("\n\n%d\n\n", response);
			if (response == 0)
			{
				break;
			}
			
			else if (response == 1)
			{
				randNum = 1;
			}
			
			else if (response == 2)
			{
				randNum = 2;
			}
			
			else if (response == 3)
			{
				randNum = 3;
			}
		}
		
		allComplete = complete1 && complete2 && complete3;
	}
	
	// blah blah blah final score
	// average good job

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */


int quiz1() 
{
	int score = 0;
	char answer1[10];
	printf("\naX+b is a linear combination (true/false) ");
	scanf("%s", answer1); //true

	char answer2[10];
	printf("\nWhich is a prime number?\n(a) 39\n(b) 37\n(c) 81\n(d) 99 ");
	scanf("%s", answer2); //b
	
	char answer3[50];
	printf("\nThe ________ sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1 ");
	scanf("%s", answer3); //fibonacci
	
    if (strcmp(answer1, "true") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'b') {
        score = 5 + score;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "fibonacci") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 3 incorrect\n");
    }

	return score;

}

int quiz2()
{
	int score = 0;
	char answer1[10];
	printf("\nThe following code produces a compilation error: int m_idterm_project2023 = 3; (true/false) ");
	scanf("%s", answer1); //false

	char answer2[10];
	printf("\nWhich of the following are not string formats?\n(a) %s\n(b) %c\n(c) %If\n(d) %s ");
	scanf("%s", answer2); //c
	
	char answer3[50];
	printf("\nWithin C coding 0 respresents false and __ respresents true ");
	scanf("%s", answer3); //1
	
    if (strcmp(answer1, "false") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'c') {
        score = 5 + score;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "1") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 3 incorrect\n");
    }

	return score;
}

int quiz3()
{
	int score = 0;
	char answer1[10];
	printf("\nA for loop and a while loop are written the same way, but they have to use different variables (true/false)");
	scanf("%s", answer1); //false

	char answer2[10];
	printf("\nWhich number is divisible by 3? \n(a) 299\n(b) 341\n(c) 103\n(d) 1488");
	scanf("%s", answer2); //d
	
	char answer3[50];
	printf("\nDuring a _______ statement the code takes the value given by the user and assigns it to a variable");
	scanf("%s", answer3); //scanf
	
    if (strcmp(answer1, "false") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'd') {
        score = 5 + score;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "scanf") == 0) {
        score = 5 + score;
    } else {
        printf("You got question 3 incorrect\n");
    }

	return score;
}

void convertToLowercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
}
