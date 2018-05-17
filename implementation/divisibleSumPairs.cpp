
#include <vector>

#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;


int main()
{
	int n, count = 0;
	int k;
	cin >> n >> k;
	assert(n >= 2 && k >= 1);
	vector<int> a(n);
	for (int a_i = 0; a_i < a.size(); a_i++)
	{
		cin >> a[a_i];
	}
	for (int i = 0; i<a.size(); i++)
	{
		for (int j = 0; j<a.size(); j++)
		{
			if (i < j && (a[i] + a[j]) % k == 0)
				count++;
		}
	}
	//cout<< "size = "<<a.size()<<endl;
	cout << count << endl;
	return 0;
}
