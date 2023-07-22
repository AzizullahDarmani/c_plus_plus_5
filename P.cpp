#include<bits/stdc++.h>
using namespace std;
int main(){
//	////first method, which is really time taking; 
//	//// so i need to follow like this till the end; 
//	string done; 
//	cin >> done; 
//	char change = 'a';
//	for(int i=0; i<done.size(); i++) {
//		if (done[i]==change){
//			done[i]='b'; 
//		}
//		else if (done[i]=='b'){
//			done[i]='c';
//		}
//		else if(done[i]=='c'){
//			done[i]='d';
//		}else if (done[i]=='d'){
//			done[i]= 'e'; 
//		}else if(done[i])
//	
//		
//	}
//	cout<< done; 


	////here is a shorter method for solving such a task
	// string done; 
	// cin>> done; 
	// for(int i=0; i<done.size(); i++){
	// 	if (done[i]==122)
	// 	done[i]-=25; 
	// 	else 
	// 	done[i]+=1; 
	// 	cout<< done[i]; 
	// }



	string done ;
	cin>> done ; 
	for(int i=0; i<done.size(); i++){
		if (done[i]==122)
		done[i]-=25; 
		else 
		done[i]+=1; 
		cout<< done[i] ; 
	}


}
//In the given code, the statement s[i] += 1 is used to shift
//the ASCII value of each character in the string s by 1.
//
//ASCII is a numerical representation of characters used by computers,
//where each character is assigned a unique number.
// For example, the ASCII value of 'a' is 97, 'b' is 98, and so on.
//
//When the code encounters the statement s[i] += 1, it adds 1 to the ASCII 
//value of the character at position i in the string s.
// This effectively shifts the character to the next character in the
//ASCII table. For example, if the character at position i is 'a', its
//ASCII value is 97. Adding 1 to 97 results in 98, which is the ASCII value for 'b'.
//
//Thus, the code is essentially converting each character in the string
//to the next character in the alphabet (or to the next character 
//in the ASCII table if it is not an alphabetic character)








