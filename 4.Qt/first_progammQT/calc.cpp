/// Вычисление объёма куба и площади его боковой поверхности
// @author Глушков Станислав
#include <stdexcept>
using namespace std;

/// считает объём куба
float cube_volume(float a)
{
    return a*a*a;
}

/// считает площадь боковой поверхности куба
float cube_square(float a)
{
    return 6*(a*a);
}

///Проверка данных
void check(float a)
{
    if (a<=0)
        throw invalid_argument("Недопустимое значение  длины ребра");
}
