/// week08-2.cpp
/// ªwªw±Æ§Çªkªº¼ÒÀÀ
#include <stdio.h>
int main()
{
    int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9,};
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");

    for(int k=0; k<20; k++){
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }
}
