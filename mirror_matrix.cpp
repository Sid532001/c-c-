 #include <iostream>
using namespace std;
int main()
{

    int row;
    int col;
    cin >> row;
    cin >>col;

    int array[row][col], mirror[row][col];


     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin >> array[i][j];
        }

    }

    
    cout << "orginal: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    cout << endl;

     for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
       {
         int  ii = row - 1 - i;
          int jj = col - 1 - j;
          mirror[i][j]=array[ii][jj];
       }
    }


    cout << "mirrored: " << endl;
    /*for(int i=0; i<row; i++)
   {
         for(int  j=0; j<col; j++)
        {
           cout << mirror[i][j] << " " ;
        }
        cout << endl;
    }
*/

    cout << "mirrored: " << endl;
    for(int i=0; i<col; i++){
            for(int  j=0; j<row; j++)
    {
        cout << mirror[i][j] << " " ;

    }
    }
    cout<<endl;

    return 0;
}
 
 


