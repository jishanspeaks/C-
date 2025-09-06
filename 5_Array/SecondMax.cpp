#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / 4;
    int Max = INT_MIN;
    
    for (int i = 0; i <= n - 1; i++)
    {
       
        Max = max(Max, arr[i]);
        
    }
    int smax=INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
       if(arr[i]!= Max){ 
       smax = max(smax, arr[i]);
    }
        
    }
    cout << "Second Maximum element in the array is " << smax << endl;
} 