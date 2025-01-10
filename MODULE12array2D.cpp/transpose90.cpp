#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>>& matrix)
{
    for(int i = 0 ; i < matrix.size() ; i++)
    {
        for(int j = 0 ; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(vector<vector<int>>& matrix)
{
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = i + 1; j < matrix.size(); j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void transformMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    for(int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while(i < j)
        {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    // Define a 2D vector with dimensions n x n
    vector<vector<int>> matrix(n, vector<int>(n));
    
    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Original Matrix:\n";
    display(matrix);
    cout << endl;
    
    // Transpose the matrix
    transpose(matrix);
    cout << "After Transpose:\n";
    display(matrix);
    
    // Transform (flip horizontally) the matrix
    transformMatrix(matrix);
    cout << "After Transform (Horizontal Flip):\n";
    display(matrix);

    return 0;
}
