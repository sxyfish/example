#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>


#include<iostream>
#include<string>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        cout<<"the number of paramenter is wrong";
        exit(0);
    }
    string name(argv[1]);
    cout<<"file name is :"<<name<<endl;
    Mat img = imread(name, CV_LOAD_IMAGE_COLOR);
    if(! img.data)
    {

            cout<<"*****************************"<<endl;
            cout <<  "Could not open or find the image" << endl;
            cout<<"*****************************"<<endl;
            return -1;

    }

    namedWindow( "lena", CV_WINDOW_AUTOSIZE );
    imshow("lena", img);
    waitKey(0);
    return 0;
}







