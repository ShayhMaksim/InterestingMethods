#include <algorithm>
#include <list>
#include <iostream>

std::list<int> lst={1,2,3,4,5,6};

    auto first=std::stable_partition(lst.begin(),lst.end(),[](int v) { return v>3;});

    lst.erase(first,lst.end());

    //4,5,6 
    for (auto i : lst)
    {
        std::cout << i <<std::endl;
    }
