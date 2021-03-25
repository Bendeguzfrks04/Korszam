#include <iostream>
#include "header.hpp"
#include <math.h>

using namespace std;

int main()
{
    
    Vector2d<double> v1{}, v2{};
    double c;
    
    cout << "Enter the vector 1: " << endl;
    cin >> v1;
    cout << "Enter the vector 2: " << endl;
    cin >> v2;
    cout << "Enter the scalar: " << endl;
    cin >> c;
    
    cout << endl;
    
    auto ossz = v1 + v2;
    cout << "The sum of the two vectors is: " << ossz << endl;
    
    cout << endl;
    
    auto kiv = v2 - v1;
    cout << "The difference between the two vectors is " << kiv << endl;
    
    cout << endl;
    
    auto srs1 = v1*c;
    auto srs2 = v2*c;
    cout << "Vector_1 multiplied by scalar is: " << srs1 << endl;
    cout << "Vector_2 multiplied by scalar is: " << srs2 << endl;
    
    cout << endl;
    
    auto div1 = v1/c;
    auto div2 = v2/c;
    cout << "Vector_1 divided by scalar is " << div1 << endl;
    cout << "Vector_2 divided by scalar is: " << div2 << endl;
    
    cout << endl;
    
    auto dot_prod = dot(v1,v2);
    cout << "The dot product of two vectors is " << dot_prod << endl;
    
    cout << endl;
    
    auto l1 = length(v1);
    auto l2 = length(v2);
    cout << "The length of vector_1 is " << l1 << endl;
    cout << "The length of vector_2 is " << l2 << endl;
    
    cout << endl;
    
    auto sql1 = sqlength(v1);
    auto sql2 = sqlength(v2);
    cout << "The squared length of vector_1 is  " << sql1 << endl;
    cout << "The squared length of vector_2 is  " << sql2 << endl;
    
    cout << endl;
    
    auto nr1 = normalize(v1);
    auto nr2 = normalize(v2);
    cout << "The normalized vector_1 is " << nr1 << endl;
    cout << "The normalized vector_2 is " << nr2 << endl;
    
    
    return 0;
}

