// You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.
// How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
        int j = 1;
    while (j <= T)
    {
        int N,M,sum =0;
        cin >> N >> M;
        int arr[N];
        for(int i = 1 ; i <= N ; i++)
        {
            cin>> arr[i];
            sum+=arr[i];
        }
        int div = sum / M;
        cout << div<<endl;
        int ans = (sum - (M * div));
        cout << ans<<endl;
        j++;
    }
    return 0;
}