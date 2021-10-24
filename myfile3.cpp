#include <bits/stdc++.h>
#define FASTIO    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 

#define rand(st, ed)  uniform_int_distribution<int>(st, ed)(rng)
 




 
int main()
{
    FASTIO;
    long long n,i,count=0;
    cin >> n;
    char arr[n];
    for(i=0;i<n;i++)
    {
    	cin >> arr[i];
    }
    for(i=0;i<n-1;i++)
    {
    	if(arr[i]==arr[i+1])
    	count++;
    }
    cout << count;
    
    return 0;
}
