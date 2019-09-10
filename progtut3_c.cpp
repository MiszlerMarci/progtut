#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1000; i <=2000; i++)
    {
        if (i % 13 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
return 0;
}
