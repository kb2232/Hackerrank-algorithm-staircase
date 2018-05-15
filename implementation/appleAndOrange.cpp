#include <cmath>
#include <cctype>
#include <vector>
#include <list>
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int s,t,a,b;
	//[s,t] is range distance for Sam's house
	//'a' is position of apple tree; 'b' is position of orange tree
	int m, n; //m is m apples and n is n oranges
	
	//input s and t
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	assert(s<t && a<b && a<s && a<t && s<b && t<b);
	vector<int> apple(m);
	for(int i=0; i<apple.size(); i++)
		cin>>apple.at(i);

	vector<int> orange(n);
	for(int i=0; i<orange.size(); i++)
		cin>>orange.at(i);
	int couta=0, coutb=0;
	int *diff = new (nothrow) int[apple.size()+orange.size()];
	if(diff==nullptr)
		cout<<"ERROR ALLOCATING SPACE\n";
	else
	{

		for(int i=0; i<apple.size(); i++)
		{
			diff[i] = a+apple.at(i);
			if(diff[i]>=s && diff[i]<=t)
				couta++;
		}
		
		for(int i=0; i<orange.size(); i++)
		{
			
			diff[i+apple.size()] = b+orange.at(i);
			if(diff[i+apple.size()]>=s && diff[i+apple.size()]<=t)
				coutb++;
			
		}
		delete[] diff;
		cout<<couta<<endl;
		cout<<coutb<<endl;
	}


	return 0;
}