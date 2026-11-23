#include<iostream>
 #include<string>
using namespace std;
class Student
{
 private:
 string name;
 int roll;
 public:
 void setData(string name,int roll)
 {
 this->name = name;
 this->roll = roll;
 }
 friend void show(Student obj);
};
void show(Student obj)
{
 cout<<"Name : "<<obj.name<<endl;
 cout<<"Roll No. : "<<obj.roll<<endl;
}
int main()
{
 Student obj;
 obj.setData("Raj",10);
 show(obj);
 return 0;
} 