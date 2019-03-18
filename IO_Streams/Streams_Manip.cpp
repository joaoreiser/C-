#include <iostream>
#include <vector>
#include <string>

#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
#include <iomanip>

=> COMMON STREAM MANIPULATORS

- boolean
	boolalpha
	noboolalpha
- integer
	dec, hex, oct
	showbase, noshowbase, showpos, noshowpos
	uppercase, nouppercase
- float 
	fixed, scientific, setprecision, showpoint, noshowpoint
	showpos, noshowpos
- Field widht, justification and fill
	setw, left, right, internal, setfill
- Others
	endl, flush, skipws, noskipws, ws
*/

/*
=>	BOOLEAN
	default: 0 or 1
	with boolalpha: false or true
	
	std::cout << std::boolalpha;
	//every boolean output after this command with be false/true
	std::cout << std::noboolalpha;
	//returns to 0/1 format


*/

/*
=> 	INTEGER
	default: dec, noshowbase, nouppercase, noshowpos
	- manipulators affect all further integer outputs
*/

/*
=>	FLOAT
	default: setprecision(6), fixed, noshowpoint, nouppercase, noshowpos
	- manipulators affect all further integer outputs
*/

/*
=>	OTHERS
	SETW -> sets the final position of the next entrance
double num{1234.5678};
string hello{"Hello"};	

cout << std::setw(10) << num;
cout << hello;
	
12345678901234567890123456789012345678901234567890	
   1234.57Hello //the final digit of num (7) is in position 10
				//setw is only applied to num, hello is not affected

cout << std::setw(10) << num;
cout << std::setw(10) << hello;
cout << std::setw(10) << hello;
				
12345678901234567890123456789012345678901234567890
   1234.57     Hello     Hello //all values end in position 10		

	DEFAULT: RIGHT justified	
	std::right / std::left
	
cout << std::setw(10) << std::left; //left justify num
cout << num;
cout << hello;
	
12345678901234567890123456789012345678901234567890	
1234.57   Hello //num left justified. hello not changed


	DEFAULT: empty
	std::setfill() -> setfill has persistence. But it's only
					  applied with setw 

cout << std::setfill('-') << std::setw(10);
cout << num;
cout << hello;
	
12345678901234567890123456789012345678901234567890	
---1234.57Hello 

cout << std::setfill('*') << std::setw(10);
cout << num;
cout << std::setfill('-') << std::setw(10);
cout << hello;
cout << std::setw(15);
cout << hello;
	
12345678901234567890123456789012345678901234567890	
***1234.57-----Hello----------Hello 
	
	
*/
int main()
{
	cout << "\nnoboolalpha -> (10 == 10) = " << (10 == 10) << endl;
	cout << "noboolalpha -> (10 == 20) = " << (10 == 20) << endl;
	
	cout << std::boolalpha;
	
	cout << "\nboolalpha -> (10 == 10) = " << (10 == 10) << endl;
	cout << "boolalpha -> (10 == 20) = " << (10 == 20) << endl;
	
	cout << std::noboolalpha;
	
	cout << "\nnoboolalpha -> (10 == 10) = " << (10 == 10) << endl;
	cout << "noboolalpha -> (10 == 20) = " << (10 == 20) << endl;
	
	cout << "\n---------------------------------------\n" << endl;
	
	int num1{255};
	int num2{-255};
	
	cout << std::dec << num1 << endl;
	cout << std::hex << num1 << endl;
	cout << std::oct << num1 << endl;
	
	cout << std::showbase << std::uppercase << std::showpos << endl;
	
	cout << std::dec << num1 << endl;
	cout << std::hex << num1 << endl;
	cout << std::oct << num1 << endl << endl;;
	cout << std::dec << num2 << endl;
	cout << std::hex << num2 << endl;
	cout << std::oct << num2 << endl;
	
	cout << std::noshowbase<< std::nouppercase << std::noshowpos << endl;
	
	cout << "\n---------------------------------------\n" << endl;
	
	double num_f{1234.56789};
	double num_F{123456789.987654321};
	
	cout << num_f << endl; //total 6 digits and round
	cout << num_F << endl << endl; //total 6 digits and scientific notation
	
	cout << std::setprecision(9);
	cout << num_f << endl; //full number
	cout << num_F << endl << endl; //total 9 digits and round
	
	cout << std::setprecision(6) << std::fixed;
	cout << num_f << endl; //fix 6 digits from decimal point
	cout << num_F << endl << endl; //fix 6 digits from decimal point
	
	cout << std::setprecision(3) << std::fixed;
	cout << num_F << endl << endl; //fix 3 digits from decimal point and round
	
	cout << std::setprecision(3) << std::scientific << std::uppercase << std::showpos;
	cout << num_F << endl << endl; //fix 3 digits, scientific notation, uppercase, and show signal
	
	
	//RESET THE FLAGS TO DEFAULT
	cout.unsetf(std::ios::scientific | std::ios::fixed);
	//OR
	cout << std::resetiosflag(std::ios::showpos);
	
	
	return 0;
}
