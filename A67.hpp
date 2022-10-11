//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
void swap(int& n1, int& n2)
{
    int one = n1;

    n1 = n2;
    n2 = one;
}

void swap(int& n1, int& n2, int& n3)
{
    int one = n1;
    int two = n2;

    n1 = n3;
    n2 = one;
    n3 = two;
}

void swap(int& n1, int& n2, int& n3, int& n4)
{
    int one = n1;
    int two = n2;
    int three = n3;
    
    n1 = n4;
    n2 = one;
    n3 = two;
    n4 = three;
}