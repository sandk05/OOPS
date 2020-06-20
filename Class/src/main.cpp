#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here. 
Read statement for specification.
*/
class Student{
  public:
    void set_age(int age){mage = age;}
    int  get_age(){return mage;}
    void set_standard(int standard){mstandard = standard;}
    int  get_standard(){return mstandard;}
    void set_first_name(string first_name){mfirst_name = first_name;}
    string get_first_name(){return mfirst_name;}
    void set_last_name(string last_name){mlast_name = last_name;}
    string get_last_name(){return mlast_name;}
    string to_string(){
        return ::to_string(mage)+","+mfirst_name+","+mlast_name+","+::to_string(mstandard);
    }
    
  private:
    int mage;
    int mstandard;
    string mfirst_name;
    string mlast_name;
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
