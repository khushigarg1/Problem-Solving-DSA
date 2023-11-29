/* fractional - greedy prblm
0-1 knapstack - dynamic prblm
wap to implement fractional knapstack using greedy approach
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, capacity;
//     cin >> n >> capacity;
//     int p[n], w[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p[i] >> w[i];
//     }
//     int object[n];
//     for(int i = 0 ; i < n ; i++)
//     {
//         object[i] = p[i]/w[i];
//     }
//     // sort(object, object+n);

//     // int max = INT_MAX;

//     // int remaincap[n];
//     int x[n];
//     for (int i = 0; i < n; i++)
//     {
//         if(w[i] < capacity)
//         {
//             x[i] = 1;
//             capacity = capacity - w[i]*x[i];
//         }
//         if(w[i] > capacity)
//         {
//             x[i] = capacity/w[i];
//             capacity = capacity - w[i]*x[i];
//         }
//         if(capacity == 0)
//         {
//             x[i] = 0;
//         }
//     }
//     int total = 0;
//     for(int i = 0 ; i < n ; i++)
//     {
//         total += p[i]*x[i];
//     }
//     cout << total << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class object
{
public:
    int profit;
    int weight;
};
bool compare(object &o1, object &o2)
{
    if ((double)(o1.profit) / (o1.weight) > (double)(o2.profit) / (o2.weight))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, capacity;
    cout << "enter number of elements: ";
    cin >> n;
    cout << "enter capacity of knapstack: ";
    cin >> capacity;
    // int p[n], w[n];
    vector<object> arr(n);
    cout << "Profit:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].profit;
    }
    cout << "Weight:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].weight;
    }
    sort(arr.begin(), arr.end(), compare);
    cout << "sorted objects : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].profit << " ";
        cout << arr[i].weight << " ";
        cout << endl;
    }
    // int max = INT_MAX;
    // int remaincap[n];
    // int x[n];
    vector<double> x(n);
    int tempcapacity = capacity;
    for (int i = 0; i < n; i++)
    {
        if (tempcapacity > 0)
        {
            if (arr[i].weight < tempcapacity)
            {
                x[i] = 1;
                tempcapacity -= arr[i].weight * x[i];
            }
            else if (arr[i].weight > tempcapacity)
            {
                x[i] = (double)tempcapacity / arr[i].weight;
                tempcapacity -= arr[i].weight * x[i];
                // tempcapacity = 0;
            }
        }
        else
        {
            x[i] = 0;
        }
        // cout << arr[i].profit <<" "<< x[i] << " " << tempcapacity <<endl;
    }
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += (arr[i].profit * x[i]);
        cout << total << " ";
    }
    cout << endl;
    cout << total << endl;
    return 0;
}