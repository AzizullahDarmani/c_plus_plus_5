// #include<bits/stdc++.h>
// using namespace std;
// int main() {
	// string a; 
	// cin>>a; 
	// string sub = a; 
	
	// reverse(a.begin(),a.end()); 
	// if (a==sub or sub.substr(1) == a.substr(0,a.size()-1)){
	// 	cout<< "yes"; 
	// 	return 0; 
		
	// }
	// cout<< "no"; 



	////method for reversing a string
//	string done; 
//	cin>> done ;
//	reverse(done.begin(), done.end()); 
//	cout<< done; 
// }




// #include <iostream>
// #include <string>

// using namespace std;

// bool is_palindrome(string s) {
//     int size = s.size();
//     for (int i = 0; i < size / 2; i++) {
//         if (s[i] != s[size - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     string s;
//     cin >> s;

//     // Check if s is already a palindrome
//     if (is_palindrome(s)) {
//         cout << "yes";
//         return 0;
//     }

//     // Check if adding a letter to the beginning or end of s would make it a palindrome
//     for (char c = 'a'; c <= 'z'; c++) { // assuming lowercase letters only
//         string s1 = c + s;
//         string s2 = s + c;
//         if (is_palindrome(s1) || is_palindrome(s2)) {
//             cout << "yes";
//             return 0;
//         }
//     }

//     // If none of the above conditions are met, it's not possible to add one letter to s to make it a palindrome
//     cout << "no";
//     return 0;
// }





// #include<iostream> 
// using namespace std;
// bool is_palindrome(string s){
// 	int size = s.size() ; 
// 	for(int i=0; i<size/2; i++){
// 		if (s[i]!=s[size-i-1]){
// 			return false; 
// 		}
// 	}
// 	return true; 
// }
// int main() {
// 	string s; 
// 	cin>> s; 
// 	if (is_palindrome(s)){
// 		cout<< "yes" ; 
// 		return 0 ; 
// 	}
// 	for(char c= 'a'; c<='z'; c++){
// 		string s1 = c+s;
// 		string s2 = s+c ; 
// 		if (is_palindrome(s1) || is_palindrome(s2)){
// 			cout<< "yes" ; 
// 			return 0; 
// 		}
// 	}
// 	cout<< "no" ; 
// 	return 0; 
// }




#include<iostream>
using namespace std; 
bool is_palindrome(string s){
	int size = s.size() ; 
	for(int i=0; i<size/2; i++){
		if (s[i]!= s[size-i-1]){
			return false; 
		}
	}
	return true ; 
}
int main() {
	string s ;
	cin>> s; 
	if (is_palindrome(s)){
		cout<< "yes" ; 
		return 0; 
	}
	for(char c='a'; c<='z'; c++){
		string s1= c+s; 
		string s2= s+c;  
		if (is_palindrome(s1) || is_palindrome(s2)){
			cout<< "the string is palindrome" ; 
			return 0; 
		}
	}
	cout<< "the string is not palindrome" ; 
	return 0; 
}