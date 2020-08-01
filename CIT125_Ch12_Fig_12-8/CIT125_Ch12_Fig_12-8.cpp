// CIT125 Intro to C++ Luigi Robles
// 07-31-2020 Summer Term
// Ch.12 Page 436 Figure 12-8
// Jenko bookseller, displays the total sales

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare and initialize array
	double sales[3][2] = { {3567.85, 2589.99},
							{3239.67, 2785.55},
							{1530.50, 1445.80} };

	//declare and initialize variables
	double total = 0.0; //accumulator

	//accumulate sales
	for (int store = 0; store < 3; store += 1)
		for (int book = 0; book < 2; book += 1)
			total += sales[store][book]; //processing part of IPO
		//end for
	//end for

	cout << fixed << setprecision(2);
	cout << "Total sales: $" << total << endl; //output part of IPO
	return 0;
}	//end of main function