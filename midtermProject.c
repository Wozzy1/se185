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

int quiz1();
int quiz2();
int quiz3();

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/

//global vars
int finalScore = 0;
int questionsAnswered = 0;

int main()
{
	//SOME LOOP HERE TO KEEP THE PROGRAM GOING UNTIL PERFECT SCORE
	printf("\nThis is Midterm Exam 1\nThere are three quizzes to take a complete: Quiz 1, Quiz 2, Quiz 3");
	long int num;
	printf("\nEnter a random number (1-9) ");
	scanf("%ld", &num);
	srand(num);
	
	bool allComplete = false;
	bool complete1 = false;
	bool complete2 = false;
	bool complete3 = false;
	bool currentlyComplete = false;
	int randNum = rand() % 3 + 1;
	
	printf("%d", randNum);
	exit(0);
	printf("\nYou were randomly selected to start with Exam %d", randNum);
	printf("\n\n\n\n\n\n");
	
	while (!allComplete)
	{
		int tempScore = 0;
		if (randNum == 1)
		{
			tempScore = quiz1();
			
			if (tempScore == 15)
			{
				complete1 = true;
				currentlyComplete = true;
			}
		}
		
		else if (randNum == 2)
		{
			tempScore = quiz2();
			
			if (tempScore == 15)
			{
				complete2 = true;
				currentlyComplete = true;
			}
		}
		
		else if (randNum == 3)
		{
			tempScore = quiz3();
			
			if (tempScore == 15)
			{
				complete3 = true;
				currentlyComplete = true;
			}
		}
		
		allComplete = complete1 && complete2 && complete3;
		
		if (!allComplete && ((complete1 || complete2 || complete3) && currentlyComplete))
		{
			int response;
			printf("\nNice job. Now you can choose to take another quiz or be done.\n");
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
			
			currentlyComplete = false;

		}
		
	}
	
	printf("\n\n\nGood job on finishing on those quizzes. I'm sure they were difficult!");
	printf("\nYour final average across all questions answered was %.2lf%", (double)finalScore / (questionsAnswered * 5));
	
	// blah blah blah final score
	// average good job

    return 0;
}

/* Put your functions here, and be sure to put prototypes above. */


int quiz1() 
{
	int tempScore = 0;
	char answer1[10];
	printf("\naX+b is a linear combination (true/false) ");
	scanf("%s", answer1); //true

	char answer2[10];
	printf("\nWhich is a prime number?\n(a) 39\n(b) 37\n(c) 81\n(d) 99 \n");
	scanf("%s", answer2); //b
	
	char answer3[50];
	printf("\nThe ________ sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1 ");
	scanf("%s", answer3); //fibonacci
	
    if (strcmp(answer1, "true") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'b') {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "fibonacci") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 3 incorrect\n");
    }
	
	questionsAnswered += 3;
	finalScore += tempScore;
	return tempScore;

}

int quiz2()
{
	int tempScore = 0;
	char answer1[10];
	printf("\nThe following code produces a compilation error: int m_idterm_project2023 = 3; (true/false) ");
	scanf("%s", answer1); //false

	char answer2[10];
	printf("\nWhich of the following is not a statement within C code?\n(a) scanf\n(b) printf\n(c) readf\n(d) strcmp \n");
	scanf("%s", answer2); //c
	
	char answer3[50];
	printf("\nWithin C coding 0 respresents false and __ respresents true ");
	scanf("%s", answer3); //1
	
    if (strcmp(answer1, "false") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'c') {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "1") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 3 incorrect\n");
    }

	questionsAnswered += 3;
	finalScore += tempScore;
	return tempScore;
}

int quiz3()
{
	int tempScore = 0;
	char answer1[10];
	printf("\nA for loop and a while loop are written the same way, but they have to use different variables (true/false) ");
	scanf("%s", answer1); //false

	char answer2[10];
	printf("\nWhich number is divisible by 3? \n(a) 299\n(b) 341\n(c) 103\n(d) 1488\n");
	scanf("%s", answer2); //d
	
	char answer3[50];
	printf("\nDuring a _______ statement the code takes the value given by the user and assigns it to a variable ");
	scanf("%s", answer3); //scanf
	
    if (strcmp(answer1, "false") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 1 incorrect\n");
    }

    if (answer2[0] == 'd') {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 2 incorrect\n");
    }

    if (strcmp(answer3, "scanf") == 0) {
        tempScore = 5 + tempScore;
    } else {
        printf("You got question 3 incorrect\n");
    }

	questionsAnswered += 3;
	finalScore += tempScore;
	return tempScore;
}