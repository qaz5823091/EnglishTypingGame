#ifndef TIMER_H
#define TIMER_H

#include <QtCore>
#include <QLabel>

class Timer : public QObject
{
    Q_OBJECT

    public:
        Timer();
        Timer(long long int);
        QTimer *timer;
        QLabel *label;
        long long int seconds;

    public slots:
        void slot();
        void start();
        void stop();
        void toLabel(QLabel *label);
        void setLabelSeconds();
};



#endif // TIMER_H
