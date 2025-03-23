#include "C:\Users\stasj\Desktop\Lab8Dmutrenko\prj\ModulesDmutrenko\ModulesDmutrnko.h"
#include <cmath>
#include <stdexcept>

double s_calculation(double x, double y, double z) {
    if (y - z == 0 || (z + x) * y == 0 || 2 * y + M_PI == 0) {
        throw std::runtime_error("Помилка: ділення на нуль!");
    }

    double term1 = sqrt(pow(x / (y - z), 3));
    double term2 = (x * x + z) / sqrt(fabs((z + x) * y));
    double term3 = cos(x * z * z) / (2 * y + M_PI);

    return 1 + term1 + term2 - term3;
}
