#include <iostream>

using namespace std;

void merge (int A[], int l, int m, int r)
{
  int i, j, k;
  int nL = m - l + 1;
  int nR = r - m;

  int L[nL], R[nR];

  for (i = 0; i < nL; i++)
    L[i] = A[l + i];
  for (j = 0; j < nR; j++)
    R[j] = A[m + 1 + j];

  i = 0, j = 0, k = l;

  while (i < nL && j < nR)
    {
      if (L[i] <= R[j])
	{
	  A[k] = L[i];
	  i++;
	}
      else
	{
	  A[k] = R[j];
	  j++;
	}
      k++;
    }
  while (i < nL)
    {
      A[k] = L[i];
      i++;
      k++;
    }
  while (j < nR)
    {
      A[k] = R[j];
      j++;
      k++;
    }

}

void mergeSort(int A[], int l, int r) 
{
    if (l < r) { 
        int m = l + (r - l) / 2; 
        mergeSort(A, l, m); 
        mergeSort(A, m + 1, r); 
  
        merge(A, l, m, r); 
    } 
}

void printarr (int A[], int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << A[i] << "  ";
    }
    cout<<endl;
}

int main ()
{
  int A[1000], n;
  cin>>n;
  cout<<"array"<<endl;
  for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }
  cout << endl;
  printarr (A, n);
  mergeSort (A, 0, n-1);
  printarr (A, n);

  return 0;
}
