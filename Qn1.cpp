#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void operation(vector<int> &v){
    for (int i = 1; i < v.size(); i++) {
        v[i] = v[i] + v[i-1];
        
    }
    return;
}

int main(){

    int num;
    cout<< "How many size: ";
    cin>> num;
  
    vector<int> vt;

    cout<<"Enter the number of value: ";
    for (int i = 0; i < num; i++)
    {
        int element;
        cin>> element;
        vt.push_back(element);

    }

    operation(vt);

    for (int i = 0; i < num; i++)
    {
        cout << vt[i] << " ";
    }

    return 0;
}

