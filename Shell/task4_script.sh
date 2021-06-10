#Курсистите се разделят на отбори по двама. От Лекция
#3 на тема - Структура на една С програма. Побитови
#оператори всеки отбор взема по една задача и създава
#скрипт който да подава входни данни(няколко теста) на
#задачата, програмата извършва изчисленията и връща
#резултат, като скрипта проверява дали резултатът е
#правилен. Подават се разнообразни гранични данни,
#които да съипят програмата. Скрипта проверява за
#връщане на грешки. На всеки тест скрипта след като го
#провери връща съобщение “Теста е премината” ако е
#минал успешно или “Теста не мина, моля поправете
#вашата програма и опитайте пак”

#!/bin/bash

`gcc ./task4.c -o task4`
RESULT=`./task4 42 3`
./task4 42 3


READ=$?

if [ "$RESULT" -ne "46" ]
then
    echo -e "The result is different from the exp. result. Check your program\n"
elif [ "$READ" -ne "0" ]
then
    echo -e "Please fix your program. The exit status is:  $READ\n"
else
    echo -e "The program is correcr. The exit status is: $READ\n"
fi

RESULT=$(./task4 12 4)
./task4 12 4
READ=$?
if [ "$RESULT" -ne "12" ]; then
        echo -e "The result is different from the exp. result. Check your program\n"
    elif [ "$READ" -ne "0" ]; then
            echo -e "Please fix your program. The exit status is:  $READ\n"
        else
                echo -e "The program is correcr. The exit status is: $READ\n"
fi

RESULT=$(./task4 26 26)
./task4 26 26
READ=$?
if [ "$RESULT" -ne "33554458" ]; then
    echo -e "The result is different from the exp. result. Check your program\n"
elif [ "$READ" -ne "0" ]; then
    echo -e "Please fix your program. The exit status is:  $READ\n"
else
    echo -e "The program is correcr. The exit status is: $READ\n"
fi
