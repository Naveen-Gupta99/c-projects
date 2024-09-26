#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//<<-- store teachers details -->>

// class principal{
//     public:
//         string collageNme;n
// }

// class Teacher :public principal                   <<--ingeritance principal deatil-->>
// {
// private:
//     double salary;

// public:
//     string name;
//     string dep;
//     string subject;

//     void changeDep(string newDep){
//         dep = newDep;
//     }
// };

// int main(){
//     Teacher t1;
//     t1.name = "Naveen kr Gupta";
//     //t1.salary = "40000";
//     t1.subject = "C++";

//     cout<<t1.dep<<endl;

//     return 0;

// }

//<<--  store students college details -->>

// class student
// {
// public:
//     string name;
//     double* cgpaPtr;

//     student(string name , double cgpa){
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//         //this->cgpa = cgpa;
//     }
//     ~student(){
//         cout<<"delete everything/n";
//         delete cgpaPtr;
//     }

//     void getInfo(){
//         cout << "name : "<< name << endl;
//         cout << "cgpa : "<< *cgpaPtr << endl;

//     }

// };

// int main(){
//     student s1("Naveen gupta", 8.5);
//     s1.getInfo();
//     student s2("Lokesh kumar" , 8.5);
//     s2.getInfo();
//     student s3("Adarsh patel" , 8.5);
//     s3.getInfo();

//     return 0;
// }

//<<-- use of struct is store value of employee -->>  <<-- union -->> <<-- enum -->>

// #include <iostream>

// // Define a struct
// struct Person {
//     std::string name;
//     int age;
//     float height;

//     // Member function (can be included like in classes)
//     void printDetails() {
//         std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << std::endl;
//     }
// };

// int main() {
//     // Create an instance of the struct
//     Person person1;

//     // Assign values to the struct members
//     person1.name = "John Doe";
//     person1.age = 25;
//     person1.height = 5.9;

//     // Access and print struct members
//     person1.printDetails();

//     return 0;
// }

//<<-- call by refrence using pointer and & this -->>

//  #include <iostream>

// // Function that swaps two integers using call by reference
// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int a = 10, b = 20;

//     std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

//     // Call the function using call by reference
//     swap(a, b);

//     std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

//     return 0;



                 //<<-- file I/O -->>


// int main()
// {
//     string st = "Naveen gupta";
//     ofstream out("simpal.txt");      //<<-- write opration -->>
//     out << st;
//     out.close();



                   //<<-- 2nd methode -->

// int main(){
//     ofstream out;
//     out.open("simpal.txt");
//     out<<"my name is Naveen gupta\n";
//     out.close();

//    return 0;
                       //<<-- read opration -->>

int main(){
    ifstream in("simpal.txt");
    string st; 
    in>>st;
    cout<<st<<endl;

    in.close();

    return 0;
}

                //<<-- 2nd methode -->>
// int main(){
//     ifstream in;
//     string st;
//     in.open("simpal.txt");
//     getline(in , st);
//     cout<<st<<endl;

//     in.close();



//     return 0;