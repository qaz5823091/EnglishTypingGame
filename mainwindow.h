#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QKeyEvent>
#include <vector>
#include "Word.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;

    QString question;
    QString reply;
    std::vector<Word> word;
    int length;
    static int index;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *);
    void readFile(QString );
    void setWord();
    void setLabelQuestion(QString );
    void setLabelReply(QString );

};
#endif // MAINWINDOW_H
