//de 2
//n22dccn132
// Tran Phi Hung
#include <iostream>
#include <math.h>

using namespace std;

void enter(int arrA[],unsigned &sizeA)
{
    cin>>sizeA;
    for (int i=0;i<sizeA;i++)
    {
        cin>>arrA[i];
    }
}
void print(int arrB[],unsigned sizeB)
{
    cout<<"sizeB: "<<sizeB<<endl;
    cout<<"arrB: ";
    for (int i=0;i<sizeB;i++)
    {
        cout<<arrB[i]<<" ";
    }
}
int checkprime(int a)
{
    for (int i=2;i<=sqrt(a);i++)
    {
        if (a%i==0)
        {
            return 0;
        }
        else continue;
    }
    return 1;
}
int  checkB(int arrB[],unsigned sizeB,int a)
{
    for(int i=0;i<sizeB;i++)
    {
        if (arrB[i]==a)
        {
            return 0;
        }
    }
    return 1;
}
void bubble_sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
}

void F1(int arrA[],unsigned sizeA,int arrB[],unsigned &sizeB)
{
    for (int i=0;i<sizeA;i++)
    {
        if (checkprime(arrA[i])&&checkB(arrB,sizeB,arrA[i])&&arrA[i]>1)
        {
            arrB[sizeB]=arrA[i];
            sizeB++;
        }
    }
}

int main()
{
    int arrA[1000],arrB[1000];
    unsigned sizeA=0,sizeB=0;
    enter(arrA,sizeA);
    F1(arrA,sizeA, arrB, sizeB);
    print(arrB,sizeB);
    return 0;
}