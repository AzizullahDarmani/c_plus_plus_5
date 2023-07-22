#include<iostream>
#include<string>
using namespace std; 
int main() {
//	string text; 
//	cin>> text; 
//	for(int i=0; i<text.size(); i++){
//		if (text[i]>='a' and text[i]<='z')
//		text[i]-=32; 
//		cout<< text[i]; 
//	}

////OR
	// string text; 
	// cin>> text; 
	// for(int i=0; i<text.size(); i++){
	// 	if (text[i]>=97 and text[i]<=122)
	// 	text[i]= text[i]-32; 
	// 	cout<< text[i] ; 
	// }




	string s; 
	string a ;
	cin>> s ;
	for(int i=0; i<s.size(); i++){
		if (s[i]>='a' and s[i]<='z')
		s[i]-=32 ; 
		cout<< s[i] ; 
	}
	




}


//In the given code, the number 32 is subtracted from 
//the ASCII value of the lowercase letters to convert them into uppercase letters.
//In ASCII code, the lowercase letters have higher numerical
//values than their corresponding uppercase letters.
//For example, the ASCII value of 'a' is 97, while the ASCII value of 'A' is 65.
//Therefore, to convert 'a' to 'A', we need to subtract 
//a certain value from the ASCII value of 'a' to get the corresponding ASCII value of 'A'.
//The ASCII value of 'a' is 97, and the ASCII value of 'A'
//is 65. So, by subtracting 32 from the ASCII value of any lowercase letter, 
//we can get the corresponding uppercase letter. For example, 'a' - 32 = 'A', 'b' - 32 = 'B', and so on.
//Therefore, in the given code, the number 32 is used to
// convert lowercase letters to uppercase letters.
