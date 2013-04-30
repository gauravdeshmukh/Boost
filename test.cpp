//Boost.Test for bernoulli.hpp 

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE BernoulliTest
#include <boost/test/unit_test.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp> 
#include "bernoulli.hpp"

using boost::multiprecision::cpp_dec_float_50;

BOOST_AUTO_TEST_CASE( bernoulli_test )
{	
	BOOST_CHECK_EQUAL( bernoulli<cpp_dec_float_50>(10), cpp_dec_float_50(5)/cpp_dec_float_50(66) ); 
	BOOST_CHECK_EQUAL( bernoulli<cpp_dec_float_50>(16), cpp_dec_float_50(-3617)/cpp_dec_float_50(510) ); 
	BOOST_CHECK_EQUAL( bernoulli<cpp_dec_float_50>(20), cpp_dec_float_50(-174611)/cpp_dec_float_50(330) ); 
	BOOST_CHECK_EQUAL( bernoulli<cpp_dec_float_50>(22), cpp_dec_float_50(854513)/cpp_dec_float_50(138) ); 
}

