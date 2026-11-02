#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	while(T--)
	{
	    string S;
	    cin>>S;
	    int sum = 0;
	    string digit = "";
	    for(int i=0;i<S.size();i++)
	    {
	        if(isdigit(S[i]))
	        {
	            digit+=S[i];
	        }
	    }
	    int num = stoi(digit);
	    while(num!=0)
	    {
	         int rem = num%10;
	         sum += rem;
	         num /=10;
	    }
	    cout<<sum<<endl; 
	    
    }
 return 0;
}
