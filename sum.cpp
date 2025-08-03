#include<iostream>
using namespace std;

int main()
{
    int k[12] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int sum = 0;

    for(int i = 0; i < 12; i++)
    {
        sum += k[i];
    }

    cout << "The total value of the array elements is: " << sum << endl;

    return 0;
}
