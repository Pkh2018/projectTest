//#include<opencv2/opencv.hpp>
//
//using namespace cv;
//
//int main()
//{
//	Mat girl = imread("girl.jpg"); //载入图像到Mat
//	imshow("【1】动漫图", girl);//显示名为 "【1】动漫图"的窗口  
//	waitKey(0);
//	return 0;
//}

#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  

using namespace cv;

int main()
{
	// 读入一张图片（poyanghu缩小图）    
	Mat img = imread("girl.jpg");
	// 创建一个名为 "图片"窗口    
	namedWindow("图片");
	// 在窗口中显示图片   
	imshow("图片", img);
	// 等待6000 ms后窗口自动关闭    
	waitKey(6000);
	return 0;
}
//#include <stdlib.h>
//#include <GL/glut.h>
//
//void renderScene()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_TRIANGLES);
//	glVertex3f(-0.5, -0.5, 0.0);
//	glVertex3f(0.5, 0.0, 0.0);
//	glVertex3f(0.0, 0.5, 0.0);
//	glEnd();
//	glFlush();
//}
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(320, 320);
//	glutCreateWindow("GLUT TUT");
//	glutDisplayFunc(renderScene);
//	glutMainLoop();
//}