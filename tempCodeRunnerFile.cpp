#include <iostream>
#include <bits/stdc++.h>

int main() {
    // Write C++ code here
   int n;
	cin>>n;
	for(int i=0;i<2*n-1;i++)
	{
	    for(int j=0;j<2*n-1;j++)
	    {
	        if((i==j||i+j+1==2*n-1)&&i<n)
	        {
	            cout<<i+1;
	        }
	        else if(i==j||i+j+1==2*n-1&&i>=n)
	        {
	            cout <<2*n-i-1;
	        }
	        else
	        {
	            cout<<" ";
	        }
	        
	    }
	    cout<<"\n";
	}

	return 0;



}