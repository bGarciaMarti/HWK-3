//     
//						HomeWork3_6.c
//
//	By: Bren Garcìa Martì
//	Date: 10 Feb 2021
//
//	Problem Statement: print the given pattern of asterisks separately,
//		one below the other. Use for loops to generate the pattern,
//		all  * should be printed by a single printf statement
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
	// START pattern loop for (A)
	// pyramid that starts small and gets bigger as it goes down
//
		// for loop that counts up from 1 - 10
			// print a number of astrisks equal to the count
		// repeat the above loop 10 times, counting down each round
//
	// START pattern loop for rows  (C)
	// repate pattern (A) with spaces, then add another for loop that prints the *
	// repeat the inner loop 10 times, counting up (get bigger) each round
		// for loop that counts up from 1 - 10 for spaces
			// print a number of astrisks equal to the count
		// end of for loop for printing spaces
		// for 10 - number of " " 
			// print *
		// end for loop of printing astrisks
	// new line
//
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	// variables for reach pyramid pattern to be printed

	int a = 0;
	int A = 0;

	int d = 0;
	int D = 0;

// pyramid that gets bigger as it goes down to the right (A)
	// int a = 0; inner loop
	// int A = 0; outter loop
		for (A = 0; A < 10; A++)
		{
			for (a = 0; a <= A; a++) // for loop that counts up from 1 - 10
			{
				printf("*"); // print a number of astrisks equal to the count
			} // end for loop of printing astrisks	
			printf("\n"); // new line

		} // for (A = 0; A < 10; A++)
		// repeat the inner loop 10 times, counting up (get bigger) each round
	
// pyramid that gets smaller as it goes down to the right (C)
// replace the * in pyramid (A) with " "
	// int d = 0; inner loop
	// int D = 0; outer loop
		for (D = 0; D < 10; D++)  // repeat the inner loop 10 times, counting up (get bigger) each round
		{
			for (d = 0; d <= D; d++) // for loop that counts up from 1 - 10
			{
				printf(" "); // print a number of astrisks equal to the count
				
			} // end of for loop for printing spaces
			for (d = D; d < 10; d++) // for 10 - number of " " 
			{
				printf("*");
			} // end for loop of printing astrisks
			printf("\n"); // new line

		} // for (A = 0; A < 10; A++)
		// repeat the inner loop 10 times, counting up (get bigger) each round

		return 0;
} // end main