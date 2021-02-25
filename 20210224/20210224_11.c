
#include <stdio.h>
#define M
#if M /*няма да работи защото иска сравнение */
#endif
#ifdef M /*ще работи защото М е дефинирано*/
#endif
#ifndef M /*няма да работи защото М е дефинирано*/
#endif
#if defined(M) /*еквивалент на  #ifdef*/
#endif
#if !defined(M)/*еквивалент на  #ifndef*/
#endif