//program for mutiple inheritance....
#include<iostream>
using namespace std;
class base
{
private:
  int rollno;
  int age;
public:
  void getdata()
  {
    cout<<"enter rollno:"<<endl;
    cin>>rollno;
    cout<<"enter age:"<<endl;
    cin>>age;
  }
  void display()
  {
    cout<<"Roll no. is ="<<rollno<<endl;
    cout<<"Age is="<<age<<endl;
  }
};
class derived1: public base
{
private:
  char name[20];
public:
  void readdata()
  {
    getdata();
    cout<<"enter name:"<<endl;
    cin>>name;
  }
  void showdata()
  {
    display();
    cout<<"Name is:"<<name<<endl;
  }
};
class derived2: public base
{
private:
  int marks;
public:
  void get()
  {
    cout<<"enter marks out of 100"<<endl;
    cin>>marks;
  }
  void show()
  {
    cout<<"marks are:"<<marks<<endl;
  }
};
int main()
{
  derived1 d;
  derived2 d2;
  d.readdata();
  d2.get();
  d.showdata();
  d2.show();
  return 0;
}
