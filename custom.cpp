#include "custom.h"
#include "ui_custom.h"



Custom::Custom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Custom)
{
    ui->setupUi(this);
}

Custom::~Custom()
{
    delete ui;
}

void Custom::on_pushButton_clicked()
{
    QString result;
    result = ui->textEdit->toPlainText();

    QFile file("C:\\Users\\allen\\OneDrive\\Desktop\\Others\\EnglishTypingGame\\vocabulary.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text)){
        qDebug() << "Cannot open file for writing:" << qPrintable(file.errorString());
        return;
    }

    QTextStream out(&file);
    out<<result;
    file.close();

    this->close();
}
