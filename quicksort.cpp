#include <iostream>

using namespace std;


int partition (int A[], int start, int end) {
    int pivot = A[end];
    int pIndex = start;
    for(int i = start; i<end; i++){
        if(A[i]<pivot){
           swap(A[pIndex], A[i]) ;
           pIndex++;
        }
    }
    swap(A[pIndex], A[end]);
    return pIndex;
}

void quickSort(int A[], int start, int end){
    if(start<end){
        int pIndex = partition(A,start,end);
        quickSort(A, start, pIndex-1);
        quickSort(A, pIndex+1,end);
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
  quickSort (A, 0, n-1);
  printarr (A, n);

  return 0;
}
