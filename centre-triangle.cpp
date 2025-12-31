/*
Pattern: centre Triangle
Input: n = 5
Output:
    *
   ***
  *****
 *******
*********
*/


#include <iostream>
using namespace std;

int main(){

    int a;

    cout<<"enter the number: ";
    cin>>a;

    for(int i=1;i<=a;i++){

        for(int j=a-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}