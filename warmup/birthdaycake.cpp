/*
Problem:  You are in-charge of the cake for your niece's birthday and have decided the cake will have             one candle for each year of her total age. When she blows out the candles, she’ll only be               able to blow out the tallest ones. Your task is to find out how many candles she can                    successfully blow out.

          For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 3, 2, 1, 3, she will be able to blow out 2 candles successfully, since the tallest candle is of height 3 and there are 2 such candles.

          Complete the function birthday Cake Candles that takes your niece's age and an integer array containing height of each candle as input, and return the number of candles she can successfully blow out.

Constraints: 1<= n <= 100000; 1<= height(i) <=10^7;

postcondition: return the total number of candles with the biggest height;

ALGORITHM:
            1. define a counter C = 0, and max = 0;
            2. Go through the heights of the candle via a loop.
              2.1 if H_i > max, then max = H_i;
              This is O(n)
            3. Go through the candles again, if H_i == max, increase the counter.
            4. return the counter
*/
#include <iostream>
#include <cassert>
#include <istream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> ar) 
{
  int counter = 0, max =0;
  for(size_t i = 0; i<ar.size(); i++)
    if(ar[i]>=max) max=ar[i];
  for(size_t j = 0; j<ar.size(); j++)
    if(ar[j]==max) counter++;
  return counter;
}

int main()
{
  int n;
  cin>>n;
  assert(n<=100000);
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  vector<int> height(n);
  for(size_t x=0; x<n; ++x)
    cin>>height[x];
  int result = birthdayCakeCandles(height);
  cout<<result<<endl;
  return 0;
}
