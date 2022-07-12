#include <iostream>

using namespace std;
class simple
{
    private:
    float p,t,r;
    public:
    void getdata();
    void showdata();
};

void simple::getdata()
{
    std::cout << "Enter Principle:" << std::endl;
    cin>>p;
    std::cout << "Enter Time:" << std::endl;
    cin>>t;
    std::cout << "Enter Rate:" << std::endl;
    cin>>r;
}
void simple::showdata()
{
    std::cout << "---------------------------------------------------------------------------------------------------------"<<endl;
    std::cout << "The simple interest is " <<(p*t*r)/100;
};
int main()
{
    simple s;
    s.getdata();
    s.showdata();
    return 0;
}
