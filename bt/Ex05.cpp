#include <iostream>
using namespace std;
int main() {
    int n;
cout << "Nhập n:" << "\n";
cin >> n;
double i = 0;
double s = 0;
while (n != 0 && i < n){
    i++;
    s += 1/(i * (i + 1));
}
cout << s;
return 0;
}