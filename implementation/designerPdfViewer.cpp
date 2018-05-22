#include <vector>

#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;


int main(){
	int height=0;
    vector<int> h(26);
    for(int h_i = 0;h_i < h.size();h_i++){
       cin >> h[h_i];
    }

    string word;
    cin >> word;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < word.length(); ++i)
    {
    	if(h.at(abc.find(word[i]))>height)
    		height = h.at(abc.find(word[i]));
    }
    cout<<word.length() * height<<endl; 
    return 0;
}