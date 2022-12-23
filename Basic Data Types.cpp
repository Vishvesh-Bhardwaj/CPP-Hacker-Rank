#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
int x;
long y;
char a;
float z;
double d;
cin>> x >> y >> a >> z >> d;
cout<< x << endl;
cout<< y << endl;
cout<< a << endl;
std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << z << endl;
std::cout << std::fixed;
    std::cout << std::setprecision(9);
    std::cout << d << endl;
    return 0;
}
