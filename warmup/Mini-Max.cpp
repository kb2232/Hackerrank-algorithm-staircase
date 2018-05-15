#include <iostream>
using namespace std;
void min_max_sum(__int64_t A[], int* p);

int main(int argc, char const *argv[])
{
	int n=5;
	__int64_t arr5[n];
	for (int i = 0; i < n; ++i)
		cin>>arr5[i];
	min_max_sum(arr5,&n);
	return 0;
}

void min_max_sum(__int64_t A[], int* p)
{
	__int64_t min_n = 9223372036854775807, max_n=-9223372036854775808;
	__int64_t max, min, sum=0;
	for (int i = 0; i < *p; ++i)
	{
		if(A[i]<min_n)
			min_n=A[i];
		if(A[i]>max_n)
			max_n=A[i];
	}
	//cout<<"max = "<<max<<"\nmin = "<<min<<endl;
	for (int i = 0; i < *p; ++i)
		sum += A[i];
	max = sum-min_n;
	min = sum - max_n;
	cout<<min<<" "<<max<<endl;
}