#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int limit);
char guessLoop(int target, int chance);

int main(void)
{
	int target, limit, chance, play;
	char result;

	printf("* A random number will be generated.\n"
		   "* This number is greater than or equal to 0 and lower than a limit specified by you.\n"
		   "* You have several chances to guess the number.\n"
		   "* You win if the number you entered is the random number.\n"
		   "* You lose if you are out of chances.\n\n");
	
	while (1)
	{
		printf("Play? (0 to quit, 1 to play): ");
		scanf("%d", &play);
		if (play == 0) {break;}

		printf("Enter a positive integer as the upper limit: ");
		scanf("%d", &limit);
		printf("Enter a positive integer as the number of chances you have: ");
		scanf("%d", &chance);
		target = getRandomNumber(limit);
		printf("A random number within the range is generated.\n\n");
		
		result = guessLoop(target, chance);
		if (result == 'W') {printf("You win! The random number is exactly %d.\n\n", target);}
		else if (result == 'L') {printf("You lose! The random number is %d.\n\n", target);}
		else if (result == 'Q') {break;}
	}
	printf("You quit the game.");
	return 0;
}


int getRandomNumber(int limit)
{
	srand((unsigned int)time(NULL));
	return rand() % limit;
}


char guessLoop(int target, int chance)
{
	int guess;
	while (chance-- > 0)
	{
		printf("%d chances remain (-1 to quit): ", chance);
		scanf("%d", &guess);
		if (guess < 0) {return 'Q';}
		else if (guess == target) {return 'W';}
		else if (guess > target) {printf("Too big.\n");}
		else if (guess < target) {printf("Too small.\n");}
	}
	return 'L';
}
