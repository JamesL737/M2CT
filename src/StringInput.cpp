/*
 * Author: James L.
 *
 * program to take two string inputs from user and concatenate two strings
 * and then print the result, 3 times for varying string lengths
 */
#include <iostream>
#include <string>

using namespace std;

int main(){

	//local vars
	string s1;
	string s2;
	string concatedStrings;
	int i = 1;

	//run for three iterations
	while(i <= 3){

		//get first string
		cout << "Enter first string: ";
		cin >> s1;

		//get second string
		cout << "Enter second string: ";
		cin >> s2;

		//concatenate first and second string
		concatedStrings = s1 + s2;

		//print concatenation of first and second string
		cout << "First and second string concatenated: " << concatedStrings << endl;

		//increment loop counter
		++i;
	}

	return 0;
}
