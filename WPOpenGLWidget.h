#pragma once
#include <QOpenGLWidget.h>
#include <qopenglfunctions_4_5_core.h>
#include <QOpenGLShaderProgram.h>
#include <qtimer.h>
#include <Qtime>


class WPOpenGLWidget : public QOpenGLWidget, QOpenGLFunctions_4_5_Core
{
    Q_OBJECT
public:
    explicit WPOpenGLWidget(QWidget* parent = nullptr);
    ~WPOpenGLWidget();

public:
    enum MyShape
    {
        None,
        Rects,
        CirCle,
        Triangle
    };

public:
    void DrawShape(MyShape shape);
    void SetShowModel(bool wrieframe);
    void SetColorChange(bool aChangeColor);

private:
    MyShape m_Shapes;
    QOpenGLShaderProgram shaderProgram;
    QTimer tmrColor;
protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();



};

