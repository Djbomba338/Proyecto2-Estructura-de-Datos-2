#include <cassert>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int array [1001] = {};
    for(int i = 0; i<n; i++){
        int p;
        cin>> p;
        array[p]++;
    }
    int max = -1;
    for(int i=1000;i>=0; i--){
        if(array[i]%2 != 0 && max == -1){
            max =i;
        }
        int aux = array[i]/2;
        while( aux > 0 ){
            cout << i << " " ;
            aux --;
        }
    }
    if(max!= -1){
        cout << max << " ";
    }


    for(int i=0;i<1001; i++){
        int aux = array[i]/2;
        while( aux > 0 ){
            cout << i << " " ;
            aux --;
        }
    }
    

    
    return 0;
}