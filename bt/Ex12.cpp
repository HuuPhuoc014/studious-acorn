#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
cout << "Nhập n:" << "\n";
cin >> n;

double i = 1;
double s1 = 1;
double s2 = 1;
while (n != 0 && i < n){
    i++;
    s2 += i;
    s1 += 1/s2;}
cout << s1;
return 0;

}