//Gaura Deshmukh
//Implementation of second Bernoulli numbers Bn by Akiyama–Tanigawa algorithm
//With the genric return type
//Accurate calculation

#ifndef BERNAULLI_HPP
#define BERNAULLI_HPP
#include <boost/multiprecision/cpp_int.hpp>
#include <vector>

using namespace boost::multiprecision;

template <typename float_type>
float_type bernoulli(int n)
{	
	if(n>1&&n&1)
		return float_type(0);
	if(n==0)
		return float_type(1);
	if(n==1)
		return float_type(-0.5);
	std::vector<cpp_rational> arr(n+1);		

	for(int i=0;i<=n;i++)
	{
		arr[i]=cpp_rational(1,(i+1));	
		//std::cout<<arr[i]<<'\n'	;
		for(int j=i;j>=1;j--)
		{
			arr[j-1] = (cpp_rational(j,1))*(arr[j-1]-arr[j]);			
			//std::cout<<arr[i]<<'\n'	;
		}
	}
	return static_cast<float_type>(arr[0]);
}

#endif