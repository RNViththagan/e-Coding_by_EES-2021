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
    if(n%2==0){
        cout << "Invalid Input"; 
        return 0;
    }
    int end=2*n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<end;j++){
            if((j>=i && (j<end-i))||i==0){
                if(i<=n/2-1){
                    if((j<=(end/2)-i||j>=(end/2)+i))
                        cout << "* ";
                    else   
                        cout << "  ";
                }
                 else   
                    cout << "* ";
            }   
            else{
                cout << "  ";    
            }
        }      
        cout << endl;
                    
    }
    return 0;
}
