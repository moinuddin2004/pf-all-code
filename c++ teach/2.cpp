// #include<iostream>
// using namespace std;

// int main(){
//     int a=-10;
//    signed int b=-10;
//   unsigned  int c=-10;
//   cout<<a <<endl;
//   cout<<b <<endl;
//   cout<<(int)c <<endl;
// return 0;
// }


#include <iostream>

using namespace std;

int main() {
    // implicit type conversion from char to int
    char c = 'A';
    int i =static_cast<int>(c); 
    cout << "Implicit type conversion from char to int: " << i << endl;

    // explicit type conversion from int to char
    int j = 65;
    char d = static_cast<char>(j);
    cout << "Explicit type conversion from int to char: " << d << endl;

    // implicit type conversion from int to float
    int k = 10;
    float f = static_cast<float>(k);
    cout << "Implicit type conversion from int to float: " << f << endl;

    // explicit type conversion from float to int
    float g = 3.14;
    int l = static_cast<int>(g);
    cout << "Explicit type conversion from float to int: " << l << endl;

    // implicit type conversion from int to double
    int m = 100;
    double n = m;
    cout << "Implicit type conversion from int to double: " << n << endl;

    // explicit type conversion from double to int
    double o = 3.14159;
    int p = static_cast<int>(o);
    cout << "Explicit type conversion from double to int: " << p << endl;

    // implicit type conversion from int to bool
    int q = 0;
    bool r = q;
    cout << "Implicit type conversion from int to bool: " << r << endl;

    // explicit type conversion from bool to int
    bool s = true;
    int t = static_cast<int>(s);
    cout << "Explicit type conversion from bool to int: " << t << endl;

  return 0;
}
