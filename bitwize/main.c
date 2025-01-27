//
//  main.c
//  bitwize
//
//  Created by Edwin Cardenas on 27/01/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned char a = 0x3c;
    unsigned char b = 0xa9;
    unsigned char c = a | b; // OR
    
    printf("Hex: %x | %x = %x\n", a, b, c);
    printf("Decimal: %d | %d = %d\n", a, b, c);
    
    printf("Hex: %x\n", 0x3e);
    printf("Decimal: %d\n", 0x3e);
    
    unsigned char d = a & b; // AND
    
    printf("Hex: %x & %x = %x\n", a, b, d);
    printf("Decimal: %d & %d = %d\n", a, b, d);
    
    unsigned char e = a ^ b; // XOR
    
    printf("Hex: %x ^ %x = %x\n", a, b, e);
    printf("Decimal: %d ^ %d = %d\n", a, b, e);
    
    unsigned char f = ~b; // Complement
    
    printf("Hex: The complement of %x is %x\n", b, f);
    printf("Decimal: The complement of %d is %d\n", b, f);
    
    unsigned char g = a << 2; // left-shift
    
    printf("Hex: %x shifted left two places is %x\n", a, g);
    printf("Decimal: %d shifted left two places is %d\n", a, g);
    
    unsigned char h = a >> 1;
    
    printf("Hex: %x shifted right one place is %x\n", a, h);
    printf("Decimal: %d shifted right one place is %d\n", a, h);
    
    return 0;
}
