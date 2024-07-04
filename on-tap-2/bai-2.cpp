#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void InsertionSort(long long  a[], long long  n){	
	int pos, x;
	for(int i = 1; i < n; i++){ 
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = x;
	}
}
int main()
{
    long long  n; cin >> n;
    long long a[n];
    long long  minkc = 1e9;
    for( int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for( int i = 1; i < n; i++){
        minkc = min(minkc,abs(a[i]-a[i-1]));
    }
    cout << minkc;
}