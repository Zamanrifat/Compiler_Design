#include <iostream>
using namespace std;

int main()
{
    int n, i, flag=0,factorial=1;
    cout<< " Please enter the number :";
    cin>> n;

    for(i = 2; i <= n/2;  i++)
    {
        if(n % i == 0)
        {
            cout<< n << " Is not a prime number." <<endl;
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<< n <<" Is a prime number. "<<endl;
        for(i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout<< "Factorial of " <<n << " is :"<<factorial<<endl;
    }
    return 0;
}
