#ifndef QTDELAY_H
#define QTDELAY_H

#include <QTimer>

/**
  * @brief execute a part of the code after the specified delay.
  *
  * @param time_ delay time (ms)
  * @param todo_ function block
  *
  * @code{.cpp}
  * QtDelay(1000, {qDebug()<<"Hello";});
  * @endcode
  */
#define QtDelay(time_, todo_)\
QTimer* delay_ = new QTimer;\
delay_->setSingleShot(true);\
QObject::connect(delay_, &QTimer::timeout, [delay_](){ todo_; delay_->deleteLater();});\
delay_->start(time_)


#endif // QTDELAY_H
