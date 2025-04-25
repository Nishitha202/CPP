#include <iostream>
using namespace std;
int main() {
   //2d array is a row pointer and the elements of the array are row 
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout << arr<<endl;
    cout << &arr<<endl;
    cout << &arr[0][0]<<endl;
    cout << &arr[0][1]<<endl;
    cout << &arr[0][2]<<endl;
    cout << &arr[0][3]<<endl;
    cout << arr+1<<endl;
    cout << &arr[1][0]<<endl;

    return 0;
}