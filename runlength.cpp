// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
      char c=src[0];
    string v;
    int m=1;
    for(int i=1;i<src.length();i++)
    {
        if(src[i]==c)
        {
            m++;
        }
        else
        {
            v+=c+to_string(m);
            m=1;
            c=src[i];
        }
    }
    v+=c+to_string(m);
    return v;
}     
 
