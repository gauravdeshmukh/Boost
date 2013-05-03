/*
*Class bernoulli stores precomputed values in buffer for caching
*
*It uses David Harvey's algorithm for computation of n-th bernoulli number
*Details of algorithm are at http://arxiv.org/pdf/1108.0286v3.pdf
*
*/
template <class T,class Policy>
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
		*This method parameter n
		*@n - index of bernoulli number to be calculated
		*returns n-th bernoulli number
		*/
		T get_bernoulli_num(const unsigned n,const Policy& pol)
		{
			//if ( n < buffer.size() ), it returns stored value
			//else it computes n-th bernoulli numbers
		}
};

/*
*This function calculates polygamma of z for order m using bernoulli numbers
*Details of formula are at http://en.wikipedia.org/wiki/Polygamma_function#Asymptotic_expansion
*
*@z - argument of polygamma function
*@m - order of polygamma function
*/
template <class T,class Policy>
T polygamma(T z,unsigned m,const Policy &pol)
{
	//returns polygamma of z for order m
}

/*
*This function calculates lgamma (log of gamma) of z based on Stirling's approximation
*If bernoulli numbers are to be used, 
*then formula at http://en.wikipedia.org/wiki/Stirling%27s_approximation#Stirling.27s_formula_for_the_gamma_function
*
*For the convergent version of Stirling's approximation we can use
*http://en.wikipedia.org/wiki/Stirling%27s_approximation#A_convergent_version_of_Stirling.27s_formula
*
*@z - log of gamma of z to be calculated
*/
template <class T,class Policy>
T lgamma_stirl(T z,const Policy &pol)
{
	//returns ln(gamma(z))
}

/*
*This function calculates gamma (true gamma) of z based on Stirling's approximation
*
*@z - gamma of z to be calculated
*/
template <class T,class Policy>
T tgamma_stirl(T z,const Policy &pol)
{
	//returns gamma(z)
}