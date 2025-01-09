#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int space = 4;
    
    for(int i = 5 ; i>=1 ; i--) 
    {
        for(int curr = 1 ; curr <= space ; curr++) {
            cout<<"  ";
        }
        space--;
        for(int start = i ; start <= n ; start++) {
            cout<<start<<" ";
        }
        
        for(int end = n-1 ; end >= i ; end--) {
            cout<<end<<" ";
        }
        
        cout<<endl;
        
        
    }
    return 0;
}
