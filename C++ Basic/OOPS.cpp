/*#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    // To make the data members publically used in the main function as well.
    string name;
    int age;

};

int main(){

    // student a;                 // by object , we access the class data members or member function.
    // a.name = 'Kamal kansal';
    // a.age = 19;
    
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"Name ";
        getline(cin, arr[i].name);
        cout<<"Age ";
        cin>>arr[i].age;
    }

    for(int i=0;i<3;i++){
        cout<<"Name - "<<arr[i].name<<endl;
        cout<<"Age - "<<arr[i].age<<endl;
    }

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    int age;
    
    void setname(string s){
        name = s;
    }
    void setage(int n){
        age = n;
    }
    void printinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main(){

    student arr[3];
    string s;
    for(int i=0;i<3;i++){
        cout<<"Name - ";
        cin>>s;
        arr[i].setname(s);
        cout<<"Age - ";
        cin>>n;
        arr[i].setage(n);
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }


    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    
    student(string s ,int n){
        name = s;
        age = n;
    }
    void getname(){
        cout<<name<<endl;
        cout<<age<<endl;        
    }
};

int main(){
      
    student a("Kamal",18);
    a.getname();
   
    return 0;
}*/
// CONSTRUCTORS & DESTRUCTORS.
/*#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    // Parameterised Constructors - Parametres are given in this Const..
    student(string n , int a , int g){
        cout<<"Parameterised Constructor."<<endl;
        name = n;
        age = a;
        gender = g;
    }
    // Default Constructor - Empty
    student(){
        cout<<"Default Constructor."<<endl;
        cout<<"Name - ";
        cin>>name;
        cout<<"Age - ";
        cin>>age;
        
    }
    // Copy constructor
    student(student &a){
        cout<<"Copy Constructor."<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){  // Called when it goes out of int main function.
        cout<<"Distructor Called."<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
            return false;
        
    }

    void getinfo(){
        cout<<"Name - "<<name<<endl;
        cout<<"Age - "<<age<<endl;
        cout<<"Gender - "<<gender<<endl;
    }
};

int main(){

    student a("Kamal",18,1);
    a.getinfo();
    student b;
    b.getinfo();
    student c(a);
    c.getinfo();

    if(c == a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same."<<endl;
    }

    return 0;
}*/
// Encapsulation
/* This is used to protect the data or to hide the data from the users and we know some data
is private (only accessed in the parent class ) , some data is protected(can be accessed in the
parent and inheritance class) and some of the data is public( can be accessed inside or outside
the class).*/

/*#include<bits/stdc++.h>
using namespace std;

class drawing_room{
    public:
    int sofa_sets;
    void fuctpb(){
        cout<<"It is Public.\n";
    }
    private:
    int documents;
    void fuctpr(){
        cout<<"It is Private.\n";
    }
    protected:
    int file;
    void fuctpt(){
        cout<<"It is Protected\n";
    }
};

int main(){
     
    drawing_room bnda;
    bnda.fuctpt(); 

    return 0;
}*/
/*Inheritance - The process of deriving the attributes of the parent (Base)
class to the child class.*/
/*#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void fuctpb(){
        cout<<"Public and Inherited"<<endl;
    }
    private:
    void fuctpr(){
        cout<<"Private and Not Inherited"<<endl;
    }
    protected:
    void fuctpt(){
        cout<<"Protected and Inherited"<<endl;
    }
};

class B : protected A{

};

int main(){
    
    B b;
    b.fuctpt();

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

class overloadedfunc{
    public:
    
    void fun(){
        cout<<"I am a function with no argument."<<endl;
    }
    void fun(int x){
        cout<<"I am a function with one argument."<<endl;
    }
    void fun(double x){
        cout<<"I am a function with double argument."<<endl;
    }
};
// virtual function 
class base{
    public:
    virtual void print(){
        cout<<"It is base class print function"<<endl;
    }
};
class derived : public base{
    public:
    void print(){
        cout<<"It is Derived class print function"<<endl;
    }
};

int main(){

    // overloadedfunc obj;
    // obj.fun();
    // obj.fun(4);
    // obj.fun(5.6); 

    base *baseptr;  // pointer of object = address of object.
    derived d;
    baseptr = &d;

    d.print();
    baseptr -> print();

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    
    int ID;
    int age;

    public:

    void setdata(int id , int a);
    void getdata(){
        cout<<"The ID of the Employee is "<<ID<<endl;
        cout<<"The Age of the Employee is "<<age<<endl;
    }
};

void Employee :: setdata(int id , int a){
    ID = id;
    age = a;
}

int main(){

    Employee kamal;
    kamal.setdata(45445 , 20);
    kamal.getdata();

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

class family{
    private:
    int members;
    int male;
    int female;
    string surname;

    public:
    void setdata(int m , int ml , int f , string s){
        members = m;
        male = ml;
        female = f;
        surname = s;
    }
    void getdata(){
        cout<<"Members in the family "<<members<<endl;
        cout<<"Male Members "<<male<<endl;
        cout<<"Female members "<<female<<endl;
        cout<<"Surname of the family "<<surname<<endl;
    }
};

int main(){

    family f1;
    f1.setdata(10, 5 , 5 ,"k");
    f1.getdata();


    return 0;
}*/
// Check if the number is binary or not.
/*#include<bits/stdc++.h>
using namespace std;

class binary{
    string s;
 public:
    void read(void);
    void check_binary(void);   
};

void binary :: read(void){
    cout<<"Enter the Binary Number - ";
    cin>>s;
}

void binary :: check_binary(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' || s.at(i) == '1')               
        {       
            cout<<"Correct Binary Format"<<endl;
        }
        else
        {
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
        }
        
    }
    
}

int main(){

    binary b;
    b.read();
    b.check_binary();

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int item_Id[10];
    int item_price[10];
    int counter;

    public:
    void intcounter();
    void setprice();
    void getprice();
};

void Shop ::intcounter()
{
    counter = 0;
}

void Shop ::setprice()
{
    cout << "Enter the ID number of the item - ";
    cin >> item_Id[counter];
    cout << "Enter the Price of the item " << item_Id[counter] << endl;
    cin >> item_price[counter];
    counter++;
}

void Shop ::getprice()
{
    int sum = 0;
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item " << item_Id[counter] << " is " << item_price[counter] << endl;
        sum += item_price[counter];
    }
    cout << "The sum total is" << endl;
    cout << sum << endl;
}

int main()
{

    Shop kamal_di_hatti;
    kamal_di_hatti.intcounter();
    kamal_di_hatti.setprice();
    kamal_di_hatti.setprice();
    kamal_di_hatti.setprice();
    kamal_di_hatti.getprice();

    return 0;
}*/
/*Static data member will have only one memory slot and it will be static for every data 
member but if we do not use static then every data member will have different count as shown
in the below written program.*/

