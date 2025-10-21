#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**main - entry point
*Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10; // note obsidian : le %10 permet de demander le dernier chiffre de n (le reste)

	printf ("Last digit of %d is %d ",n, LastDigit); // note obsidian : le premier %d est pour n et le second %d pour lastdigit)
	if (LastDigit > 5)
		printf("and is greater than 5\n");
	else if (LastDigit == 0)
		printf("and is 0\n");
	else 
		printf("and is less than 6 and not 0\n");

	return (0);
}
