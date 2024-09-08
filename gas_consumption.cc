/**
 *   @file: gas_consumption.cc
 *   @author: Jim Swain
 *   @date: 9/8/24
 *   @brief: Given # of miles driven in town and on the highway, output the gas consumption, total miles driven, and avg mpg.
 */

 #include <iostream>
 #include <iomanip>
 using namespace std;

 const double TOWN_MPG = 22.5;
 const double HIGHWAY_MPG = 29.5;

/**
 *  Function:   town_error
 *              displays an error that # of miles driven in town can't be negative
 */
 void town_error() {
    cout << endl << "--------------- Gas consumption ---------------" << endl;
    cout << "Error: number of miles driven in town cannot be negative" << endl;
    cout << "-----------------------------------------------" << endl;
 }

/**
 *  Function:   highway_error
 *              displays an error that # of miles driven in town can't be negative
 */
 void highway_error() {
    cout << endl << "--------------- Gas consumption ---------------" << endl;
    cout << "Error: number of miles driven on the highway cannot be negative" << endl;
    cout << "-----------------------------------------------" << endl;
 }

 int main() {
    double town_miles, highway_miles;
    cout << "Enter the number of miles driven in town: ";
    cin >> town_miles;
    if (town_miles < 0) {
        town_error();
        return 0;
    }

    cout << "Enter the number of miles driven on the highway: ";
    cin >> highway_miles;
    if (highway_miles < 0) {
        highway_error();
        return 0;
    }

    double town_consumption = town_miles / TOWN_MPG;
    double highway_consumption = highway_miles / HIGHWAY_MPG;
    double total_miles = town_miles + highway_miles;
    double total_consumption = town_consumption + highway_consumption;

    cout << endl << "--------------- Gas consumption ---------------" << endl;
    cout << "The number of miles driven in town: " << fixed << setprecision(1) << town_miles << " miles" << endl;
    cout << "The gas consumption for town driving: " << fixed << setprecision(1) << town_consumption << " gallons" << endl;
    cout << "The number of miles driven on the highway: " << fixed << setprecision(1) << highway_miles << " miles" << endl;
    cout << "The gas consumption for highway driving: " << fixed << setprecision(1) << highway_consumption << " gallons" << endl;
    cout << "The total miles driven: " << fixed << setprecision(1) << total_miles << " miles" << endl;
    cout << "The total gas consumption: " << fixed << setprecision(1) << total_consumption << " gallons" << endl;
    if (total_consumption > 0) {
        double avg_mpg = total_miles / total_consumption;
        cout << "The average mpg for the trip: " << fixed << setprecision(1) << avg_mpg << " miles/gallon" << endl;
    } else {
        cout << "No average can be calculated" << endl;
    }
    cout << "-----------------------------------------------" << endl;
    return 0;
 }
