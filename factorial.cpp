#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2; i <=n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << "Please Enter your number: ";
    int n ;
    cin >> n;
    cout << fact(n);
    

    return 0;
}
