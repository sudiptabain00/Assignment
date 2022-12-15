#include <bits/stdc++.h>
#include <vector>
using namespace std;

void minimum_number_of_moves(vector<int> &seats, vector<int> &students)
{
    int ans = 0;
    sort(begin(seats), end(seats));
    sort(begin(students), end(students));

    for (int i = 0; i < seats.size(); ++i){
        ans = ans + abs(seats[i] - students[i]);
    }
    cout << ans;

}

int main()
{
    int num;
    cout << "How many size: ";
    cin >> num;

    vector<int> seats;
    cout << "Enter the number of value for seats: ";
    for (int i = 0; i < num-1; i++)
    {
        int element;
        cin >> element;
        seats.push_back(element);
    }
    
    vector<int> students;
    cout << "Enter the number of value2 for students: ";
    for (int i = 0; i < num-1; i++)
    {
        int element2;
        cin >> element2;
        seats.push_back(element2);
    }
    
    minimum_number_of_moves(seats,students);
    
    return 0;
}

//    int ans =  minimum_number_of_moves(seats,students);
    // //    int ans =  minimum_number_of_moves(vector<int>& seats, vector<int>& students);
    //    cout<< ans;

/*#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int k)
{
    int res = INT_MIN;
    // Traverse all the subarray of size k one by one
    for (int i = 0; i <= n - k; i++)
    {
        int minele = INT_MAX;
        // traverse the current subarray
        for (int j = i; j < i + k; j++)
            minele = min(minele, arr[j]);

        res = max(res, minele);
    }

    return res;
}
int main() {

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << solve(arr, n, k) << endl;
    return 0;
}*/
