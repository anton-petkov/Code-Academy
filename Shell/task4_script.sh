#които да съипят програмата. Скрипта проверява за
#връщане на грешки. На всеки тест скрипта след като го
#провери връща съобщение “Теста е премината” ако е
#минал успешно или “Теста не мина, моля поправете
#вашата програма и опитайте пак”

#!/bin/bash

$(gcc ./task4.c -o task4)

check_output() {

    if [[ "$RESULT" == "$OUTPUT" ]]; then
        echo -e "The result is different from the exp. result. Check your program\n"
    elif [ "$READ" -ne "0" ]; then
        echo -e "Please fix your program. The exit status is:  $READ\n"
    else
        echo -e "The program is correcr. The exit status is: $READ\n"
    fi
}

RESULT=$(./task4 42 3)
./task4 42 3

READ=$?
$OUTPUT
check_output "46"

RESULT=$(./task4 12 4)
./task4 12 4

READ=$?
$OUTPUT
check_output "12"

RESULT=$(./task4 26 26)
./task4 26 26

READ=$?
$OUTPUT

check_output "33554458"
