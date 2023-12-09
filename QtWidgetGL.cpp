#include "QtWidgetGL.h"

QtWidgetGL::QtWidgetGL(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    setCentralWidget(ui.centralWidget);
}

QtWidgetGL::~QtWidgetGL()
{

}

void QtWidgetGL::on_actionClear_triggered()
{
    ui.openGLWidget->DrawShape(WPOpenGLWidget::None);
}

void QtWidgetGL::on_actionWrieframe_triggered()
{
    ui.openGLWidget->SetShowModel(ui.actionWrieframe->isChecked());
}

void QtWidgetGL::on_atColorChange_triggered()
{
    ui.openGLWidget->SetColorChange(ui.atColorChange->isChecked());
}

void QtWidgetGL::on_atDrawTriangle_triggered()
{
    ui.openGLWidget->DrawShape(WPOpenGLWidget::Triangle);
}


void QtWidgetGL::on_actionDrawRectangle_triggered()
{
    ui.openGLWidget->DrawShape(WPOpenGLWidget::Rects);
}
