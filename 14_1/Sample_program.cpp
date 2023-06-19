#include<iostream>
#include<iomanip>
#include<string>
#include"Numbers.h"
using namespace std;

int main()
{	
	//Declare Variables
	int user_num;

	//Give user instructions
	cout << "Hello, I will help you convert any number from 0 to 9999 to a word." << endl;
	cout << "To get started, please input a number:";
	cin >> user_num;

	//Input validation
	while(user_num < 0 || user_num > 9999)
	{
		cout << "!ERROR! You can only input a positive value between 0 and 9999" << endl;
		cout <<"Please input a valid value:";
		cin >> user_num;
	}

	//Create object using parametized constructor upon creation
	Numbers num(user_num);

	//Call print function to display word
	cout << "Here is the number you input as a word: ";
	num.print();
	cout << "\n\n\n\n\n";

	return 0;
}
