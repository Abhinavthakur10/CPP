#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> vect(5, 1);   s//we created a vector integer type ,, which having size of 5 and intizlize all value with 1 which is zero by
    //                         default

    vector<int> last(vect); // Here, vector (vect) is copied to the another vector (last)
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;
    cout << "Capacity--" << v.capacity() << endl;
    // Capacity will tell the space assign for the vector, and it will double its capcity/size when its value is full

    v.push_back(1);
    cout << "Capacity--" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity--" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity--" << v.capacity() << endl;

    cout << "Size::" << v.size() << endl;
    // size will tell the size of the vector ( the elements in the vector)

    cout << "Elment at Index" << v.at(2) << endl; // Tells Elemnet at any index

    cout << "Front element " << v.front() << endl; // Tells the element at front and end of vector
    cout << "End element " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    { // To print an vector
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // to remove last element in the vector

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // we can clear the size of vector by using of (clear) but capacity will remain same
    cout << "Size--" << v.size() << endl;
    cout << "Capacity-" << v.capacity() << endl;

    v.clear();

    cout << "Size--" << v.size() << endl;
    cout << "Capacity-" << v.capacity() << endl;
}
