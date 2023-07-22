// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string done; 
// 	cin>> done ;
// 	char min = 'a'; 
// 	for(int i=0; i<done.size(); i++){
// 		if (min<done[i]){
// 		min = done[i]; 
// 		}
// 	}
// 		cout<< min << endl; 

// }


//In the given code, the character variable min is initialized to the character 'a',
//which is assumed to be the smallest possible character.
//The loop iterates over the characters of the input string done, 
//and for each character, it compares it with the current value of min.
//If the current character is greater than min, then the min variable is
//updated to hold the value of the current character. This way, 
//at the end of the loop, the min variable will contain the 
//lexicographically largest character in the input string.
//Therefore, the condition if (min<done[i]) checks if the 
//current character in the input string is larger than the 
//current value of min, and if so, updates min to hold that larger character.


// #include<iostream> 
// using namespace std;

// int main() {
//     string s; 
//     cin >> s; 
//     char max_char = 'a' - 1; // initialize to smallest possible value
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i] > max_char) { // check if current char is further in alphabet
//             max_char = s[i]; // update max_char if needed
//         }
//     }
//     cout << "The character with the furthest position in the alphabet is: " << max_char << endl; 
//     return 0;
// }


#include<iostream>
using namespace std;
int main() {
	string s ;
	cin>> s; 
	char min = 'a' ; 
	for(int i=0; i<s.size(); i++){
		if (s[i]>min)
		min = s[i] ; 
	}
	cout<< "the furthest postion in the alphabet order is: "<< min << endl; 
}
