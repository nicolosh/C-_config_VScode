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
    std::cout << n << "/" << 1 << std::endl;
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
