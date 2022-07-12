#include <iostream>

using namespace std;
 int main()
 {
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
    return 0;
}