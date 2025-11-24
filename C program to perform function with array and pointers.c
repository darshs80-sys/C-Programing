#include <stdio.h>

void intputArray(int*arr,int n);
void displayArray(const int*arr,int n);
int sumArray(int*arr,int n);
int countPositive(const int*arr,int n);
int countNegative(const int*arr,int n);

int main(void){
         int arr[100];
         int n,sum,posCount,negCount;
         printf("Enter the number of element in the array(max;100):");
         if(scanf("%d",&n)!=1 || n<0 || n>100)
         {
             puts("Invalid size.");
             return 1;
         }
    intputArray(arr,n);

    printf("\nArray elements are:");
    displayArray (arr,n);

    sum=sumArray(arr,n);
    printf("\n Sum of all elements=%d",sum);

    posCount=countPositive(arr,n);
    negCount=countNegative(arr,n);

    printf("\n Number of positive elements=%d",posCount);
    printf("\n Numbers of negative elements=%d\n",negCount);

    return 0;
}
    void inputAarray(int*arr,int n){
        printf("Enter %d elements:\n",n);
        for(int i=0;i<n;i++){
                scanf("%d",arr+i);
        }
    }

    void displayArray(const int*arr,int n){
        for(int i=0;i<n;i++){
                printf("%d",(arr+i));
        }
    }

    int sumArray(int*arr,int n){
        int sum=0;
        for(int i=0;i<n;i++){
                sum+=*(arr+i);
        }
        return sum;
    }

    int countPositve(const int*arr,int n){
         int cnt=0;
        for(int i=0;i<n;i++){
                if(*(arr+i)>0)cnt++;
        }
        return cnt;
    }
    int countNegative(const int*arr,int n)
    {
        int cnt =0;
        for(int i=0;i<n;i++){
                if(*(arr+i)<0)cnt++;
        }
        return cnt;
    }

