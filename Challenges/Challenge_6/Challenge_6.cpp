#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	string alphabet{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,?!"};
	string input_word{};
	string output_word{};
	string outoutput_word{};
	
	int alphabet_length = alphabet.length();
	
	cout << "Insert the message to be encrypted: ";
	getline(cin, input_word);	
	
	for(char letter : input_word){
		int index = alphabet.find(letter);
		
		index += 5;
		
		if(index > (alphabet_length - 1)){
			int multfact = index / (alphabet_length - 1);
			index -= alphabet_length * multfact;
		}
		
		output_word += alphabet.at(index);
	}
	
	for(char letter : output_word){
		int index = alphabet.find(letter);
		
		index -= 5;
		
		if(index < 0){
			index = alphabet_length + index;
		}
		
		outoutput_word += alphabet.at(index);
	}
	
	cout << input_word << endl;
	cout << output_word << endl;
	cout << outoutput_word << endl;
	
	return 0;
}