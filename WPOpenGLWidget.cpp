#include "WPOpenGLWidget.h"

unsigned int VBO, VAO;

float vertices3[] = {
	-0.5f, -0.5f,0.0f, 1.0f, 0.0f, 0.0f,
	0.5f, -0.5f,0.0f, 0.0f, 1.0f, 0.0f,
	0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 
	-0.5f, 0.5f, 0.0f, 0.5f, 0.5f, 0.5f
};

float vertices[] = {
	// first triangle
	0.5f,0.5f,0.0f, 1.0f, 0.0f, 0.0f,
	// top right	
	0.5f,-0.5f, 0.0f,  0.0f, 1.0f, 0.0f,
	// bottom right
	-0.5f,0.5f,0.0f, 0.0f, 0.0f, 1.0f,
	// top left/second triangle
	0.5f,-0.5f,0.0f, 1.0f, 0.0f, 0.0f,
	// bottom right
	-0.5f,-0.5f, 0.0f, 0.0f, 0.0f, 1.0f,
	// bottom left
	-0.5f,0.5f, 0.0f, 0.5f, 0.5f, 0.5f,
};


WPOpenGLWidget::WPOpenGLWidget(QWidget* parent):QOpenGLWidget(parent)
{
	
}

WPOpenGLWidget::~WPOpenGLWidget()
{
	if (!isValid())
	{
		return;
	}
	makeCurrent();
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO); 
	doneCurrent();
}

void WPOpenGLWidget::DrawShape(MyShape shape)
{
	m_Shapes = shape;
	update();
}

void WPOpenGLWidget::SetShowModel(bool wrieframe)
{
	makeCurrent();
	if (wrieframe)
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	}
	else
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	}
	update();
	doneCurrent();
}

void WPOpenGLWidget::SetColorChange(bool aChangeColor)
{
	if (aChangeColor)
	{
		tmrColor.start();
		makeCurrent();
		int tmrValue = QTime::currentTime().second();
		float greenValue = (sin(tmrValue) / 0.2f) + 0.5f;
		shaderProgram.setUniformValue("ourColor", 0.0f, greenValue, 0.0f, 1.0f);
		doneCurrent();
		update();
	}
	else
	{
		//tmrColor.stop();
	}
}

void WPOpenGLWidget::initializeGL()
{
	initializeOpenGLFunctions();

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	//��VBO��VAo����
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//Ϊ��ǰ�󶨵�target�Ļ��������󴴽�һ���µ����ݴ洢��
	//���data����NULL����ʹ�����Դ�ָ������ݳ�ʼ�����ݴ洢
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	//��֪�Կ���ν��������������ֵ
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	//����VAo����ĵ�һ������ֵ
	glEnableVertexAttribArray(0);
	//��֪�Կ���ν��������������ֵ
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	//����VAo����ĵ�һ������ֵ
	glEnableVertexAttribArray(1);


	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	//link shaders
	bool Success;
	shaderProgram.addShaderFromSourceFile(QOpenGLShader::Vertex, ":/shaders/shapes.vert");
	shaderProgram.addShaderFromSourceFile(QOpenGLShader::Fragment, ":/shaders/shapes.frag");
	Success = shaderProgram.link();
	if (Success)
	{
		//QDebug() << "Error link" << shaderProgram.log();
	}
}


void WPOpenGLWidget::resizeGL(int w, int h)
{
}

void WPOpenGLWidget::paintGL()
{
	if (m_Shapes = None)
	{
		return;
	}
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	shaderProgram.bind();
	glBindVertexArray(VAO);
	switch (m_Shapes)
	{
	case WPOpenGLWidget::None:
		break;
	case WPOpenGLWidget::Rects:
		glDrawArrays(GL_TRIANGLES, 0, 6);
		break;
	case WPOpenGLWidget::CirCle:
		break;
	case WPOpenGLWidget::Triangle:
		glDrawArrays(GL_TRIANGLES, 0, 3);
		break;
	default:
		break;
	}
}


