#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, h;
	cin>> x >> h;
	
	int total_time = 0;
	
    for(int i = 4; i < x; i++) {
        total_time += 24;
    }
    
	total_time = total_time + h;
	cout<< total_time;
	
	
	return 0;

}
