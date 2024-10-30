#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
cout << "Nhập n:" << "\n";
cin >> n;
float x;
cout << "Nhập x" << "\n";
cin >> x;
double i = 0;
double s = 0;
while (n != 0 && i < n){
    i++;
    s += pow(x,2 * i + 1);
}
cout << s;
return 0;
}