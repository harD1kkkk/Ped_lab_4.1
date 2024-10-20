#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, k;
    double result;

    cout << "N = ";
    cin >> N;

    // while
    result = 1.0;
    k = 1;
    while (k <= N) {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
        k++;
    }
    cout << "Result using while: " << result << endl;

    // do-while
    result = 1.0;
    k = 1;
    do {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
        k++;
    } while (k <= N);
    cout << "Result using do-while: " << result << endl;

    // for ++
    result = 1.0;
    for (k = 1; k <= N; k++) {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
    }
    cout << "Result using for (ascending): " << result << endl;

    // for --
    result = 1.0;
    for (k = N; k >= 1; k--) {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
    }
    cout << "Result using for (descending): " << result << endl;

    return 0;
}
