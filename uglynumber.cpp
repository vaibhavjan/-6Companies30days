// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> v;
	    v.push_back(1);
	    ull two=0,three=0,five=0;
	    for(int i=1;i<n;i++)
	    {
	        ull m=min({2*v[two],3*v[three],5*v[five]});
	        v.push_back(m);
	        if(2*v[two]==m)
	        {
	            two++;
	        }
	        if(3*v[three]==m)
	        {
	            three++;
	        }
	        if(5*v[five]==m)
	        {
	            five++;
	        }
	    }
	    return v[v.size()-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends