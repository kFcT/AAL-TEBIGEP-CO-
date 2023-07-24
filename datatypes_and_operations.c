#include <stdio.h>

int main(){
    char ch;//declaration işlemi //char karakter atamak için kullanılır 1 byte alan kaplar %c
    ch = 'a';//initiative işlemi
    int in = 5;//declaration and initiative //2 yada 4 byte dır işletim sistemine göre belirlenir,sayı yazdırır %d
    short sh = 10000; // 2 bytedır sayıları yazdırır %hd
    long ln = 1000000000; // 4 bytedır sayıları yazdırır %ld
    long long ll = 1000000000000000000; //8 bytedır baya büyük sayıları yazdırabilir %lld
    float fl = 3.15;//4 bytedır kesirli sayı yazdırır %f
    double db = 3.15464625436247284738473; // 8 bytedır uzun kesirli sayıları yazdırır %lf

    //

    // C aritmetik operatörler=>+,-,/,*,%
    // integer ve float bölünmesi yapamayız veya çarpaması herhangi bir işlem yapamayız bu yüzden type conversation atmalıyız
    //type conversation için=> ( olması istenen değişken tipi) değişken adı

    return 0;
}
