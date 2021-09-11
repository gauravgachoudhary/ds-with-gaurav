// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
  public:
    int rightmostNonZeroDigit(int n, int arr[]){
        // code here 
        int count = 0;
        long long tmp =1;
        for(int i = 0; i < n; i++) {
            while(arr[i] > 0 && arr[i] % 5 == 0) {
                arr[i] = arr[i] / 5;
                count++;
            }
            
        }
        for(int i = 0; i < n; i++) {
            while(count != 0&& arr[i] > 0 && arr[i] % 2 == 0) {
                arr[i] = arr[i] / 2;
                count--;
            }
        }
        for(int i = 0; i < n; i++) {
            tmp = ((tmp % 10)*(arr[i] % 10)) % 10;
        }
        if(count > 0 && tmp != 0) 
            return 5;
        else if(tmp != 0)
            return tmp % 10;
        else 
            return -1;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.rightmostNonZeroDigit(n, A) << endl;
    }
    return 0; 
} 