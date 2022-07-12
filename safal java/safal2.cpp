#include <iostream>

using namespace std;
int main()
{
    int num[40];
    std::cout << "Enter any 10 Numbers" << std::endl;
for(int i=0; i<10; i++)
{
    cin>>num[i];
}
std::cout << "The numbers are" << std::endl;
for(int i=0; i<100; i++)
{
    std::cout << num[i] << std::endl;
}
  return 0;
}
