#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int R, B;
	cin >> R>> B;
	
	int remaining = abs(R - B);
	int total_skill = min(R, B) *5;
	
	if(remaining >=1 && B>R){
	    total_skill += remaining*2;
	    
	}
	else if( remaining >=1 && R>B){
	    total_skill +=  remaining;
	}
	
	
	
	cout<<total_skill;

}
