//Specification file for numbers class.
#ifndef NUMBERS_H
#define NUMBERS_H
#include<string>
#include<cmath>
using namespace std;

//This class will help its user converst any number between 0 and 9999 to a word format
class Numbers
{
	//Declare private attributes
	private:
		int number;
		//Array holding word equivalents of numbers less than 20
		 string numbers_lessthan_20[20] = { "Zero","One", "Two", "Three", "Four", "Five", "Six",
											"Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
											"Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
											"Eighteen", "Nineteen" 
											};
		 //Array containing number prefixes
		 string number_prfx[12] = {"Zero","Ten","Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred", "Thousand"};
	
	//Declare public member functions
	public:
		//Parametized constructor that takes an interger as an argument 
		Numbers(int n)
		{
			number = n;
		}

		//fuction prototype for print function
		void print();
	
};

#endif