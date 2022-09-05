#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<<"\nEnter a number ";
    int n; cin>>n;
    int fact=factorial(n);
    if(fact>0) cout<<"Factorial of "<<n<<" is "<<factorial(n);
    else cout<<"kindly enter positive number\n";
    return 0;
}
