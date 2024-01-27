#include <iostream>
#include <array>
using namespace std;
const int  SIZE =4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double sum =0.0;
    for (int i = 0; i <rowSize ; ++i) {
        sum+= m[i][columnIndex];
    }
    return sum;
}





int main() {
int rows =5;
double matrix[][SIZE]={
        {5, 3, 1, 6},
        {-5, 2, 1, 5},
        {6, 6, 1, 6},
        {-3, 11, 2, 55},
        {0, 4, 0, 4}
};
    for (int i = 0; i < SIZE; ++i) {
        double columnSum = sumColumn(matrix,rows,i);
        cout << "Sum of column: " <<i << " = " <<columnSum<< endl;
    }
    return 0;
}
