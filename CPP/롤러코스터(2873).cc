#include <cstdio>
using namespace std;

int H, W;
int a[1000][1000];

void repeat(char ch, int repeated){while(repeated-->0)putchar(ch);}

int main(){
    scanf("%d %d", &H, &W);
    
    for(int i=0; i<H; ++i){
        for(int j=0; j<W; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    
    if( H%2 ){
        repeat('R', W-1);
        for(int i=0; i<H-1; i+=2){
            repeat('D', 1); repeat('L', W-1);
            repeat('D', 1); repeat('R', W-1);
        }
    } else if( W%2 ){
        repeat('D', H-1);
        for(int i=0; i<W-1; i+=2){
            repeat('R', 1); repeat('U', H-1);
            repeat('R', 1); repeat('D', H-1);
        }
    } else {
        // finding minimum cell
        int x=0, y=1;
        for(int i=0; i<H; ++i){
            for(int j=0; j<W; ++j){
                if((i+j)%2 && a[y][x] > a[i][j]){
                    y = i, x = j;
                }
            }
        }
    
        int h=0, w=0;
        // top
        for(; h+1 < y; h += 2){
            repeat('R', W-1); repeat('D', 1);
            repeat('L', W-1); repeat('D', 1);
        }
        
        // middle
        int ny = h^1;
        for(w=0; w < W-1; ++w){
            if( ny != y || w != x ){
                repeat( ny%2 ? 'D':'U', 1);
                ny ^= 1;
            }
            repeat('R', 1);
        }
        if( ny%2 ) repeat('D', 1);
        
        // bottom
        h = (h/2*2) + 2;
        for(; h < H; h += 2){
            repeat('D', 1); repeat('L', W-1);
            repeat('D', 1); repeat('R', W-1);
        }
    }
    
    return 0;
}