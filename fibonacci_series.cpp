#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    int a=-1, b=1, c=0;
    cout<<"Enter the number of fibo terms: "; cin>>n;
    cout<<"\nFibonacci Series:"<<endl;
    
    /*Using for loop for the same from Practicals-4:
    for (int i=1; i<=n; i++) {
        cout<<endl;
        c=a+b;
        cout<<c<<endl;
        a=b; 
        b=c;
    }*/

    do {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        i++;
    } while (i<=n);
    return 0;
}