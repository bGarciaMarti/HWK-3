//     
//						HomeWork3_3.c
//
//	By: Bren Garcìa Martì
//	Date: 10 Feb 2021
//	NOTE: 3.4 IS SWAPPED WITH 3.3 PROMPT AND VICE VERSA
//	Problem Statement: use a sentinel loop to prompt the user to enter a test score (0 to 100). Negative
//		numbers exit the program. Use multiple if() to print out a message with the class grade. Output
//		letter grade for each entered test score using the given class grading scale. Calculate the
//		average test score for the class and print to the monitor.
//		A = 90-100
//		B = 80-89
//		C = 70-79
//		F =< 69 
//
//				   /////// Algorithm ///////
// preprocessor header file
// main function
//
//variables
	//number of students in class
	//every students number grades combined
	// to store the class average
	// the grade being examined
//
// label to tell user what the program does
// label to tell user input and how to exit
//
// set grade = grade / 10
//
// while the grade isn't negative
	//store the input to grade variable
	//store every input into average
	// increment how many students' grades are being calculated
	// if the input is negative
		//label to calculate class average
			//if average higher than 100
				//then I severely misprogrammed this....
			// if the average is between 0-69
				// average is F
			// if the average is between 70-79
				// averge is C
			// if the average is between 80-89
				// average is B
			// if the average is between 90-100
				//the average is A
	// else the input was a valid grade
		//	(range(1-100)) / 10 = range 1-10
	//	so we can have cases of 10,9,8, & 7 constants
	//	to calculate the grade 
		//switch statement
			// if the input is 100, the case is 10
				//A
				// exit siwtch
			//if the input is between 90-99, the case is 9
				//A
				// exit siwtch
			// if the input is between 80-89, the case is 8
				//B
				// exit siwtch
			// if the input is between 70-79, the case is 7
				//C
				// exit siwtch
			// default the input is 69 or less AND not negative
				//F
			// end of the switch statement
		//end of the else
	// end of the while loop
// end main
//
////////////////////////////////////////////////
#include <stdio.h> // preprocessor header file
#pragma warning(disable: 4996) // compiler to negate scanf, which is insecure, error

int  main(void) // main function
{
	int students = 0;	//number of students in class
	int average = 0; //every students number grades combined
	int classAvg = 0; // to store the class average
	int grade = 0; // the variable being decided

	puts("A program to calculate the letter grade of a score and find the class average."); // label to tell user what the program does
	puts("Enter your test scores from 0-100. Enter a negative number to exit the program."); // label to tell user input and how to exit
	
	while (grade >= 0) // while the grade isn't negative
	{
		scanf("%d", &grade); //store the input to grade variable
		average = average + grade; //store every input into average
		students++; // increment how many students' grades are being calculated
		if (grade < 0) // if negative print results
		{
			puts("Calculating the Class average..."); //label to calculate class average
			classAvg = average / students; // calculate class average
			printf_s("The Class average is: %d\n", classAvg); // label to check what the average is
			puts(""); //formatting
			if (classAvg > 100) //if average higher than 100
			{
				puts("Error, the class average is higher than 100."); //then I severely misprogrammed this....
			}
			else if ((classAvg <= 69) && (classAvg >= 0)) // if the average is between 0-69
			{
				puts("the class average is F."); // average is F
			}
			else if ((classAvg >= 70) && (classAvg <= 79)) // if the average is between 70-79
			{
				puts("the class average is C."); // averge is C
			}
			else if ((classAvg >= 80) && (classAvg <= 89)) // if the average is between 80-89
			{
				puts("the class average is B."); // average is B
			}
			else if ((classAvg >= 90) && (classAvg <= 100)) // if the average is between 90-100
			{
				puts("the class average is A."); //the average is A
			}
			break; // negative input
		} // print the results
		else
		{
			grade = grade / 10;

			switch (grade) // switch statement
			{
			case (10): // if the input is 100
				printf_s("Grade is A.\n"); //A
				break; // exit siwtch

			case (9): //if the input is between 90-99
				printf_s("Grade is A.\n"); //A
				break;

			case (8): // if the input is between 80-89
				printf_s("Grade is B.\n"); //B
				break;

			case (7): // if the input is between 70-79
				printf_s("Grade is C.\n"); //C
				break;

			default: // if the input is 69 or less AND not negative
				printf_s("Grade is F.\n"); //F
				break;

			} // end of the switch statement
		} //end of the else
	} // end of the while loop
	return 0;
} // end main
