#include <opencv/highgui.h>
int main()
{
    IplImage*img=cvLoadImage("c:/kuromi.jpg");
    cvShowImage("kuromi", img);
    cvWaitKey(0);
}
