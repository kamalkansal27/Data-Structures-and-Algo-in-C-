/*#include<bits/stdc++.h>
using namespace std;
//  **********************************Structure*******************************
/*Structure is basically the combination of different types of the data types. it is just like
the class. every data member is having different memory slot here.*/
// struct employee{
//     char name;
//     int Eid;
// };
union employee{
    char name;
    int Eid;
};

int main(){

    // struct employee kamal;
    // kamal.name = 'K';
    // kamal.Eid = 456464;

    // *********************UNIONS************************
    /*In this type of data structure , only one type of data member can be used. Memory is being 
    share with in all the data members.*/
 
    union employee kamal;
    kamal.Eid = 65; 
    kamal.name = 'k';
    cout<<kamal.name<<endl;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){

 // Enums 
    enum meal{breakfast , lunch , dinner};

   

    cout<<breakfast<<endl;
    cout<<lunch<<endl; 
    cout<<dinner<<endl;

   

    return 0;
}