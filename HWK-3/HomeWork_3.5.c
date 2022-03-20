//     
//						HomeWork3_5.c
//
//	By: Bren Garcìa Martì
//	Date: 10 Feb 2021
//
//	Problem Statement: Write a program that sums a sequence of integers. Assume
//		that the first integer read with scanf specifies the number of values remaining
//		to be entered. Your program should read only one value each time scanf is executed.
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//		variables
//		label puts, A program to find the sum of input numbers.
//		prompt for input
//
//		scanf for input
//		store input in two variables
//			1 to use in sum calculations
//			1 to decrement the first input
//
//		for loop to decrement the first input by
//			message to how many inputs remain
//			scanf for input to calculate sum with
//			add entered value to sum
//
//		 print the sum to monitor	
// end main function
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{	
	//variables
	int number = 0; // number of values remaining to be entered
	int values = 0; // to hold the variables input
	int sum = 0; // int to store sum
	int i = number; // variable to decrement the first input by

	// label and prompt puts
	puts("A program to find the sum of input numbers.");
	puts("Enter an integer.");

	scanf("%d", &number); // store input in numbers variable

	// int i = number;
	for (i >= 0; i--;) // for loop, number of first input times
	{
		printf_s("You have %d remaining input values", i); // how many inputs remain
		scanf("%d", &values); //scan for more values to calculate sum with
		sum = sum + values; // add the entered value to the sum
	}
	

	printf_s("Sum of the entered sequence is %d\n", sum); // print the sum to monitor
	return 0;
} // end main