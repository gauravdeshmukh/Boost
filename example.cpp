
#include <boost/multiprecision/cpp_dec_float.hpp> 
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include "bernoulli.hpp"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main()
{
    int n;
    while(true)
    {
	    cout<<"Enter a non-negative integer : ";
	    cin>>n;	    
	    cout<<"Output with data type cpp_dec_float_50 : "<<bernoulli<cpp_dec_float_50>(n)<<endl;
	    cout<<"Output with data type rational : "<<bernoulli<cpp_rational>(n)<<endl;
	}
}