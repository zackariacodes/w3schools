// C++ has many functions that allows you to perform mathematical tasks on numbers.

// The max(x,y) function can be used to find the highest value of x and y.
// The min(x,y) function can be used to find the lowest value of x and y.

#include <iostream>
#include <cmath> // Other functions such as SQRT (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file.

using std::cout;
using std::max;
using std::min;
using std::endl;


int main(){

    cout << max(5,10) << endl;
    cout << min(5,10) << endl;
    cout << "The square root of \'9\' is: " << sqrt(9) << endl;
    cout << "The rounded value of \'2.6\' is: " << round(2.6) << endl;
    cout << "The natural log of 2 is: " << log(2);

    return 0;
}

// OTHER MATH FUNCTIONS:

/*

abs(x)	         Returns the absolute value of x
acos(x)	         Returns the arccosine of x
asin(x)	         Returns the arcsine of x
atan(x)	         Returns the arctangent of x
cbrt(x)	         Returns the cube root of x
ceil(x)	         Returns the value of x rounded up to its nearest integer
cos(x)	         Returns the cosine of x
cosh(x)	         Returns the hyperbolic cosine of x
exp(x)	         Returns the value of Ex
expm1(x)	     Returns ex -1
fabs(x)	         Returns the absolute value of a floating x
fdim(x, y)	     Returns the positive difference between x and y
floor(x)	     Returns the value of x rounded down to its nearest integer
hypot(x, y)	     Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	 Returns x*y+z without losing precision
fmax(x, y)	     Returns the highest value of a floating x and y
fmin(x, y)	     Returns the lowest value of a floating x and y
fmod(x, y)	     Returns the floating point remainder of x/y
pow(x, y)	     Returns the value of x to the power of y
sin(x)	         Returns the sine of x (x is in radians)
sinh(x)	         Returns the hyperbolic sine of a double value
tan(x)	         Returns the tangent of an angle
tanh(x)	         Returns the hyperbolic tangent of a double value


*/