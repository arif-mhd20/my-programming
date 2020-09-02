#include<iostream>

using namespace std;

void merge_sort(int A[], int start , int end){

int mid=(start+end)/2;
merge_sort(A, start, mid);
merge_sort(A, mid+1, end);

merge(int A, int start, int mid, int end){

int i=start,j=mid+1,i}

int B[end-start+1],k=0;


  fot(int z=start;z<=end; z++){

  if(i>mid)
  B[k++]=A[j++];

  else if(j>end)
  B[k++]=A[i++];


  else if(A[i]<A[j])
       B[k++]=A[i++];

  }

  for(int p=0;p<k;p++)
  A[start++]=B[p];

}

int main(){




}
