// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string a,b; 
// 	cin>> a >> b; 
// 	for(int i=0; i<a.size(); i++){
// 		int m=0; 
// 		if (a[0]==a[i]){
// 			for(int j=0; j<b.size(); j++){
// 				if (a[i+j]==b[j])
// 				m++; 
// 			}
// 		}
// 		if (m== b.size()){
// 			cout<< "yes"; 
// 			return 0; 
// 		}
// 	}
// 	cout << "no"; 

// }






// #include <iostream>
// #include <string>
// using namespace std;

// bool isSubstring(string s, string t) {
//     int n = s.length();
//     int m = t.length();

//     for (int i = 0; i <= n - m; i++) {
//         bool found = true;
//         for (int j = 0; j < m; j++) {
//             if (s[i+j] != t[j]) {
//                 found = false;
//                 break;
//             }
//         }
//         if (found) {
//             return true;
//         }
//     }

//     return false;
// }

// int main() {
//     string s, t;
//     cout << "Enter string s: ";
//     cin >> s;
//     cout << "Enter string t: ";
//     cin >> t;

//     if (isSubstring(s, t)) {
//         cout << "t is a substring of s" << endl;
//     } else {
//         cout << "t is not a substring of s" << endl;
//     }

//     return 0;
// }



#include<iostream>
#include<string>
using namespace std ; 
bool is_substring(string s, string t){
	int a = s.size() ; 
	int b = t.size() ; 
	for(int i=0; i<a-b; i++){
		bool king = true ; 
		for(int j=0; j<b ; j++){
			if (s[i+j]!=s[j]){
				king  = false ;  
				break; 
			}
		}
		if (king){
			return true ; 
		}

	}
	return false ; 
}
int main(){
	string s ,t ; 
	cin>> s >> t; 
	if (is_substring(s,t)){
		cout<< " yes the " << t << " is the substring of "<< s ; 

	}else {
		cout<< " no the "<< t << " is not the substring of "<< s ; 
	}
	return 0; 
}

