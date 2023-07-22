#include<bits/stdc++.h>
using namespace std;
int main() {
	// string s;
	// cin>> s; 
	// int arr[10]; 
	
	// for(int i=0; i<10; i++){
	// 	arr[i] =0; 
	// }
	// for(int i=0; i<s.size(); i++){
	// 	arr[s[i]-48]+=1; 
	// }
	// for(int i=0; i<10; i++){
	// 	for(int j=i; j<10; j++){
	// 		if (arr[i]!=0 and arr[j] != 0 and arr[i] != arr[j]){
	// 			cout<< "no";
	// 			 return 0; 
	// 		}
	// 	}
	// }
	// cout << "yes"; 



	// The statement arr[i] = 0; initializes all elements of the arr array to 0.
	//  This is necessary because the array is used to count the frequency of digits 
	//  in the input number, and it is possible that some digits may not appear in the input.
	//   Initializing the array to 0 ensures that all elements have a valid value 
	//   before counting the frequency of digits. If the array is not initialized, 
	//   it may contain garbage values that can interfere with the frequency count.



	// This code reads a number from the user and stores it in the variable number. 
	// It then initializes an array arr of size 10 with all elements set to 0. 
	// The for loop iterates through each digit in the number and increments the 
	// corresponding element in the arr array. The last for loop iterates through 
	// all pairs of elements in the arr array and checks if any two non-zero elements 
	// have different values. If such a pair is found, it prints "no" and exits the program. 
	// Otherwise, it prints "yes". The arr[number[i]-48]+=1 statement increments the count 
	// of the digit represented by the character number[i] in the arr array. 
	// The expression number[i]-48 converts the ASCII code of the digit character to its corresponding integer value.




	// string number ;
	// cin>> number ;
	// int arr[10] ; 
	// for(int i=0; i<10; i++){
	// 	arr[i] = 0; 
	// }
	// for(int i=0; i<number.size(); i++){
	// 	arr[number[i]-48]+=1; 
	// }
	// for(int i=0; i<10; i++){
	// 	for(int j=i; j<10; j++){
	// 		if (arr[i]!=0 and arr[j]!=0 and arr[i]!= arr[j]){
	// 			cout<< "no" ; 
	// 			return 0; 
	// 		}
	// 	}
	// }
	// cout<< "yes" ; 



	string done ;
	cin>> done ;
	int arr[10] ; 
	for(int i=0; i<10; i++){
		arr[i] = 0 ; 
	}
	for(int i=0; i<done.size(); i++){
		arr[done[i]-48]+=1; 
	}
	for(int i=0; i<10; i++){
		for(int j=i; j<10; j++){
			if (arr[i]!=0 and arr[j]!=0 and arr[i]!=arr[j]){
				cout<< "No" ; 
				return 0 ; 
			}
		}
	}

	cout<< "yes" ; 

}






