#include<bits/stdc++.h>
using namespace std;
int main() {
//	string a, sub, add; 
//	cin>> a >> sub; 
//	for(int i=0; i<sub.size()/a.size(); i++){
//		add+= a; 
//		}
//		if (add==sub){
//			cout<< "yes"; 
//		}
//		else {
//			cout<< "no"; 
//		}
//		return 0; 



	////or we can use this method also: 
	string first, second, add; 
	cin>> first >> second; 
	for(int i=0; i<second.size()/first.size(); i++){
		add= add+first; 
	}
		cout<< (add==second ? "yes":"no");  
}
