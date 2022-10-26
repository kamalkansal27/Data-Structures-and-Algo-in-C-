/*#include<bits/stdc++.h>
using namespace std;

#define n 100

class stacks{

    int* arr;
    int top;

    public:
    stacks(){
        arr = new int [n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overloaded."<<endl;
        }
        else{
            top ++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Nothing to PoP here ,stack is empty."<<endl;
        }
        else{
            top--;
        }
    }
    int Top(){
        if(top == -1){
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    stacks st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;


    return 0;
}*/

// ********************REVERSE A SENTENCE USING STACKS****************************************
/*#include<bits/stdc++.h>
using namespace std;

void ReverseSentence(string s){

    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word = "";
        while(s[i] ==' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){

    string s = "Hey! how are you doing?";
    ReverseSentence(s);
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

void ReverseSentence(string s){

    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word = "";
        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}

int main(){

    string s;
    cout<<"Enter the Sentence : ";
    getline(cin , s);

    ReverseSentence(s);
        

    return 0;
}