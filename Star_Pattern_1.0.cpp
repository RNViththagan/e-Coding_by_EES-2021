#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
           for(int j=0;j<n;j++){
                cout << "*";
            }
            cout << endl; 
        }
        else{
           for(int j=0;j<n;j++){
               if(j==0||j==n-1||j==i||j==n-i-1)
                cout << "*";
               else
                    cout << " ";
            }
            cout << endl;  
        }
        
    }
    return 0;
}
