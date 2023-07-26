#include <stdio.h>

int main(){
    int a=1;

    int*pn = &a; // burada anın adresini pn adlı pointera ekledik yani pnyi çağırınca a değişkeninin adresi gelicek

    printf("%p\n",pn);
    printf("%d",a);
    return 0;
}
