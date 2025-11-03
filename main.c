#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int N;
    double sum=0;
    scanf("%d",&N);
    if(N<=0){
        printf("so ko hop le");
    }
    else{
        for(int i=1;i<=N;i++){
          sum+=1.0/i;
        }

    }
    printf("%.3lf",sum);
    return 0;
}
