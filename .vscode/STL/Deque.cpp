#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // fromation of deque( which is dynamic)
    deque<int> d;

    // we can push element from from front as well as back in deque
    d.push_back(3);
    d.push_front(4);

    for (int i : d)
    {
        cout << i << " ";
    }
    // romoving element using pop from front and back  in deque
    d.pop_front();
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    
    // print front and last elemnent
    cout<<"front"<<d.front()<<endl;
    cout<<"Back"<<d.back()<<endl;

    cout<<"Empty or not "<< d.empty()<<endl;
    

    cout<<"Before erase"<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+1);
    // we gave range from begin to its first elment to erase 
    
    // after earase will only erase the elment from deque but the max size will same means (location given to the deque will remain 
    // same after the erase)
    cout<<"After erase"<< d.size()<<endl;

} 