#include "prime.h"

bool isPrime(int n)
{
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        return false;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
    }

    return true;
}

bool isPrime_v2(int n)
{
	if(n < 0)
		n *= -1;
	// 0 and 1 are not prime numbers
	if(n == 0 || n==1)
		return false;
    for(int k=2; k <= n-1; k++)
    {
        std::cout << n << "/" << k << std::endl;
        if(n % k == 0)
        {
            std::cout << n << " is divisible by " << k << std::endl;
            return false;
        }        
    }
	
	return true;
}

// 2/1 2/2
// 3/1 3/2 3/3
// 4/1 4/2 4/3 4/4
// 5/1 5/2 5/3 5/4 5/5