/*#include<iostream>
#include<string>
using namespace std;

int main(){

    string kamal;

    cin>>kamal;
    cout<<kamal<<endl;

    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string kamal(5,'k');
    // cout<<kamal<<endl;

    // string kamal = "Kamal kansal";
    // cout<<kamal<<endl;

    // string kamal;
    // getline(cin,kamal);
    // cout<<kamal<<endl;


    return 0;
}*/
// APPEND THE TWO STRINGS.

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string k1 = "Fam";
//     string k2 = "ily";

//     k1.append(k2);  
//     cout<<k1<<endl;
    
//     return 0;
// }
// Sort a given string.

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

//     string k;
//     getline(cin,k);

//     sort(k.begin(),k.end());
//     cout<<k<<endl;

//     return 0;
// }
// Convert the string into the upper case or lower case.
#include<bits/stdc++.h>
using namespace std;

int main(){
 
    string k;
    getline(cin,k);

    transform(k.begin(), k.end(), k.begin(), :: tolower);
    cout<<k<<endl;

    transform(k.begin(), k.end(), k.begin(), :: toupper);
    cout<<k<<endl;


    return 0;
}
/*#include<algorithm>
#include<iostream>
#include<string>

int main(){

    string s = "kamal";
    s.substr(1);
    cout<<s<<endl;

    return 0;
}*/