#include <stdio.h>

/*
Note: Dont put \n in scanf. If you put \n, it will ask you to double enter.
*/

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    printf("enter the x :");
    scanf("%d",&x);
    printf("enter the y :");
    scanf("%d",&y);
    printf("enter the z :");
    scanf("%d",&z);
    // is x greater than y????
    int xy = x>y;
    int xz = x>z;
    int xyxz = (xy&&xz);
    printf("(x>y)&&(x>z) = %d",xyxz);
    printf("\n");
    return 0;
}