#include <iostream>
using namespace std;
int main() {
    int n;
cout << "Nhập n:" << "\n";
cin >> n;
double i = 0;
double s = 1;
while (n != 0 && i < n){
    i++;
    s *= i;
}
cout << s;
return 0;
}