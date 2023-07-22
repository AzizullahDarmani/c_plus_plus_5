#include<iostream>
using namespace std; 
int main() {
	// string text; 
	// int odd=0, even=0; 
	// cin>> text; 
	// for(int i=0; i<text.size(); i++){
	// 	if (i%2==0) 
	// 	even += text[i] -48; 
	// 	else
	// 	odd+= text[i] - 48; 
	// }
	// if (even == odd)
	// cout << "yes"; 
	// else 
	// cout << "no"; 



	string number ; 
	cin>> number; 
	int odd = 0, even = 0; 
	for(int i=0; i<number.size(); i++){
		number[i]-=48; 
		if (i%2==0){
			even+= number[i] ; 
		}else {
			odd+= number[i] ; 
		}
	}
	if (even== odd){
		cout<< "yes the sum of even and odd numbers are equal" ; 
	}else {
		cout<< " no the sum of even and ode numbers are not equal" ; 
	}
	return 0; 




}

//In the given C++ code, the expression text[i] - 48 is used to convert 
//a character from the input string into its corresponding integer value.
// The reason why 48 is subtracted is because in the ASCII table,
//  the character '0' has a decimal value of 48.
//For example, if the character '5' is read from the input string,
// its ASCII value is 53. By subtracting 48 from this value, we get the integer value 5.
//So, the expression text[i] - 48 effectively converts the
// character at position i in the string text into its corresponding integer value
