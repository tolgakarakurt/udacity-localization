#include <iostream>
#include <math.h>
#include "LU"

using namespace std;
using namespace Eigen;
float measurements[3] = {1, 2, 3};
//using namespace Eigen;
int main()
{
    cout << "sizeof measurements: " << sizeof(measurements) << endl;
    cout << "sizeof float: " << sizeof(float) << endl;
    cout << measurements[0]<<endl;
    cout << "Hello";
    return 0;
}