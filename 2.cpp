//C++ Program of find Average.

#include <iostream>
using namespace std;
int main()
{
    float n1,n2,n3,n4,n5;
    float avg;

    cout << "Enter Five Numbers:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    avg = (n1 + n2 + n3 + n4 + n5) /5;

    cout << "\nAverage: " << avg;
    return 0;
}
