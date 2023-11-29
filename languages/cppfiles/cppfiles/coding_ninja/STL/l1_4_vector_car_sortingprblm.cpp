#include<bits/stdc++.h>
using namespace std;

class Car
{
    public :
        string car_name;
        int x , y;
        Car()
        {

        }
        Car(string n ,int x , int y)
        {
            car_name = n;
            this-> x = x;
            this-> y = y;
        }
        int dist()
        {
            return ((x*x) + (y*y));
        }
};

bool compare(Car A , Car B)
{
    int d1 = A.dist();
    int d2 = B.dist();
    if(d1 == d2)
    {
        return A.car_name < B.car_name;
    }
    return d1 < d2;
}

int main()
{
    int n_cabs;
    cin >> n_cabs;
    vector <Car> v;

    for(int i = 0 ; i < n_cabs ; i++)
    {
        int x , y;
        string name;
        cin >>name >> x >> y;
        Car temp(name , x , y);
        v.push_back(temp);
    }
    sort(v.begin() , v.end() , compare);

    //for each loop
    for(auto c :v)
    {
        cout << "car " << c.car_name <<" distance " << c.dist() << " location "<< c.x <<"," << c.y <<endl;
    }

    return 0;
}