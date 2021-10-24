#include <bits/stdc++.h>
#define FASTIO    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 

#define rand(st, ed)  uniform_int_distribution<int>(st, ed)(rng)
 




 
int main()
{
    FASTIO;
    int i,l=0,u=0;
    string str;
    cin >> str;
    for(i=0;i<str.length();i++)
    {
    	int temp=str[i];
    	if(temp>91)
    	l++;
    	else
    	u++;
    }
    if(u<=l)
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str;
    
    
    
    return 0;
}
