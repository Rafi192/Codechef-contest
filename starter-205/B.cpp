#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,k;
	    cin>>n>>k;
	    
	    int hour, min;
	    
	    int total_duration = n*k; //total duration of n episodes in minutes
	    
	    //60 mins = 1 hour
	    //1 min = 1/60
	    // total_duration = total_duration/60; hours
	    
	    // 
	    if (total_duration >=60){
	        
	        hour = total_duration /60; 
	        min = total_duration % 60;
	         
	    }
	    else{
	        min = total_duration;
	        hour = 0;
	    }
	    
	    cout<<hour <<" "<<min<<"\n";
	        
	   
	    
	    
	}

}
