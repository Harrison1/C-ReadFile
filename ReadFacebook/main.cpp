#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <array>
#include <iomanip>
#include <sstream>
#include <string>
#include <stdio.h>

int rowA = 0;
int colA = 0;

using namespace std;

int main(int argc, const char * argv[])
{
    string lineA;
    int x;
    int arrayA[10][10] = {(0)};
    string filename;
    ifstream dataObject;
    
    cin >> filename;
    dataObject.open(filename);
    
    if(dataObject.fail())
    {
        cerr << "cant find file";
        exit(1);
    }
    
    
    cout << "\n" << endl;
    
    while(dataObject.good())
    {
        while(getline(dataObject, lineA)) {
            istringstream streamA(lineA);
            colA = 0;
            while(streamA >> x) {
                arrayA[rowA][colA] = x;
                colA++;
            }
            rowA++;
        }

    }

    
    cout << "num of rows ==== " << rowA << endl;
    cout << "num of cols ==== " << colA << endl;
    cout << " " << endl;
    
    for (int i = 0; i<rowA; i++)
    {
        for(int j = 0; j<colA; j++)
        {
            cout << left << setw(6) << arrayA[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}