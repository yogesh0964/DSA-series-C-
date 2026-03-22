#include <iostream>
using namespace std;

int binarySearch(int arr[], int size)
{
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] >= arr[0])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return start;
}
int main()
{
  int arr[6] = {12, 18, 2, 4, 6, 8};
  int odd[5] = {3, 8, 11, 14, 16};

  int evenIndex = binarySearch(arr, 5);
  cout << "Pivot of 18 is " << evenIndex << endl;

  // int oddIndex = binarySearch(odd, 5, 16);
  // cout << "Index of 16 is " << oddIndex << endl;

  return 0;
}