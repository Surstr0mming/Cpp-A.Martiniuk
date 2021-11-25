#include <cstdio>
unsigned OneBit(unsigned n){
    unsigned m= 0, max = 0;
    for(int i = 0; i < 32; i++){
        if((n >> i) & 1){
            m++;
        }
        else{
            if(m > max){
                max=m;
            }
            m=0;
        }
    }
    return max;
}

int main(){
    unsigned n;
    //n=312;
    printf("n=");
    scanf("%u",&n);
    printf("%u", OneBit(n));
} 