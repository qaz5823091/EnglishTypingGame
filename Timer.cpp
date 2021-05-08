#include "Timer.h"
#include "mainwindow.h"

#include <QtCore>
#include <QDebug>

Timer::Timer() {
    this->timer = new QTimer(this);
    this->seconds = 100;
    connect(timer, SIGNAL(timeout()), this, SLOT(slot()));

    // timer->start(1000);
}

Timer::Timer(long long int s) {
    this->timer = new QTimer(this);
    this->seconds = s;
    this->label = label;
    connect(timer, SIGNAL(timeout()), this, SLOT(slot()));

    // timer->start(1000);
}

void Timer::slot() {
    this->seconds--;
    if (seconds == 0)
        timer->stop();

    setLabelSeconds();
    qDebug() << QString::number(seconds);
}

void Timer::start() {
    timer->start(1000);
}

void Timer::stop() {
    timer->stop();
}

void Timer::setLabelSeconds() {
    label->setText(QString::number(seconds));
}

void Timer::toLabel(QLabel *label) {
    this->label = label;
}
