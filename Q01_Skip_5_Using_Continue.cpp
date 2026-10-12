// Program to print numbers from 1 to 10, skipping 5 using continue

#include <iostream>
using namespace std;

int main()
{
    for (int number = 1; number <= 10; number++)
    {
        if (number == 5)
            continue;

        cout << number << " ";
    }

    return 0;
}
