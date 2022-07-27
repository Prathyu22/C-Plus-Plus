//https://www.hackerrank.com/challenges/virtual-functions/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
  public:
    string name;
    int age;
    virtual void getdata()
    {
       cin>>name;
       cin>>age;
    }
    virtual void putdata()
    {
       cout<<name<<" ";
       cout<<age<<" ";
    }
};

class Professor : public Person {
   private:
    int publications;
    static int cur_id;
    int id;
    
   public:
    Professor()
    {
        cur_id++;
        id = cur_id;
    }
    
    void getdata()
    {
        Person::getdata();
        cin>>publications;
    }
    
    void putdata()
    {
        Person::putdata();
        cout<<publications<<" "<<id<<endl;
    }
};

int Professor::cur_id = 0;

class Student : public Person{
  private:
  #define SIZE 6
  vector<int> v;
  static int cur_id;
  int id;
  
  public:
  Student()
  {
      cur_id++;
      id = cur_id;
  }  
  void getdata()
  {
      Person::getdata();
      for(int i=0; i<SIZE; i++)
      {
          int score;
          cin>>score;
          v.push_back(score);
      }
  }
  
  void putdata()
  {
      int marks_sum = 0;
      for(int &a : v)
          marks_sum += a;
      Person::putdata();
      cout<<marks_sum<<" "<<id<<endl;
  }
};

int Student::cur_id = 0;

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
