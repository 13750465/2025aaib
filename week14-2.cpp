// week14-2.cpp
// (UVA11063) B2-Sequence part1: input, part2: output
// part 3: bigger and bigger, part 4: table, part 5: for-for, part 6: table[now] to check
# include <stdio.h>
int main()
{
    int a[100];
    int N,t=1;
    while( scanf("%d",&N) == 1 ){ // part 1
        int bad = 0;
        for(int i=0; i<N; i++){ // part1:input
            scanf("%d",&a[i]); // part 1:input
            // part 3:bigger and bigger
            if(i>0) if( a[i-1] >= a[i] ) bad = 1;
        }
        int table[20002] = {}; // part 4: table
        for(int i=0; i<N; i++){ // part 5: for loop
            for(int j=i; j<N; j++){
                int now = a[i] + a[j];
                // part 6: table[now] to check
                if(table[now]>0) bad = 1;
                table[now]++;
            }
        }

        // part 2: output
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
        else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
        t++;
    }
}
