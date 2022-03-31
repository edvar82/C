#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2;

    cin >> n1 >> n2;

    cout << fixed << setprecision(1);

    cout << n1 / n2;
    return 0;
}
