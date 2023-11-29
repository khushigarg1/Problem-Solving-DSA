#include<bits/stdc++.h>
using namespace std;

template<typename T >
class Vector
{
    int current_size;
    int max_size;
    T *array;
    public :
        Vector()
        {
            current_size = 0;
            max_size = 1;
            array = new T[max_size];
        }
        Vector push_back(const T d)
        {
            if(current_size == max_size)
            {
                // if array is full
                T *oldarray = array;
                array = new T [2*max_size];
                max_size = 2 * max_size;
                for(int i = 0 ; i < current_size; i++)
                {
                    array[i] = oldarray[i];
                }
                // delete the old memory
                delete [] oldarray;
            }
            array[current_size] = d;
            current_size++; 
        }
        Vector pop_back()
        {
            current_size--;
        }
        
        T front() const
        {
            return array[0];
        }

        T back()const
        {
            return array[current_size-1];
        }

        bool empty() const
        {
            return current_size ==0;
        }

        int capacity() const
        {
            return max_size;
        }

        T at(const int i)
        {
            return array[i];
        }

        int size()
        {
            return current_size;
        }
        //operator overloading
        T operator[] (const int i)
        {
            return array[i];
        }

};
int main(){
    // Vector v;
    Vector <char> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back();
    v.push_back(5);
    v.push_back(6);

    cout <<"capacity " <<v.capacity()<<endl;
    for(int i =0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
return 0;
}