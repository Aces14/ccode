// g++ cosin0.cpp -o cosin0.o
#include <iostream>
#include <cmath>
using namespace std;

double round4(double var)
{
  double value = (int)(var * 10000 + 0.0005);
  return (double)value / 10000;
}

int main (){
double PI=3.14159265;
double t, rad, cr, sr;// cosin result sine result
// theta in terms of degrees
  for ( t=0 ; t<= 360 ; t = t + 15 )
  {
    rad = t * (PI / 180);
    cr = cos(rad);
    sr = sin(rad);
    cout << t << "\t" << round4(cr) << round4(sr) << "\t" << endl;
  }
  return 0;
}
