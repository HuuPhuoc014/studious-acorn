#include <iostream>
using namespace std;
int main() {
    int n;
cout << "Nhập n:" << "\n";
cin >> n;
double i;
double s = 0;
for(i = 1; i <= n ; i ++){
s += i * i;
}
cout << s;
return 0;}