/*#include <bits/stdc++.h>
using namespace std;

class employee
{
    int employee_ID;
    static int count; // by default it is intialised from 0.

public:
    void setdata(void)
    {
        cout << "Enter the Id No. of the Employee." << endl;
        cin >> employee_ID;
    
        count++;
    }
    
    void getdata(void)
    {
        cout << "The Employee Id of Employee no. "<< count << " is " << employee_ID << endl;
    }
    static void getcount(void)
    {
        cout << "The Value of the count is " << count << endl;
    }

};
int employee :: count;
int main()
{ 
    employee kamal , aryan , vinay;
    
    kamal.setdata();
    kamal.getdata();
    employee :: getcount();

    aryan.setdata();
    aryan.getdata();
    employee :: getcount();

    vinay.setdata();
    vinay.getdata();
    employee :: getcount(); 

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class employee
{
    int emp_id;
    int emp_salary;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the Id of the employee no. " << count + 1 << " - ";
        cin >> emp_id;
        emp_salary = 10000;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee no. " << count << " is - " << emp_id << endl;
        cout << "The salary of the employee no. " << count << " is - " << emp_salary << endl;
    }
};

int employee ::count;

int main()
{
    employee kk_employee[5];
    for (int i = 0; i < 5; i++)
    {
        kk_employee[i].setdata();
        kk_employee[i].getdata();
    }

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class complexnum
{
    int a;
    int b;

    public:
    void setvalue(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setvaluebysum(complexnum o1, complexnum o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printcomplex()
    {
        cout << "The comlex number formed by " << a << " and " << b << " is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complexnum num1 , num2 , num3;
    num1.setvalue(3,4);
    num1.printcomplex();

    num2.setvalue(4,5);
    num2.printcomplex();

    num3.setvaluebysum(num1 , num2);
    num3.printcomplex();    

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class complexnum
{
    int a, b;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printinfo()
    {
        cout << "The Complex number formed by " << a << " and " << b << " is " << a << " + " << b << "i" << endl;
    }

    friend complexnum sumcomplex(complexnum o1, complexnum o2);
};

complexnum sumcomplex(complexnum o1, complexnum o2)
{
    complexnum o3;
    o3.setnum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    int x, y;
    cout << "Enter the Real value - ";
    cin >> x;
    cout << "Enter the Imaginary value - ";
    cin >> y;

    int x1, y1;
    cout << "Enter the Real value - ";
    cin >> x1;
    cout << "Enter the Imaginary value - ";
    cin >> y1;

    complexnum c1, c2, c3;
    c1.setnum(x, y);
    c1.printinfo();

    c2.setnum(x1, y1);
    c2.printinfo();

    c3 = sumcomplex(c1, c2);
    c3.printinfo();

    return 0;
}*/
// multiplication of two complex number using class.
/*#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setnum(int x , int y){
        a = x;
        b = y;
    }
    void printinfo(){
        cout<<"The complex number formed is "<<a<<" + "<<b<<"i"<<endl;
    }
    void setdata_bymulti(Complex o1 , Complex o2){
        a = o1.a * o2.a;
        b = o1.b * o2.b;
    }
    friend Complex multicomplex(Complex o1 , Complex o2);
};

Complex multicomplex(Complex o1 , complex o2){
    Complex o3;
    o3.setnum(o1.a * o2.a , o1.b * o2.b);
    return  o3;
}

int main()
{
    Complex c1 , c2 , c3 , c4;
    
    c1.setnum(4,5);
    c1.printinfo();

    c2.setnum(7,8);
    c2.printinfo();

    c3.setdata_bymulti(c1,c2);
    c3.printinfo();
    
    c4 = multicomplex(c1 , c2);
    c4.printinfo();

    return 0;
}*/
// ********************************FRIEND CLASSES**************************************
/*#include <bits/stdc++.h>
using namespace std;

class complexnum;

class calculator
{
public:
    int add(int x, int y)
    {
        cout << "The sum of given two numbers is - ";
        return (x + y);
    }
    int sum_real_complex(complexnum, complexnum);
    int sum_imaginary_complex(complexnum, complexnum);
    int multi_real_complex(complexnum , complexnum);
};
class complexnum
{
    int a;
    int b;
    // This is making the individual memberfuntion as a friend of the class complexnum.
    // friend int calculator ::sum_real_complex(complexnum, complexnum);
    // friend int calculator ::sum_imaginary_complex(complexnum, complexnum);
    // friend int calculator ::multi_real_complex(complexnum , complexnum);

    // Aliter: by making the whole class calculator as a friend of the class complexnum.
    friend class calculator ;
public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printinfo()
    {
        cout << "Hence, the Complex number formed is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sum_real_complex(complexnum o1, complexnum o2)
{
    cout << "The sum of the real part of the given complex number is - ";
    return (o1.a + o2.a);
}
int calculator ::sum_imaginary_complex(complexnum a1, complexnum a2)
{
    cout << "The sum of the Imaginary part of the given complex number is - ";
    return (a1.b + a2.b);
}
int calculator ::multi_real_complex(complexnum o1 , complexnum o2)
{
    cout<<"The multiplication of the real parts of the given complex numbers is ";
    return (o1.a * o2.a);
}

int main()
{
    complexnum c1, c2;

    c1.setnum(4, 5);
    c1.printinfo();

    c2.setnum(7, 8);
    c2.printinfo();

    calculator c3;
    cout << c3.add(4, 8) << endl;
    cout << c3.sum_imaginary_complex(c1, c2) << endl;
    cout << c3.sum_real_complex(c1, c2) << endl;
    cout << c3.multi_real_complex(c1, c2) << endl;

    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class c2;

class c1
{
    int val;

public:
    void setval(int data)
    {
        val = data;
    }
    void printinfo()
    {
        cout << val << endl;
    }
    friend void swap_by_reference(c1 & , c2 & );
};

class c2
{
    int val;

public:
    void setval(int data)
    {
        val = data;
    }
    void printinfo()
    {
        cout << val << endl;
    }
    friend void swap_by_reference(c1 &  , c2 & );
};

void swap_by_reference(c1 & o1 , c2 & o2){
    int temp = o1.val;
    o1.val = o2.val;
    o2.val = temp;        
}

int main()
{
    c1 a;
    c2 b;

    a.setval(5);
    cout<<"The value before swapping is - ";
    a.printinfo();
    b.setval(8);
    cout<<"The value before swapping is - ";
    b.printinfo();

    swap_by_reference(a , b);
    cout<<"The value after swapping is - ";
    a.printinfo();
    cout<<"The value before swapping is - ";
    b.printinfo();


    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

class complexnum
{
    int a, b;

public:
    // Now , declaring the constructor.
    complexnum(void)
    {
        a = 10;
        b = 32;
        cout << "Hence, the Complex number formed is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    complexnum c;

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;

class Complex {
    int a,b;
    public:
    // Parametreised constructor.
    Complex(int x , int y){
        a = x;
        b = y;
        cout << "Hence, the Complex number formed is " << a << " + " << b << "i" << endl;
    }
};

int main(){
    
    int m , n;
    cout<<"The Real part of the complex number is - ";
    cin>>m;
    cout<<"The Imaginary part of the Complex number is - ";
    cin>>n;

    Complex c1(m ,n );

    return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printinfo()
    {
        cout << "The Coordinates of the Point is (" << x << ", " << y << ")" << endl;
    }
    int distance(point , point);
}; 
int point ::distance(point p1 , point p2){
    return (p1.x - p2.x);
}

    int main()
{

    point p(3, 4);
    p.printinfo();

    point q(2, 3);
    q.printinfo();

    distance(point p , point q);

    return 0;
}*/