#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetGL.h"


class QtWidgetGL : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetGL(QWidget *parent = nullptr);
    ~QtWidgetGL();

private:
    Ui::QtWidgetGLClass ui;

public slots:
    void on_actionDrawRectangle_triggered();
    void on_actionClear_triggered();
    void on_actionWrieframe_triggered();
    void on_atColorChange_triggered();
    void on_atDrawTriangle_triggered();

};
