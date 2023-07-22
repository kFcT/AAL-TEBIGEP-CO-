#include <stdio.h>

int main(){
    int x;
    //printf("Hello World\n"); //bir alt satıra geçer
    //printf("Hello World\t"); // bir tab boşluk bırakır
    //printf("Hello World\b");// imleci 1 konum geri taşır
    // printf("Hello World\r"); // alt satırları okumaz
    //printf("give something : \t");
    //scanf("%c",&x);   // %c karakter ister ve onu çıkartır ancak print ederken & işareti kullanılması gerekir
    //printf(&x);
    char a[] = "Hi Geeks"; // karakter listesi oluşturduk
    printf("%s\n", a); // o listeyi yazdırdık
    float y = 12.67;  //float yani kesirli bir değer aldık
    printf("Using %%f: %f\n", y); // kesirli değerleri yazdırmayı sağlar
    int s = 10;
    printf("The Memory Address of a: %p\n",(void*)&s); // adresi bizim anlayabileceğimiz(bu konu hakkında bilgisi olanların) anlayabileceği şekilde çıkartır
    return 0;
} //%%something şekilde olan kalıplar o specifier ı yazdırabilmemizi sağlar
