/*#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>

void getInput(std::vector<int>& list);

int main()
{
    int dim{};

    std::cout << "enter number: " << '\n';
    std::cin >> dim;

    std::vector <int> list(dim);

    getInput(list);


}


void getInput(std::vector<int>& list)
{
    for(int i = 0; i < list.size(); i++)
    {
        std::cout << "loc["<<i<<"] ";
        std::cin >> list[i];
    }

    for(int i = 0; i < list.size(); i++)
    {
        std::cout << i ;
        //std::cin >> list[i];
    }

}*/

#include <iostream>
#include <vector>

using namespace std;

// return type vector
vector<int> fun(vector<int> v)
{
    vector<int> s;
    for (int i = 0; i < v.size(); i++)
        s.push_back(v[i] * 2);
    return s; // return vector
}

int main()
{
    vector<int> inV, kV;
    inV.push_back(1);
    inV.push_back(2);
    inV.push_back(3);
    kV = fun(inV); // function call
    for (int i = 0; i < kV.size(); i++)
        cout << kV[i] << " ";
    return 0;
}

// /*
//   Program in C++ to check if two arrays are equal or not using hashing method.
// */
// #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;

// /*
//   This function will return "true" if firstArray[] and secondArray[] have the
//   same elements.
// */
// bool ifArrayEqual(int firstArray[], int secondArray[], int a, int b)
// {
//    // To check if the lengths of firstArray[] and secondArray[] are equal.
//    if (a != b)
//    {
//       return false;
//    }

//    /*
//        To store the firstArray[] elements and their respective frequency count
//        in hashmap.
//    */
//    unordered_map<int, int> ht;
//    for (int i = 0; i < a; i++)
//    {
//       ht[firstArray[i]]++;
//    }

//    /*
//       To traverse through the secondArray[] elements and find if their occurrence
//       is the same number of times or not.
//    */
//    for (int i = 0; i < a; i++) {
//        /*
//            To check if an element is present in secondArray[], but absent in
//            firstArray[].
//        */
//        if (ht.find(secondArray[i]) == ht.end())
//            return false;

//        /*
//            To check if an element appears more times in secondArray[] than it
//            appears in firstArray[].
//        */
//        if (ht[secondArray[i]] == 0)
//           return false;

//        // To decrease the count of secondArray[] elements in the unordered map.
//        ht[secondArray[i]]--;
//    }
//    return true;
// }

// // Driver Code
// int main()
// {
//    int m, n;
//    cout << "\nEnter the size of arrays : ";
//    cin >> m >> n;
//     int firstArray[m], secondArray[n];
//    cout << "\nEnter the first array elements : ";
//    for(int i=0; i<m; i++)
//    {
//        cin >> firstArray[i];
//    }
//     cout << "\nEnter the second array elements : ";
//    for(int i=0; i<n; i++)
//    {
//        cin >> secondArray[i];
//    }
//    int a = sizeof(firstArray) / sizeof(int);
//    int b = sizeof(secondArray) / sizeof(int);
//    if (ifArrayEqual(firstArray, secondArray, a, b))
//    {
//        cout << "\nTrue, the two arrays are equal.\n";
//    }
//    else
//    {
//        cout << "\nFalse, the two arrays are not equal.\n";
//    }
//    return 0;
// }
