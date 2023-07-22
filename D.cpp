#include<bits/stdc++.h>
using namespace std; 
int main(){
//	string done; 
//	cin>> done ; 
//	for(int i=0; i<done.size()/2; i++){
//		if (!(done[i]==done[done.size()-i-1])){
//		cout << "no"; 
//		return 0; 
//		}
//		
//		
//		
//	}
//	cout<< "yes"; 


//	string done ; 
//	cin>> done; 
//	for(int i=0; i<done.size()/2; i++){
//		if (done[i]!= done[done.size()-i-1]){
//			cout<< "no"; 
//			return 0; 
//		}
//	}
//			cout<< "yes"; 



// string done ;
// 	cin>> done; 
// 	int seze = done.size(); 
// 	for(int i=0; i<seze/2; i++){
// 		if(done[i]!= done[seze-i-1]){
// 			cout<< "no"; 
// 			return 0; 
// 		}
// 	}
// 	cout<< "yes"; 
	



	string done ; 
	cin>> done ;
	int size= done.size() ; 
	for(int i=0; i<size/2; i++){
		if (done[i]!= done[size-i-1]){
			cout<< "no" ; 
			return 0; 
			
		}
	}
	cout<< "yes" ; 



}
