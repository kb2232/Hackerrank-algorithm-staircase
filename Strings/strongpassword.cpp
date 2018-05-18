#include <bits/stdc++.h>

using namespace std;

int CharFamily(char c) 
{
   if(c >= '0' && c <= '9') return 0;
   if(c >= 'a' && c <= 'z') return 1;
   if(c >= 'A' && c <= 'Z') return 2;
   return 3;
}

int main() 
{
    int n; cin >> n;
    char c;
    bitset<4> mask;

    while (cin >> c)
    {
        mask.set(CharFamily(c));
    }
    cout << max(6-n, 4-(int)mask.count());
}