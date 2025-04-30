#include "prime.h"

using namespace std;

int main()
{
    int n = 1;
    //    int n = 31;
    while(n != 0)
    {
        cout << "Enter a positive integer: \n";
        cin >> n;

        if (isPrime(n))
            cout << n << " is a prime number" << std::endl;
        else
            cout << n << " is NOT a prime number" << std::endl;

        std::cout << "I am gonna try another 'isPrime' version to check if it is working" << std::endl;
        
        cout << "Enter another positive integer: \n";
        cin >> n;
            
        if(isPrime_v2(n))
            cout << n << " is a prime number" << std::endl;
        else
            cout << n << " is NOT a prime number" << std::endl;

        std::cout << "Insert n = 0 to exit the loop asking for an integer!\n";
    }       
}