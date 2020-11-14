#include <iostream>

using namespace std;

void printIncDec(int n,int l=1){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;
}

int main(){
    printIncDec(3);
    return 0;
}
