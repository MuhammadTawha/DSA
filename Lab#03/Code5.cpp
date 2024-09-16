#include <iostream>
using namespace std;
int sumArrayElements(int** matrix, int rowCount, int colCount) {
int totalSum = 0;
for (int i = 0; i < rowCount; ++i) {
for (int j = 0; j < colCount; ++j) {
totalSum += matrix[i][j];
}
}
return totalSum;
}
double calculateAverage(int** matrix, int rowCount, int colCount) {
int totalSum = sumArrayElements(matrix, rowCount, colCount);
return static_cast<double>(totalSum) / (rowCount * colCount);
}
int sumRowElements(int** matrix, int selectedRow, int colCount) {
int rowSum = 0;
for (int i = 0; i < colCount; ++i) {
rowSum += matrix[selectedRow][i];
}
return rowSum;
}
int sumColumnElements(int** matrix, int rowCount, int selectedCol) {
int colSum = 0;
for (int i = 0; i < rowCount; ++i) {
colSum += matrix[i][selectedCol];
}
return colSum;
}
int findMaxInRow(int** matrix, int selectedRow, int colCount) {
int maxVal = matrix[selectedRow][0];
for (int i = 1; i < colCount; ++i) {
if (matrix[selectedRow][i] > maxVal) {
maxVal = matrix[selectedRow][i];
}
}
return maxVal;
}
int findMaxInColumn(int** matrix, int rowCount, int selectedCol) {
int maxVal = matrix[0][selectedCol];
for (int i = 1; i < rowCount; ++i) {
if (matrix[i][selectedCol] > maxVal) {
maxVal = matrix[i][selectedCol];
}
}
return maxVal;
}
int getValidInput(int limit, const string& indexType) {
int index;
do {
cout << "Provide a valid " << indexType << " index (0 - " << limit - 1 << "): ";
cin >> index;
if (index < 0 || index >= limit) {
cout << "Invalid " << indexType << " index. Try again." << endl;
}
} while (index < 0 || index >= limit);
return index;
}
int main() {
int rows, cols;
cout << "Specify the number of rows: ";
cin >> rows;
cout << "Specify the number of columns: ";
cin >> cols;
while (rows <= 0 || cols <= 0) {
cout << "Invalid input. Rows and columns must be positive." << endl;
cout << "Specify the number of rows: ";
cin >> rows;
cout << "Specify the number of columns: ";
cin >> cols;
}
int** matrix = new int*[rows];
for (int i = 0; i < rows; ++i) {
matrix[i] = new int[cols];
}
cout << "Input the matrix values:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cin >> matrix[i][j];
}
}
cout << "\nMatrix (" << rows << " x " << cols << "):" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << matrix[i][j] << " ";
}
cout << endl;
}
cout << "\nTotal sum of elements: " << sumArrayElements(matrix, rows, cols) << endl;
cout << "Average value of elements: " << calculateAverage(matrix, rows, cols) << endl;
cout << "\nSum of elements in a specific row:" << endl;
int row = getValidInput(rows, "row");
cout << "Row " << row << " sum: " << sumRowElements(matrix, row, cols) << endl;
cout << "\nSum of elements in a specific column:" << endl;
int col = getValidInput(cols, "column");
cout << "Column " << col << " sum: " << sumColumnElements(matrix, rows, col) << endl;
cout << "\nMaximum value in a specific row:" << endl;
row = getValidInput(rows, "row");
cout << "Max in row " << row << ": " << findMaxInRow(matrix, row, cols) << endl;
cout << "\nMaximum value in a specific column:" << endl;
col = getValidInput(cols, "column");
cout << "Max in column " << col << ": " << findMaxInColumn(matrix, rows, col) << endl;
for (int i = 0; i < rows; ++i) {
delete[] matrix[i];
}
delete[] matrix;
return 0;
}