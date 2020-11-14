#include <iostream>

using namespace std;

int factorial(int n){
    if(n==0) return 1;

    return n*factorial(n-1);
}

int main(){
    size_t i = factorial(4);
    cout<<i;
    return 0;
}
