// Project Euler Exercise № 2
/*Каждый следующий элемент ряда Фибоначчи получается при сложении двух предыдущих. Начиная с 1 и 2, первые 10 элементов будут:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Найдите сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.*/
#include <conio.h>
#include <stdio.h>
//------------------ macros
unsigned long SUM(0);
//------------------ namespaces
//------------------ fuctions INTERFACES
unsigned int FIBY(unsigned long PREVIOUS, unsigned long SUBSEQUENT); //Считает фибоначи - считает значениен текущего и предыдущего элементов
bool EVENorNO(unsigned long PREVIOUS, unsigned long SUBSEQUENT); // Выясняет, являются ли переданные элементы ЧЁТНЫМИ
unsigned int SUMMATOrFIBY(bool Flag, unsigned long PREVIOUS, unsigned long SUBSEQUENT, unsigned long RESULT); // Если предыдущая функция отработает положительно - то эта, посчитает предыдущий и последующий элементы, сложит и запишет в глобальную переменную SUM
//------------------ classes INTARFACES
//------------------ enumes/stracts
//   MAIN()
main()
{
    unsigned int fin(0);
    unsigned long it(0);
    unsigned long PREVIOUS(1), SUBSEQUENT(2), TEMPORAL_def(0), RESULTAT(0);
    bool FlagIt(0);
    while(fin != 4000000)                                       // Цикл для создания ряда фибоначи!
    {
        fin = PREVIOUS + SUBSEQUENT;                            // Считаем до 4000000, что бы не выйти за пределы значения которое есть высший порог - по условию!
        TEMPORAL_def = FIBY(PREVIOUS, SUBSEQUENT);              // Складываем предыдущий и текущий элемент через эту функцию FIBIY и заносим в переменную TEMPORAL_def, для временного значения
        FlagIt = EVENorNO(PREVIOUS, SUBSEQUENT);                // Для того, что бы понять были ли складываемые нами элементы ЧЁТНЫМИ!?
        PREVIOUS = SUBSEQUENT;                                  // Закидываем в переменную символизирующую предыдущее (PREVIOUS) значение ряда Фибонгачи, с Текщим (SUBSEQUENT) и таким образом мы создаём движение с лева на право, по ряду Фибоначи - от предыдущего элемента к последующему
        SUBSEQUENT = TEMPORAL_def;                              // Закидываем значение которое хранится в переменной TEMPORAL_def в переменную которая символизирует текущее значение (SUBSEQUENT) и таким образом мы создаём движение с лева на право, по ряду Фибоначи - от последующего элемента к созданию нового которое теперь будет записанно в SUBSEQUENT из TEMPORAL_def
        if(FlagIt)
        {
           SUM = SUMMATOrFIBY(FlagIt, PREVIOUS, SUBSEQUENT, RESULTAT); //Складывает ТЕ - САМЫЕ - предыдущтий и текущий элемент ЕСЛИ оказалось, что они ЧЁТНЫЕ!  
        };
        

    };



    getch();
    return 0;
}
//------------------ fuctions REALISATION
unsigned long FIBY(unsigned long PREVIOUS, unsigned long SUBSEQUENT)
{
    unsigned long RES =  PREVIOUS + SUBSEQUENT;
    return RES;
};
bool EVENorNO(unsigned long PREVIOUS, unsigned long SUBSEQUENT)
{
    P = PREVIOUS % 2;
    S = SUBSEQUENT % 2;
    if(P == 0 && S == 0);
    {
        return true;
    };
    return false;
};
unsigned int SUMMATOrFIBY(bool Flag, unsigned long PREVIOUS, unsigned long SUBSEQUENT)
{
    if(Flag == false)
    {
        return 0;
    };
    
};
//------------------ classes REALISATIOPN
