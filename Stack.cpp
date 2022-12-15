#include <bits/stdc++.h>

using namespace std;

void display(int a)
int main(){

    // string st;
    // cout<<"Enter the string you want to reverse: ";
    // cin>>st;

    // stack<char> s;

    // for (int i = 0; i < st.length(); i++)
    // {
    //     s.push(st[i]);

    // }

    // cout<< s.size() << endl;
    
    // while (!s.empty())
    // {
    //     cout<< s.top();
    //     s.pop();

    // }

    stack <int> s;
    s.push(10);
    s.push(5);
    s.push(7);
    s.push(27);
    s.push(70);
    

    cout<< s.top() << " " << s.size() << endl;
    display(s);
   
   

    s.pop();
    cout<< s.top() << " " << s.size()<< endl;

    if(s.empty()){
        cout<<"The Stack is empty......Please insert!!!!!"<<endl;
    }
    else
    {
         cout<<"The Stack is nott empty!"<<endl;
    }
    
    return 0;
}