#include <iostream>
#include <vector>

using namespace std;

vector <vector <char> > initializeMatrix(int,int,char);
void printMatrix( vector <vector <char> > );

int main()
{
	vector <vector <char > > grid;
	int rows;
	int cols;
    char filler;

    cout<<"Enter a character to fill the grid:"<<endl;
    cin>>filler;
	cout<<"Enter rows and columns of "<<filler<<"'s:"<<endl;
	cin>>rows>>cols;
    
    if( rows < 1 || cols < 1 )
    {
        cout<<"Grids must have at least one row and at least one column.\n";
    }
    else
    {
        grid = initializeMatrix(rows,cols,filler);
        printMatrix(grid);
    }

	return 0;
}

vector <vector <char> > initializeMatrix(int rows, int columns, char value)
{
    vector <vector <char> > matrix;

    matrix.resize(rows);
    for(int i=0; i < matrix.size(); i++)
    {
        matrix[i].resize(columns);
        for(int j=0; j < matrix[i].size(); j++)
        {
            matrix[i][j] = value;
        }
    }
    return matrix;
}

void printMatrix(vector <vector <char> > matrix)
{
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
