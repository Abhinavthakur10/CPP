#include <iostream> // here it include iostream to the program where iostream is file which have sorce code e.g- what cout do..

using namespace std;


//////////////////////////////////           MACRO                   //////////////////////////////////////
/*
// Define a constant for the value of PI
//#define PI 3.14159       // object type macro -used to define constants

// Define a macro to print a value
//#define PRINT(x) cout << "Value is: " << x   // function (line) type macro - used to define define inline code 

#define PRINT_RECTANGLE(width, height)  \
    // used to define multiple line code using macro
    for (int i = 0; i < height; i++)    \
    {                                   \
        for (int j = 0; j < width; j++) \
        {                               \
            std::cout << "*";           \
        }                               \
        std::cout << std::endl;         \
    }

int main()
{

    //     double radius = 4.0;

    //     // Calculate the area of the circle
    //     double area = PI * radius * radius;

    //     cout << "Area of circle with radius " << radius
    //          << " is " << area;



    //     int value = 42;
    //     // Print the value using the PRINT macro
    //     PRINT(value);



    // Print a rectangle with a width of 4 and a height of 3
    PRINT_RECTANGLE(4, 3);
    return 0;
}
*/



///////////////////////////                 GLOBAL VARIABLE                    //////////////////////////////////////

/*
int score=5;  // gloabal variable

void func1(int &n){
    cout<< n << endl;
    cout<<"Gloabal variable in first func. "<<score << endl;

}
void func2(int &n){
    cout<< n << endl;
    cout<<"Gloabal variable in second func. "<< score << endl;
    score++;// update gloabal variable 

}


int main(){
    int n=5;

    func1(n);
    func2(n);
    
    cout<<"Gloabal variable after updation in main fucntion "<< score << endl;



}
*/

///////////////////////              INLINE FUNCTION                  ////////////////////////////

/*
inline int getmax(int a, int b){    //inline function
    return (a>b) ? a : b;
}

int main(){

    int a=1 , b=2;
    int ans=0;

    ans=getmax(a,b);
    cout<< ans << endl;

}
*/


/////////////////////////////////          DEFAULT ARGUMENTS             ///////////////////////////////////

void print(int arr[], int n , int start=0) {      // here we have tw0 default arguments whose value we can change in calling fucntion
                                                            
    for( int i=start; i<n; i++){
        cout<< arr[i] <<endl;
    }
}

int main(){

    int arr[6]={1,2,3,4,5,6};
    int size=5;

    print {arr,size};
    
    print {arr,size,2}
}