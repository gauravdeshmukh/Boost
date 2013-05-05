/*
*Class bernoulli stores precomputed values in buffer for caching
*
*It uses David Harvey's algorithm for computation of n-th bernoulli number
*Details of algorithm are at http://arxiv.org/pdf/1108.0286v3.pdf
*
*@T - data type for returned values
*@Policy - policy for error handling (uses some predefined policy, if not specified) 
*/
template <class T,class Policy = boost::math::policies::policy<>()>
class bernoulli
{
	private:
		//data section
		std::vector<T> buffer;		//stores certain precomputed values

	public:
		/*
		*Defaut constructor
		*/
		bernoulli()
		{
			//calculates first 100 bernoulli numbers and stores them in buffer
		}

		/*
		*Parameterized constructor takes one parameter
		*@init - number of precomputed values to be stored in buffer
		*/
		bernoulli(const unsigned init)
		{
			//calculates first 'init' bernoulli numbers with thread safety
		}

		/*
		*This method takes two parameter
		*@n - index of bernoulli number to be calculated
		*@pol - policy for error handling
		*returns n-th bernoulli number
		*/
		T get_bernoulli_num(const unsigned n,const Policy& pol)
		{
			//if ( n < buffer.size() ), it returns stored value
			//else it computes n-th bernoulli numbers
		}

		/*
		*@overload
		*Overloaded function get_bernoulli_num
		*Takes one parameter
		*Uses some defined policy as default
		*
		*@n - index of bernoulli number to be calculated
		*returns n-th bernoulli number
		*/
		T get_bernoulli_num(const unsigned n)
		{
			return get_bernoulli_num(n,boost::math::policies::policy<>());
		}
};

/*
*This function calculates polygamma of z for order m using bernoulli numbers
*Details of formula are at http://en.wikipedia.org/wiki/Polygamma_function#Asymptotic_expansion
*
*Takes three parameters
*@z - argument of polygamma function
*@m - order of polygamma function
*@pol - policy for error handling
*/
template <class T,class Policy = boost::math::policies::policy<>()>
T polygamma(T z,unsigned m,const Policy &pol)
{
	//returns polygamma of z for order m
}

/*
*@overload
*Overloaded function polygamma
*Takes two parameters
*Uses some defined policy as default
*
*@z- argument of polygamma function
*@m - order of polygamma function
*returns polygamma of z for order m
*/
template <class T>
T polygamma(T z,unsigned m)
{
	return polygamma(z,m,boost::math::policies::policy<>());
}


/*
*This function calculates lgamma (log of gamma) of z based on Stirling's approximation
*If bernoulli numbers are to be used, 
*then formula at http://en.wikipedia.org/wiki/Stirling%27s_approximation#Stirling.27s_formula_for_the_gamma_function
*
*For the convergent version of Stirling's approximation we can use
*http://en.wikipedia.org/wiki/Stirling%27s_approximation#A_convergent_version_of_Stirling.27s_formula
*
*Takes two parameters
*@z - log of gamma of z to be calculated
*@pol - policy for error handling
*/
template <class T,class Policy = boost::math::policies::policy<>()>
T lgamma_stirl(T z,const Policy &pol)
{
	//returns ln(gamma(z))
}

/*
*@overload
*Overloaded function gamma_stirl
*Takes one parameter
*Uses some defined policy as default
*
*@z - argument of gamma function
*returns ln(gamma(z))
*/
template <class T>
T lgamma_stirl(T z)
{
	return polygamma(z,boost::math::policies::policy<>());
}


/*
*This function calculates gamma (true gamma) of z based on Stirling's approximation
*
*@z - gamma of z to be calculated
*@pol - policy for error handling
*/
template <class T,class Policy = boost::math::policies::policy<>()>
T tgamma_stirl(T z,const Policy &pol)
{
	//returns gamma(z)
}

/*
*@overload
*Overloaded function tgamma_stirl
*Takes one parameter 
*Uses some defined policy as default 
*
*@z - argument of gamma function
*returns gamma(z)
*/
template <class T>
T tgamma_stirl(T z)
{
	return polygamma(z,boost::math::policies::policy<>());
}


//Examples for the use of functions
typedef boost::multiprecision::cpp_dec_float_100 float100;

bernoulli<float100> bn1; 				//precomputes and stores first 100 bernoulli numbers as default constructor is called
std::cout<<bn1.get_bernoulli_num(10);	//prints 10th bernoulli number 

bernoulli<float100> bn2(50)				//precomputes and stores first 50 bernoulli numbers as specified in parameterized constructor

std::cout<<polygamma<float100>(3,2)		//prints polygamma of 3 for order 2

std::cout<<lgamma_stirl<float100>(30);	//prints ln(gamma(30)) using stirling's approximation

std::cout<<tgamma_stirl<float100>(30);	//prints gamma(30)		