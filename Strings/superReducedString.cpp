#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. 
    Print output to STDOUT */ 
    string S;
    cin>>S;  
    for (int i = 0; i < S.size(); ++i)
    {
    	for (int j = i+1; j < S.size(); ++j)
    	{
    		if (S[i]==S[j] && (j-i+1)==2)
    		{
    			S.erase(i,j-i+1);
    			i=-1;
    			j=i+1;
    		}
    	}
    }
    (S.empty())?cout<<"Empty String\n":cout<<S<<endl;
    return 0;
}
