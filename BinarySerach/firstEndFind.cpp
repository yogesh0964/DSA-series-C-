#include <iostream>
using namespace std;

int firstEndFind(int arr[], int size, int key)
{
  int start = 0, end = size - 1;
  int ans = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2; // ✅ inside loop

    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1; // search LEFT ⬅️
    }
    else if (key > arr[mid]) // ✅ else if
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}

int lastEndFind(int arr[], int size, int key)
{
  int start = 0, end = size - 1;
  int ans = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2; // ✅ inside loop

    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1; // search RIGHT ➡️
    }
    else if (key > arr[mid]) // ✅ else if
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}

int main()
{
  int even[5] = {1, 2, 3, 3, 5};
  int odd[10] = {3, 4, 5, 5, 5, 5, 5, 6, 7, 8};

  int evenIndex = firstEndFind(even, 5, 3);            // ✅ size 5
  cout << "First Index of 3 is " << evenIndex << endl; // Output: 2

  int oddIndex = lastEndFind(odd, 10, 5);
  cout << "Last Index of 5 is " << oddIndex << endl; // Output: 6

  return 0;
}
