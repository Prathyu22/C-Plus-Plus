//https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    public:
    int age1;
    int std;
    string f_name;
    string l_name;
    void set_age(int age)
    {
        age1 = age;
    }
    void set_standard(int standard)
    {
        std = standard;
    }
    void set_first_name(string first_name)
    {
        f_name = first_name;
    }
    void set_last_name(string last_name)
    {
        l_name = last_name;
    }
    
    int get_age()
    {
        return age1;
    }
    int get_standard()
    {
        return std;
    }
    string get_last_name()
    {
        return l_name;
    }
    string get_first_name()
    {
        return f_name;
    }
    string to_string()
    {
        stringstream a;
        a<<age1;
        stringstream ss;
        ss<<std;
        return a.str()+","+f_name+","+l_name+","+ss.str();
    }
    
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