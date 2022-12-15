#include <bits/stdc++.h>
#include<vector>
using namespace std;

void pair_sum_operation(vector<int> &v)
{
    sort(v.begin(), v.end());
    int size = v.size();
    int sum_result = 0;
    for (int i = 0; i < size; i = i + 2)
    {
        sum_result = sum_result + v[i];
    }

    cout << "Result: " << sum_result << endl;
}
int main()
{
    int num;
    cout << "How many size: ";
    cin >> num;

    vector<int> vt;

    cout << "Enter the number of value: ";
    for (int i = 0; i < num; i++)
    {
        int element;
        cin >> element;
        vt.push_back(element);
    }
    pair_sum_operation(vt);

    return 0;
}