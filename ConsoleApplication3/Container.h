#pragma once


#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

template <typename T>
class Container
{
private:
    vector<T> types;

public:
    void sorting()
    {
        for (int i = 0; i < types.size(); i++)
        {
            for (int j = i + 1; j < types.size(); j++)
            {
                if (types[j] < types[i])
                {
                    swap(types[i], types[j]);
                }
            }
        }
    }

    void add(const T& value) // add element to vector
    {
        types.push_back(value);
    }

    void remove(const T& removeValue) // delete element from vector by given value
    {
        for (int i = 0; i < types.size(); i++)
        {
            if (types[i] == removeValue)
            {
                types.erase(types.begin() + i);
            }
        }
    }

    void findElem(const T& findValue) // find element in container by given value
    {
        if (find(types.begin(), types.end(), findValue) != types.end()) 
        {
            cout << "The element was found!\n\n";
            return;
        }
        cout << "The element wasn't found!\n\n";
    }

    void display()
    {
        for (const T& item : types) 
        {
            cout << item << " ";
        }
        cout << "\n\n\n\n";
    }



};
