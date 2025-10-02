#include <stdio.h>
int main(){
    int x = 1;
    int y = 2;
    int px = x & ~(1 << 31);
    int py = y & ~(1 << 31);
    printf("%x %x %x %x %x %x", px, py, (py + (~px + 1)), ((py + (~px + 1)) >> 31),(!!(y & x & (1 << 31)) ^ ((py + (~px + 1)) & (1 << 31))), (!!(y & x & (1 << 31)) ^ !((py + (~px + 1)) & (1 << 31))) | !(x ^ y));
	return 0;
}