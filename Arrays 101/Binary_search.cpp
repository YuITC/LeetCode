#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch (int arr[], int bot, int top, int x)
{
    while (bot <= top)
    {
        int mid = bot + (top-bot)/2;

        if  (arr[mid] == x) return mid;
        else
        {
            if  (x < arr[mid]) top = mid - 1;   // x is on the left  side of mid
            else               bot = mid + 1;   // x is on the right side of mid
        }
    }

    return -1;
}

int recursive_binarySearch (int arr[], int bot, int top, int x)
{
    if  (bot > top) return -1;
    else
    {
        int mid = bot + (top-bot)/2;

        if  (arr[mid] == x) return mid;
        else
        {
            if  (x < arr[mid]) recursive_binarySearch (arr, bot    , mid - 1, x);
            else               recursive_binarySearch (arr, mid + 1, top    , x);
        }
    } 
}

int main ()
{
    int arr[] = {6, 9, 1, 15, 2, 8};
    int N     = sizeof(arr) / sizeof(arr[0]);

    sort (arr, arr+N);  // 1 2 6 8 9 15
                        // 0 1 2 3 4 5

    cout << binarySearch (arr, 0, N-1, 6);  // i = 2
    cout << '\n';
//  cout << binary_search       (arr, arr+N, 5);   // return 0 (false) if can't find x and 1 (true) if x is available in searched array
                                                   // form: binary_search (arr, arr+N, x) -> range arr[0 -> N)

    return 0;
}
