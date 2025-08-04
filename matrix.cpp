#include <iostream>
using namespace std;

class Matrix
 { 
     int **p; // Pointer to matrix
     int d1, d2; // Dimensions 

public:
      Matrix() // Default constructor 
{
    d1=0;
    d2=0;
} 
Matrix(int x, int y) // Parameterized constructor
{
d1 = x; 
d2 = y; 
p = new int*[d1];
    for (int i = 0; i < d1; i++) 
p[i] = new int[d2];
} 
Matrix(const Matrix &m) // Copy constructor
 { d1 = m.d1; 
d2 = m.d2; 
p = new int*[d1]; 
for (int i = 0; i < d1; i++) 
{ 
p[i] = new int[d2];
 for (int j = 0; j < d2; j++)
 p[i][j] = m.p[i][j]; 
}
} 
~Matrix() // Destructor
{ 
for (int i = 0; i < d1; i++) 
delete[] p[i]; 
delete[] p; 
}
 void get_data()
 { 
 cout << "Enter matrix elements row by row:\n"; 
 for (int i = 0; i < d1; i++)
 for (int j = 0; j < d2; j++)
 { 
     cin >> p[i][j]; 
} 
 }
 void display() 
{ 
    cout << "Matrix:\n";
 for (int i = 0; i < d1; i++) 
{ 
for (int j = 0; j < d2; j++) 
cout << p[i][j] << " ";
cout << endl; 
} 
} 
 }; 
int main() 
{ 
    int m, n; 
cout << "Enter size of matrix: "; 
cin >> m >> n; 
 Matrix A(m, n);
 A.get_data(); 
 A.display(); 
 Matrix B = A; // Copy constructor with assignment operator
 B.display();
 return 0; 
}



/*
Enter size of matrix: 3
2
Enter matrix elements row by row:
7
5
3
9
12
15
Matrix:
7 5 
3 9 
12 15 
Matrix:
7 5 
3 9 
12 15 
*/
