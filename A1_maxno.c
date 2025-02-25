#include <stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int n, maxno=-999;
    printf("Enter size");
    scanf("%d", &n);
    
    int numbers[n];

    printf("Enter %d numbers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i<n; i++){
        maxno=max(maxno, numbers[i]);
    }
    printf("Max number is %d\n", maxno);
    return 0;
}