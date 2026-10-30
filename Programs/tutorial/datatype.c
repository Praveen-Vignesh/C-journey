#include <stdio.h>
#include <stdint.h>

int main(){
/*char is 1 byte (8 bits) signed in linux and windows but on arm and raspberry pi it can be either unsigned*/

    char char_0 = 255;
    // in most implementations char is signed by default there fore this one would over flow and wrap around to -1
    char char_1 = 'A';

    signed char char_a = -95;
    signed char char_b = 'a';

    unsigned char char_c = 50;
    unsigned char char_d = 'A';


/*short is a 2 byte integer datatype and is signed by default*/
    short short_0 = -32768;
    unsigned short short_1 = 65535; // unsigned short ranges from 0 to 65,535

/*int is a integer datatype and is 4 bytes in size value ranging from -2.1 billion to + 2.1 billion*/
    int int_0 = -2147483647;
    unsigned int int_1 = 4294967295; // unsigned int ranges from 0 to 4.2 billion

/*long int 8 bytes(linux) 4 bytes(windows)*/
    long int long_0 = -9223372036854775807;
    unsigned long int long_1 = 18446744073709551615; // unsigned long int ranges from 0 to 18.4 quintillion

/*long long int 8 bytes*/
    long long int long_long_0 = -9223372036854775807;
    unsigned long long int long_long_1 = 18446744073709551615; // unsigned long long int ranges from 0 to 18.4 quintillion

/*float is a 4 byte floating point datatype*/
    float float_0 = 3.14159;
    float float_1 = -2.71828;

/*double is a 8 byte floating point datatype*/
    double double_0 = 3.141592653589793;
    double double_1 = -2.718281828459045;

/*long double is a 16 byte (10 byte for value and 6 bytes for padding)floating point datatype on windows its 8 bytes only*/
    long double long_double_0 = 3.14159265358979323846264338327950288419716939937510;
    long double long_double_1 = -2.71828182845904523536028747135266249775724709369995;

/*Fixed width integer data types*/
    int8_t int8_0 = -128;
    uint8_t uint8_0 = 255;

    int16_t int16_0 = -32768;
    uint16_t uint16_0 = 65535;

    int32_t int32_0 = -2147483648;
    uint32_t uint32_0 = 4294967295;

    int64_t int64_0 = -9223372036854775808;
    uint64_t uint64_0 = 18446744073709551615;

/*Boolean and void data typees*/
    bool bool_0 = 1;
    _Bool bool_1 = 0;

    void *void_ptr = NULL;


    printf("char: %d %c\n", char_0, char_0);
    printf("char: %d %c\n\n", char_1, char_1);

    printf("signed char a: %d %c\n", char_a, char_a);
    printf("signed char b: %d %c\n\n", char_b, char_b);

    printf("unsigned char c: %d %c\n", char_c, char_c);
    printf("unsigned char d: %d %c\n\n", char_d, char_d);

    printf("short a: %d\n", short_0);
    printf("unsigned short b: %d\n\n", short_1);

    printf("int a: %d\n", int_0);
    printf("unsigned int b: %d\n\n", int_1);

    printf("long a: %ld\n", long_0);
    printf("unsigned long b: %lu\n\n", long_1);

    printf("long long a: %lld\n", long_long_0);
    printf("unsigned long long b: %llu\n\n", long_long_1);

    printf("float a: %f\n", float_0);
    printf("float b: %f\n\n", float_1);

    printf("double a: %lf\n", double_0);
    printf("double b: %lf\n\n", double_1);

    printf("long double a: %Lf\n", long_double_0);
    printf("long double b: %Lf\n\n", long_double_1);

    printf("int8_t a: %d\n", int8_0);
    printf("uint8_t b: %u\n\n", uint8_0);

}