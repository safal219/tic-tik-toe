#include <iostream>

using namespace std;
 int main()
 {
     /*
    int arr[] ={1,3,6};
    int marks[6];
    for (int i=0; i<6;i++)
    {
        cout<<"Enter the marks of "<<i<<"th students"<<endl;
        cin >>marks[i];
    }
 for (int i=0; i<6; i++)
 {
     cout<<"The Marks of student in array form is "<<marks[i]<<endl;
 }
 */
 int arr2d[2][3] = {
     {1,2,3},
     {4,5,6}
     
 };
 for ( int i=0; i < 2; i++ )
 {
     for ( int j=0; j < 3; j++ )
     {
         cout<<"The value at "<<i<<" and "<<j<<" is "<<arr2d[i][j]<<endl;
     }
 }
    return 0;
}