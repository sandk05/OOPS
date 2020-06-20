#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected: 
    string name;
    int age;
    public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};
class Professor: public Person{
    private:
    int publications;
    int cur_id;
    static int objCount;
    public:
    Professor()
    {
        objCount++;
    }
    void getdata()
    {
        cin >>name >> age >> publications;
        cur_id = objCount;
    }
    void putdata(){
        cout <<name << " " <<age <<" " <<publications <<" " <<cur_id <<endl;
    }
};
class Student: public Person{
    private :
    int marks[6];
    static int objCount;
    int cur_id;
    public:
    Student()
    {
        objCount++;
    }
    void getdata()
    {
        cin >>name >>age >>marks[0] >>marks[1]>>marks[2] >>marks[3] >>marks[4]>>marks[5];
        cur_id = objCount;
    }
    void putdata()
    {
        int sum = 0;
        for(int i = 0;i <6;i++){
            sum+=marks[i];
        }
        cout <<name <<" "<<age <<" "<<sum <<" "<<cur_id<<endl; 
    }
};

int Student::objCount = 0;
int Professor::objCount = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
