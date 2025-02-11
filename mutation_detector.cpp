#include <iostream>
#include <iomanip>  // For controlling the output format (setting precision)
using namespace std;

void calculate_mutant_frequency() {
    // Declare variables to store user input
    int colonies_on_selective, colonies_on_non_selective;
    
    cout<<"============================MUTATION DETECTOR============================"; 
    // Prompt user for input
    cout << "Enter the number of colonies on the selective medium:";
    cin >> colonies_on_selective;
    cout << "Enter the number of colonies on the non-selective medium:";
    cin >> colonies_on_non_selective;

    // Check if the number of colonies on non-selective medium is greater than 0 to avoid division by zero
    if (colonies_on_non_selective <= 0) {
        cout << "Error: Number of colonies on non-selective medium must be greater than zero." << endl;
        return;
    }

    // Calculate the frequency of mutant cells
    double mutant_frequency = (static_cast<double>(colonies_on_selective) / colonies_on_non_selective) * 100;
    
    // Output the result, with precision of 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nFrequency of Mutant Cells: " << mutant_frequency << "%" << endl;
}

int main() {
    // Call the function to calculate mutant frequency
    calculate_mutant_frequency();
    
    return 0;
}
