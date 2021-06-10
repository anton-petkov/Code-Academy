/*4) Създайте функция vdigniBitNa. Тя получава
следните параметри - число и индекс. Функцията трябва
да "вдига" бита на съответния индекс в числото (под
"вдига" ще разбираме да му присвои стойност 1).*/

#include <stdio.h>
#include <stdlib.h>

int vdigniBitNa(int num, int index);

int main(int agrc, char* argv[]){
    int num = atoi(argv[1]);
    int index = atoi(argv[2]);
    
    printf("%d",vdigniBitNa(num,index));
    
    return 0;
}

int vdigniBitNa(int num, int index){
    int x = 1;
    x = x << (index-1); 
    return x|num; // при вече вдигнат бит XOR не е приложим, понеже бита ще стане 0. 
}
