#include<iostream>
#include<string>
using namespace std;
int main() {
//	string text; 
//	cin>> text; 
//	int a=0; 
//	int A=0; 
//	for(int i=0; i<text.size(); i++ ){
//		if (text[i]>='a' and text[i]<='z') a++; 
//		if (text[i]>='A' and text[i]<='Z') A++; 
//	}
//	cout << a << " " << A<< endl; 


//	string time; 
//	cin>> time; 
//	int a=0, A=0; 
//	for(int i=0; i<time.size(); i++) {
//		if (time[i]>='a' and time[i]<='z') a++; 
//		if (time [i]>='A'and time[i]<='Z') A++; 
//	}
//	cout<< a << " " << A <<endl; 



	///or
	// string done ; 
	// cin>> done ; 
	// int m =0; 
	// int n =0; 
	// for(int i=0; i<done.size(); i++){
	// 	if (done[i]>='A' and done[i]<='Z')
	// 	m++; 
	// 	else if (done[i]>='a' and done[i]<='z')
	// 	n++; 
		
	// }
	// cout<< m << endl; 
	// cout<< n << endl;


	int lower=0, upper=0 ; 
	string s ;
	cin>> s; 
	for(int i=0; i<s.size(); i++){
		if (s[i]>='A' and s[i]<='Z'){
			upper++; 
		}else {
			lower++; 
		}
	}
	cout<< "the number of upper case in text is: "<< upper << endl ;
	cout<< "the number of lower case in text is: "<< lower << endl ; 


}
