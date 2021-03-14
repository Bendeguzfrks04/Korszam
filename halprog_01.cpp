#include<iostream>
#include<cmath>
#include <string>
#define EPSILON 0.001

using namespace std;
template<typename F, typename T, typename L>

T Newtonras(F f, L df, T x0){
    
    double h = f(x0) / df(x0);
      while (abs(h) >= EPSILON)
      {
          h = f(x0)/df(x0);
     
          // x(i+1) = x(i) - f(x) / f'(x)
          x0 = x0 - h;
      }
    

    return x0-h;
}

int main() {
    
    auto fgv = [](double x){ return x*x -612.0; };
    auto df = [](double x){ return 2.0*x; };
    double x0 = 10.0;
 
    double sol = Newtonras(fgv, df, x0);
    //cout.precision(16);
    cout<<"The solution is: " <<sol<<endl;
    
    return 0;
}

