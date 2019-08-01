#include<stdio.h>

void mergesort(int *A,int *temp,int lef,int rig);
void mergr(int *A,int *temp,int lef,int mid,int rig);
int main()
{
    int a[10]={12,13,1,2,6,9,5,3,11,10};
    int temp[10];
    int left=0;
    int right=9;
    mergesort(a,temp,left,mid,right);
    return 0;
}
void mergesort(int *A,int *temp,int lef,int rig)
{
    int mid;
    if(rig>lef)
    {
        mid=(lef+rig)/2;
        mergesort(A,temp,lef,mid);
        mergesort(A,temp,mid+1,rig);
        merge(A,temp,lef,mid,rig);
    }
}
void mergr(int *A,int *temp,int lef,int mid,int rig)
{
    int ml,mr,i=0,j=mid+1,k=0;
    ml=mid;
    mr=rig;
    while(i<ml && j<mr)
    {
        if(A[i]>A[j])
        {
            temp[k]=A[i];
            i++;
            k++;

        }
        else
        {
            temp[k]=A[j];
            j++;
            k++;
        }
        

    }
    while(i<ml)
    {
        temp[k]=A[i];
        i++;
        k++;
    }
    while(j<mr)
    {
        temp[k]=A[j];
        j++;
        k++;
    }
    for(i=0;i<10;i++)
    {
        A[i]=temp[i];
    }
    printf("%d \n",A[i]);
}
