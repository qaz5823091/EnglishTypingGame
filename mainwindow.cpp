#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QKeyEvent>
#include <QFile>
#include <QTextStream>
#include <QDebug>
/*
#include <iostream>
using namespace std;
*/

int MainWindow::index = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font;
    font.setPointSize(20);
    ui->question->setFont(font);
    ui->input->setFont(font);
    setWord();
    setLabelQuestion(word[index].getWord());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    QString key;
    key = char(event->key());
    if (index < length) {
        if (word[index].getSolved() == false) {
            if (key == Qt::Key_Space) {
                if (reply == word[index].getWord()) {
                    setLabelReply("Correct!");
                    index++;
                    if (index < length) {
                        setLabelQuestion(word[index].getWord());
                    }
                    else {
                        setLabelQuestion("Finish!");
                    }
                }
                else {
                    setLabelReply("Fail . .");
                }
                reply = "";
            }
            else if (key == Qt::Key_Backspace) {
                reply.chop(1);
                setLabelReply(reply);
            }
            else {
                key = key.toLower();
                reply += key;
                setLabelReply(reply);
            }
        }
    }

}


void MainWindow::readFile(QString fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Cannot open file for reading:" << qPrintable(file.errorString());
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString fileLine = in.readLine();
        word.push_back( Word(fileLine) );
    }
    file.close();
}

void MainWindow::setWord() {
    readFile("C:\\Users\\cpp1092020\\C++\\EnglishTypingGame\\vocabulary.txt");
    length = word.size();
}

void MainWindow::setLabelQuestion(QString question) {
    ui->question->setText(question);
}

void MainWindow::setLabelReply(QString reply) {
    ui->input->setText(reply);
}