/*тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node
{
    int val;
    struct node *point;

} t_node;
int main()
{
    t_node *n1 = (t_node *)malloc(255);
    n1->val = 25;
    printf("%d", n1->val);
    return 0;
}
