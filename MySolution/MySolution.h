#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MySolution.h"

class MySolution : public QMainWindow
{
    Q_OBJECT

public:
    MySolution(QWidget *parent = Q_NULLPTR);

private:
    Ui::MySolutionClass ui;
};
