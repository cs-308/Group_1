#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    printf("\nEnter a number ");
    int n; cin>>n;
    int fact=factorial(n);
    if(fact>0) printf("Factorial of %d is %d",n,factorial(n));
    else printf("kindly enter positive number\n");
    return 0;
}
