#pragma once
#include <QWidget>

class Oktan: public QWidget
{
    Q_OBJECT

public:

signals:
   void test(int message);
};