// @author Глушков Станислав
#include "mainwindow.h"

#include <QApplication> //класс, который управляет созданным приложением

// основная программа
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; // статистическое создание переменной, которое вызывает главное окно
    w.show(); // метод вывода виджета
    return a.exec(); //Входит в основной цикл событий и ожидает, пока не будет вызван exit() ,
                    //затем возвращает значение, для которого было установлено значение exit()
                    //(которое равно 0, если exit() вызывается через quit() ).
                    //В нем находится главный цикл, который вызывает обработчики события
}
