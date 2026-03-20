#include <iostream>
using namespace std;

void PrefixSum(int A[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += A[i];
    cout << sum << " "; // endl hataaya, clean output
  }
  cout << endl; // ✅ Sirf ek newline end mein
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  int n = 5; // ✅ Sahi size
  PrefixSum(A, n);
  return 0;
}
