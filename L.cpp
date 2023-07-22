// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string done ; 
// 	cin>> done ; 
// 	for (int i=0; i<done.size()-1; i++){
// 		if (done[i]>done[i+1]){
// 			cout<< "no"; 
// 			return 0; 
			
// 		}
// 	}
// 	cout<< "yes"; 
// }

//
//In the code you posted, done.size() is subtracted by one 
//in the for loop condition: for (int i=0; i<done.size()-1;
//i++).
//
//This is because the loop iterates over pairs of adjacent
//characters in the string done. 
//The loop condition i<done.size()-1 ensures that the 
//loop only iterates up to the second-to-last character 
//of the string, since the last character does not have a following character to compare it to.
//
//For example, suppose done is the string "abcde".
//The loop will iterate over the pairs of adjacent
//characters 'a' and 'b', 'b' and 'c', 'c' and 'd', and 'd' and 'e'. 
//If the loop condition were i<done.size(), then the loop would also try to 
//iterate over the pair of characters 'e' and the character immediately following it, which does not exist.
//
//By subtracting one from done.size(), the loop condition 
//ensures that we only iterate over pairs of adjacent 
// characters up to the second-to-last character, which is the last character that has a following character to compare it to.


// #include<iostream>
// using namespace std;
// int main() {
// 	string s; 
// 	cin>> s; 
// 	for(int i=0; i<s.size()-1; i++){
// 		if (s[i]>s[i+1]){
// 			cout<<"no" ; 
// 			return 0; 
// 		}
// 	}
// 	cout<< "yes" ; 
// 	return 0; 
// }






#include<iostream>
using namespace std;

bool is_ascending(string s) {
    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] > s[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if(is_ascending(s)) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
