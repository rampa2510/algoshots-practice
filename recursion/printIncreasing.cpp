#include <iostream>

using namespace std;

void printIncreasing(int n,int l=1){
    if(l==n){
        cout<<n;
        return;
    }
    cout<<l++<<endl;
    printIncreasing(n,l);
}

int main(){
    int n;
    cin>>n;
    printIncreasing(n);
    return 0;
}
