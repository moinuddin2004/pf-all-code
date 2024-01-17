#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x[] = {fabs(7.5), floor(7.5), fabs(0.0), ceil(0.0), fabs(-6.4), ceil(-6.4), ceil(-fabs(-8 + floor(-5.5)))};
    for (int i = 0; i <= 6; i++)
    {
        cout << i <<"value of x is ==>" << x[i] << endl;
    }

    return 0;
}