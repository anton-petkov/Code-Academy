/*Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.
*/
#include <stdio.h>
#include <string.h>
typedef struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
} t_paper;
int main()
{
    t_paper stPaper;
    stPaper.m_nBookId = 123456;
    strcpy(stPaper.m_szTitle, "Paper title");
    strcpy(stPaper.m_szAuthor, "Autor");
    strcpy(stPaper.m_szSubject, "paper subject");
    printf("Paper id : %d\n", stPaper.m_nBookId);
    printf("Paper title : %s\n", stPaper.m_szTitle);
    printf("Paper author : %s\n", stPaper.m_szAuthor);
    printf("Paper subject : %s\n", stPaper.m_szSubject);
    return 0;
}
