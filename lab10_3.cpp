#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int N_data = 0;
    double sum, sum_sq;
    string scoreline;
    ifstream source("score.txt");
    while(getline(source,scoreline))
    {
        sum += stod(scoreline);
        sum_sq += pow(stod(scoreline),2);
        N_data++;
    }
    cout << "Number of data = "<< N_data <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum / N_data <<"\n";
    cout << "Standard deviation = " << sqrt((sum_sq/N_data)-pow(sum/N_data,2));
}