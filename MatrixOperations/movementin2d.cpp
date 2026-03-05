#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int i = 1, j = 1; // position of 5

    cout << "Current: " << matrix[i][j] << endl;

    cout << "Up: " << matrix[i-1][j] << endl;
    cout << "Down: " << matrix[i+1][j] << endl;
    cout << "Left: " << matrix[i][j-1] << endl;
    cout << "Right: " << matrix[i][j+1] << endl;
}