#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k; cin >> k;
    vector<int> v;
    v.push_back(k);
    for(int i = 1; i <= 999999; i++) { 
        int a;
        cin >> a;
        if( a == 0) {
            break;
        }
        if (a < 0) { 
            v.push_back(a);  
            break;  
        }
        if(a != v.back()) { 
            v.push_back(a);
        }
    }
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        cout << v[i] << " ";
    }

    return 0;
}