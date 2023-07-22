#include<iostream>
#include<cmath>
using namespace std;
int main() {
	// string s, vowel = "aeiou"; 
	// cin>>s; 
	// int m=0;
	// for (int i=0; i<s.size(); i++){
	// 	for(int j=0; j<vowel.size(); j++){
	// 	if (s[i]==vowel[j])
	// 		m++; 
	// 	}
	// }
	// cout<< m ;
	// return 0; 


	string vowel= "aeiou" ; 
	int m =0; 
	string s; 
	cin>> s; 
	for(int j=0; j<vowel.size(); j++){
		for(int i=0; i<s.size(); i++){
			if(vowel[j]==s[i])
		m++; 

	}
	
	}
	cout<< "the number of vowel letters in this string is: "<< m << endl; 


}
