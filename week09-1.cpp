/// week09-1.cpp
/// 選擇排序法 Selection Sort
#include <stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 0, 1, 2, 6, 5, 4, 3};

    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(a[i] > a[j]){
                int temp=a[i]; a[i]=a[j]; a[j]=temp;
            }
        }
        printf("現在排好了 %d\n",a[i]);
    }
}

