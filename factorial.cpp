

#include <iostream>
using namespace std;

// Function to find factorial
// of given number
unsigned long long factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 4;
	cout << "Factorial of "
		<< num << " is " << factorial(num) << endl;

        num = 13;
	cout << "Factorial of "
		<< num << " is " << factorial(num) << endl;
	return 0;
}

/*
class Solution
{
    public:
    long long factorial(int N)     
    {
        if(N > 1)
        return N * factorial(N - 1);
        else
        return 1;
    }

};
*/