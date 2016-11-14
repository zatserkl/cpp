#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using std::cout;      using std::endl;

void iota_vector()
{
    std::vector<int> V(10);

    std::iota(V.begin(), V.end(), 7);
    std::copy(V.begin(), V.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl; 
}

void iota_array()
{
    int a[10];

    std::iota(a, a+10, 7);
    std::copy(a, a+10, std::ostream_iterator<int>(cout, " "));
    cout << endl; 
}

int main()
{
    cout<< "iota with vector:" <<endl;
    iota_vector();

    cout<< "iota with array:" <<endl;
    iota_array();

    return 0;
}
