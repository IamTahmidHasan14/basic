#include <iostream>
using namespace std;
void print_arr(int arr[], int i)
{
    if(i>=5)
        return;
    cout << arr[i] << " ";
    return print_arr(arr, i+1);
}
int main()
{
    int arr[5] = {19, 33, 11, 0, 67};
    cout << "The array elements are: ";
    print_arr(arr, 0);
    cout << endl;
}
