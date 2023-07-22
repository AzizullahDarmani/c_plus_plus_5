#include<bits/stdc++.h>
using namespace std;
int main() {
	// string a, b ;
	// cin>> a >> b; 
	// sort (a.begin(), a.end());
	// sort (b.begin(), b.end()); 
	// if (a == b )
	// cout<< "yes"; 
	// else 
	// cout << "No"; 


	string a,b; 
	cin>> a >> b ; 
	int size_1= a.size() ; 
	int size_2= b.size() ; 
	if (size_1==size_2){
		cout<< "yes" ; 
	}else {
		cout<< "no" ; 
	}
	return 0; 
}


//The sort function is called on the string objects
//a and b, and it sorts the characters of these strings in 
//ascending order. The begin() and end() functions are 
//used to indicate the range of characters that should be sorted
