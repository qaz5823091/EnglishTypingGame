#ifndef CUSTOM_H
#define CUSTOM_H

#include <QMainWindow>
#include "Word.h"
#include "mainwindow.h"

namespace Ui {
class Custom;
}

class Custom : public QMainWindow
{
    Q_OBJECT

public:
    explicit Custom(QWidget *parent = nullptr);
    ~Custom();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Custom *ui;
};

#endif // CUSTOM_H
