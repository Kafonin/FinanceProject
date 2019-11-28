// financeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "divisor.h"
#include "multiplier.h"




int main()
{
	const int monthsInYear = 12;
	const int percentDenominator = 100;
	
	double principal = 0.0;
	std::cout << "Enter the principal amount: " << std::endl;
	std::cin >> principal;


	double humanInterest = 0.0;
	std::cout << "Enter the interest rate: " << std::endl;
	std::cin >> humanInterest;
	double interest = divisor(humanInterest, percentDenominator);

	int yearsOfLoan = 0;
	std::cout << "Enter the years of loan: " << std::endl;
	std::cin >> yearsOfLoan;

	long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);
	double monthInterest = (interest / monthsInYear);

	double payment = 0.0;
	payment = principal * (monthInterest / ((double)1 - (pow(1 + monthInterest, (double)-monthsOfLoan))));
	std::cout << payment << std::endl;



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
