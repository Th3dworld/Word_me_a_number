//This is the implementation file for the numbers class
#include"Numbers.h"
#include<iostream>
#include<string>
using namespace std;

/**************************************************************************************************************************************
* The method used to determine the the values of numbers and converting them to words is simple arithmetics
* The number is first stored in a temperal variable "temp" then  goes through a series of "Tests" to determine its value
* The test will be highlighted with airquotes and a number e.g "1"
* The first test("1") is the test for a thousands, the temperal value is divided by 1000 and if it returns a value of >= 1
***then the first digit has a thousandth place value, the same operation is passed into the index of string array 'numbers_lessthan_20' 
***and returns the word equivalent of that number and adds it to the string numname, after that the postfix thousand is added
***the other values are then determined and coverted to words with their postfix and prefixes set.
* Tests "2", "3", and "4" follow the same procedure only that they check hundreds, tens, and ones place values respectively yes
**************************************************************************************************************************************/
void Numbers::print()
 {
	//Declare varibles
	string numname;//Holds word equivalent
	int temp = number;
 int yolo = 0;

	
	if((temp/1000) >= 1)//"1" checking for thousands place value
	{

		numname += numbers_lessthan_20[temp / 1000];//Converting number to word and adding it to string that will be displayed
		numname += " ";//Add whitespace
		numname += number_prfx[11];//Add postfix thousand
		numname += " ";
		temp %= 1000;

			
			if(numbers_lessthan_20[temp / 100] == "Zero")//Check if intermidiate value in 100s postion is 0 in order to skip and not display zero as word
				numname += "and ";
			else
			{
				numname += numbers_lessthan_20[temp / 100];//Converting number to word and adding it to string that will be displayed
				numname += " ";//Add whitespace
				numname += number_prfx[10];//Add postfix hundred
				numname += " and ";
				temp %= 100;
			}
		

			if (number_prfx[(temp / 10)] == "Zero")//Check if intermidiate value in 10s position is 0 in order to skip and not display zero as word
				numname = numname;
			else
			{
				numname += number_prfx[(temp / 10)];
				numname += " ";
			}
			temp %= 10;
		

		numname += numbers_lessthan_20[temp];//Converting last number to word and adding it to word that will be displayed
	}

	else if(((temp / 1000) == 0) && ((temp / 100) >= 1))//"2" check for hundreds place value
	{

		numname += numbers_lessthan_20[temp / 100];//Converting number to word and adding it to string that will be displayed
		numname += " ";//Add whitespace
		numname += number_prfx[10];//Add postfix hundred
		numname += " and ";
		temp %= 100;

	
		if (number_prfx[(temp / 10)] == "Zero")//Check if intermidiate value in 10s postion is 0 in order to skip and not display zero as word
			numname = numname;
		else
		{
			numname += number_prfx[(temp / 10)];//Converting number to word and adding it to string that will be displayed
			numname += " ";//Add whitespac
		}
		
		temp %= 10;

		numname += numbers_lessthan_20[temp];//Converting last number to word and adding it to word that will be displayed
	}

	else if (((temp / 100) == 0) && ((temp / 10) >= 1))//"3" check for tens place value
	{
		numname += number_prfx[(temp / 10)];//Converting number to word and adding it to string that will be displayed
		numname += " ";//Add whitespace
		temp %= 10;



		if (numbers_lessthan_20[temp] == "Zero")//Check if final is 0 in order to skip and not display zero as word else add it to numname
			numname = numname;
		else
			numname += numbers_lessthan_20[temp];
	}

	else if (((temp / 10) == 0) && ((temp / 1) >= 0))//"4" check for single digit
	{
		numname += numbers_lessthan_20[temp];//Converting number to word and adding it to string that will be displayed
	}

	cout << numname;//Display number as word.
 }