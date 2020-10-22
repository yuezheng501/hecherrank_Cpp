#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>
class Person{
    public:
    int age;
    string name;
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor: public Person{
    int publications;
    public:
    static int cur_id;
    void getdata(){
        cin>>name>>age>>publications;
        cur_id++;
    } 
    void putdata(){
        cout<<name<<' '<<age<<' '<<publications<<' '<<cur_id<<endl;
    }
};
class Student: public Person{
    int marks[6];
    public:
    static int cur_id;
    void getdata(){
        cin>>name>>age;
        for (int i=0; i<6; i++) {
            cin>>marks[i];
        }
        cur_id++;
    } 
    void putdata(){
        int sum = 0;
        for (int i=0; i<6; i++) {
            sum+=marks[i];
        }
        cout<<name<<' '<<age<<' '<<sum<<' '<<cur_id<<endl;
    }
};
int Professor::cur_id = 0;
int Student::cur_id = 0;

int main(){
