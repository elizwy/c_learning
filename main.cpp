#include <iostream>
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_byte(byte_pointer start, size_t len){
    size_t i;
    for(i=0;i<len;i++){
        printf("%.2x",start[i]);
        printf("\n");
    }
}

void show_int(int x){
    show_byte((byte_pointer)&x,sizeof(x));
}

void show_short(short x){
    show_byte((byte_pointer)&x,sizeof(x));
}

void show_long(long x){
    show_byte((byte_pointer)&x,sizeof(x));
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
    short x=12345;
    short mx=-x;
    show_byte((byte_pointer)&x, sizeof(x));
    show_byte((byte_pointer)&mx, sizeof(mx));

    return 0;
}


