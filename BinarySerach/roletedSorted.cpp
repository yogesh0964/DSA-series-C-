#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
  int s = 0, e = size - 1;
  int mid = s + (e - s) / 2;
  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}
int binarySearch(int arr[], int s, int e, int key)
{
  int start = s, end = e;
  int mid = s + (e - s) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int findPosition(int arr[], int n, int k)
{

  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k <= arr[n - 1])
  {
    return binarySearch(arr, pivot, n - 1, k);
  }
  else
  {
    return binarySearch(arr, 0, pivot - 1, k);
  }
}
int main()
{
  int arr[6] = {12, 18, 2, 4, 6, 8};

  int pivot = getPivot(arr, 6);
  cout << "Pivot index is " << pivot << " → value: " << arr[pivot] << endl; // Output: index 2, value 2

  cout << "Position of 18 is " << findPosition(arr, 6, 18) << endl; // Output: 1
  cout << "Position of 4 is " << findPosition(arr, 6, 4) << endl;   // Output: 3

  return 0;
}