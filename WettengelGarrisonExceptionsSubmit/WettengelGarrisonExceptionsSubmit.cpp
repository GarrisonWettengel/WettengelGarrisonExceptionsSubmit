// WettengelGarrisonExceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIS 1202
// December 7, 2020

#include <iostream>
#include <exception>
using namespace std;
char character(char start, int offset)
{
	int conversion = (int)start;
	cout << conversion << endl;
	int reconvert = conversion + offset;


	if (conversion <= 90)
	{
		if (conversion < 65)
		{

			throw invalid_argument("Invalid Start Character");
		}
	}


	if (conversion >= 97)
	{
		if (conversion > 122)
		{

			throw invalid_argument("Invalid Start Character");
		}
	}



	if (reconvert <= 90)
	{
		if (reconvert < 65)
		{

			throw out_of_range("Conversion Error");
		}
	}


	if (reconvert <= 122 && reconvert >= 97)
	{
		if (reconvert < 97)
		{

			throw out_of_range("Conversion Error");
		}
	}

	cout << "test" << endl;

	if ((conversion <= 90 && reconvert >= 97) || (conversion >= 97 && reconvert <= 90))
	{
		throw invalid_argument("Cannot convert between cases");
	}


	return reconvert;
}

int main()
{

	char start;
	int offset;

	start = 'H';
	offset = -20;




	cout << character(start, offset) << endl;

}
