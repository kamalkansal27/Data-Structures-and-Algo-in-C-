#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // write to a file 
    // ofstream out("filehandling.txt");
    // string s;
    // getline(cin, s);
    // out<<s;

    // out.close();

    // reading in a file
    ifstream in("filehandling.txt");
    string k;
    // getline(in, k);
    while(in.eof() == 0)
    {
        getline(in, k);
        cout<<k<<endl;
    }

    in.close();

    return 0;
}