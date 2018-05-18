#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,pairs=0;
    cin >> n;
    vector<int> c(n);
    vector<int> universe(101,0);
    for(int i = 0; i < n; i++)
       cin >> c[i];
    for(int c_i = 0;c_i < n; c_i++)
        universe.at(c.at(c_i)) += 1;
    for(int i = 1; i <= 101; i++)
    {
        if(universe.at(i-1)>=2)
        {
            if(universe.at(i-1) / 2 > 0)
                pairs +=universe.at(i-1) / 2;
        }
    }
    cout<<pairs<<endl;
    
    return 0;
}