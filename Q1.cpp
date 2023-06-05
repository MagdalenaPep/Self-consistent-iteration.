#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // Define the tolerance (epsilon) and initial values of x0 and x1
    const double tolerance = 1e-12;
    double x_n = 0.0;
    double x_n1 = cos(x_n);
    int iteration_num = 0;

    // Using for loop iterate until an absolute difference between x_n1 and x_n is less than the tolerance.
    for (; abs(x_n1 - x_n) >= tolerance; ++iteration_num) {
        x_n = x_n1;
        x_n1 = cos(x_n);
    }
    // Calculate the final error in the transcendental equation
    double final_error = abs(x_n1 - cos(x_n1));

    // Output the results with 16 digits of accuracy
    cout << setprecision(16) << "Final value of (x_n+1) to 16 digits of accuracy: " << x_n1 << endl;
    cout << "Number of iterations for loop to converge:      " << iteration_num << endl;
    cout << setprecision(16)<< "Final error of transcendental equation:          " << final_error << endl;

    return 0;
}
