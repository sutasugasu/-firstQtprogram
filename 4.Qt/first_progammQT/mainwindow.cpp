// @author Глушков Станислав
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"

const QString BG_WHITE = "background-color:white;";
const QString BG_ERROR = "background-color:rgb(250, 103, 103)";

// конструктор главного окна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)  // явный вызов конструктора базового класса
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Объект ui содержит все классы-элементы интерфейса,
    // расположенные на главном окне.
    // класс для ui генерируется автоматически из дизайна окна
}

MainWindow::~MainWindow()
{
    delete ui;
}

// обработчик события -- клик на кнопку
// обработчик создан в дизайнере форм
void MainWindow::on_Button_calc_clicked()
{

    try{

        ui -> lineEdit_vvod -> setStyleSheet(BG_WHITE);
        check( ui->lineEdit_vvod->text().toFloat() );

    float a = ui->lineEdit_vvod->text().toFloat();
    ui -> plainTextEdit_report ->appendPlainText("Обьем куба  = " + QString::number(cube_volume(a)) + "\n");
    ui -> plainTextEdit_report ->appendPlainText("Площадь боковой поверхности куба  = " + QString::number(cube_square(a)) + "\n");
    }
    catch(const std::invalid_argument &e){
        if (!QString::compare(e.what(), "Недопустимое значение  длины ребра")){
            ui -> plainTextEdit_report ->appendPlainText(e.what());
            ui -> lineEdit_vvod -> setStyleSheet(BG_ERROR);
        }
    }

}


void MainWindow::on_about_author_triggered()
{
    QMessageBox::about(this, "Об авторе", "Автор: Глушков Станислав Константинович");
}

