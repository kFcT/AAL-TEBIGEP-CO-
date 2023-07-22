#include <stdio.h> // kütüphane import ettik 

int main(){ //İnteger tipi bir fonksiyon oluşturduk
    int num; // integer değer alan bir değişken oluşturduk
    int truency; 
    printf("Pls enter a number :"); //burada printf fonkisyonu ile çıktı verdik
    truency = scanf("%d", &num); // burada kullanıcıdan bir değer istedik ve bunun sayı olup olmadığını truency değişkenine atadık
    return 0; //fonskiyonun özelliği olan sayı döndürme işini yaptık
} 
 // scanf fonskiyonunda değişkenden önce & koymamızın sebebi değişkenin adresini belirtmemizdendir
 //return fonksiyonunda ise 0 koymamızın sebebi bir hata olduğunda rahatça görebilmektir