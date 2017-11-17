//Program to to find the sum of all the multiples of 3 or 5 below a number entered
/*John Morrow
November 16, 2017*/

#include <stdio.h>

int main()
{
	int i = 0; //Loop Variable
	int f = 0; //Factor of 3 variable
	int z = 0; //Loop Variable
	int t = 0; //Factor of 5 variable

	for (i = 0; i <= 333; i++) //Loop the multiplication of i by 3 if i is not a factor of 5
	{
		if (i % 5 == 0) {	//Avoids doubling up shared multiples of 3 and 5 in the list
		}
		else {
			f = i * 3;
			printf("%d\n", f); //List the resulting factors of 3 sequentially
		}
	}

	for (z = 0; z <= 199; z++) //Loop the multiplication of i by 5
	{
		t = z * 5;
		printf("%d\n", t);  //List the resulting factors of 5 sequentially
	}
	printf("\n");
	return 0;
}
