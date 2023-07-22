#include<bits/stdc++.h>
using namespace std; 
int main() {
//	string text, letter ; 
//	int a;
//	cin>> text >> letter >> a ; 
//	for(int i=0; i<text.size(); i++){
//		if (letter[0]==text[i]  )
//		a--; 
//	}
//	cout<< (a? "no": "yes"); 


	////we can use the if conditon for to ouput the result
//	 string done, a ;
//	 int b; 
//	 cin>> done >> a >> b ; 
//	 for(int i=0; i<done.size(); i++){
//	 	if (a[0]==done[i])
//	 	b--; 
//	 }
//	 if (b==0){
//	 	cout<< "yes"; 
//	 }else {
//	 	cout << "no"; 
//	 }


/////we can use the char data type also
	// string done ; 
	// char a; 
	// int b ;
	// cin>> done >> a >> b ; 
	// for(int i=0; i<done.size(); i++){
	// 	if (a==done[i])
	// 	b--; 
	// }
	// if (b==0){
	// 	cout<< "yes"; 
	// }else {
	// 	cout<< "no"; 
	// }






	//// BEST METHOD
	string s; 
	cin>> s ;
	char a; 
	cin>> a; 
	int m ; 
	cin>>  m ; 
	int cnt = 0; 
	for(int i=0; i<s.size(); i++){
		if (s[i]==a)
		cnt++; 
	}
	if (cnt==m){
		cout<< "yes" ; 
	}else {
		cout<< "no" ; 
	}
	return 0; 



}

//Therefore, the purpose of the a-- statement is to decrement
//the value of a whenever a match is found between the given letter 
//and a character in the input string. This way, at the end of the loop, 
//the value of a will indicate how many occurrences of the given letter 
//are still needed to satisfy the condition
