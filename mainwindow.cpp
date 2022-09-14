#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <stdlib.h>
#include <time.h>
#include <QDebug>
#include <QKeyEvent>

//#define Num2048
#ifdef Num2048
#define PIC0 "C:\\Robit\\2048\\0.png"
#define PIC2 "C:\\Robit\\2048\\2.png"
#define PIC4 "C:\\Robit\\2048\\4.png"
#define PIC8 "C:\\Robit\\2048\\8.png"
#define PIC16 "C:\\Robit\\2048\\16.png"
#define PIC32 "C:\\Robit\\2048\\32.png"
#define PIC64 "C:\\Robit\\2048\\64.png"
#define PIC128 "C:\\Robit\\2048\\128.png"
#define PIC256 "C:\\Robit\\2048\\256.png"
#define PIC512 "C:\\Robit\\2048\\512.png"
#define PIC1024 "C:\\Robit\\2048\\1024.png"
#define PIC2048 "C:\\Robit\\2048\\2048.png"
#define PIC4096 "C:\\Robit\\2048\\4096.png"
#endif

#define Zoo2048
#ifdef Zoo2048
#define PIC0 "C:\\Robit\\2048\\0.png"
#define PIC2 "C:\\Robit\\2048\\01ja.png"
#define PIC4 "C:\\Robit\\2048\\02chuk.png"
#define PIC8 "C:\\Robit\\2048\\03in.png"
#define PIC16 "C:\\Robit\\2048\\04myo.png"
#define PIC32 "C:\\Robit\\2048\\05jin.png"
#define PIC64 "C:\\Robit\\2048\\06sa.png"
#define PIC128 "C:\\Robit\\2048\\07oo.png"
#define PIC256 "C:\\Robit\\2048\\08mi.png"
#define PIC512 "C:\\Robit\\2048\\09sin.png"
#define PIC1024 "C:\\Robit\\2048\\010yu.png"
#define PIC2048 "C:\\Robit\\2048\\011sul.png"
#define PIC4096 "C:\\Robit\\2048\\012hae.png"
#endif

int number [4][4];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    srand(time(NULL));

    int x1 = rand()%4;
    int y1 = rand()%4;
    int x2 = rand()%4;
    int y2 = rand()%4;

    while(x1 == x2 && y1 == y2)//배열 위치정하기
    {
        x2 = rand()%4;
        y2 = rand()%4;
    }
// 4 : 10%, 2 : 90%
    int num1 = rand()%10;
    int num2 = rand()%10;

    if(num1 == 9)
    {
        number[x1][y1] = 4;
    }
    else number[x1][y1] = 2;
    if(num2 == 9)
    {
        number[x2][y2] = 4;
    }
    else number[x2][y2] = 2;

    for(int i = 0; i < 4; i++)
    {
        qDebug() << number[i][0] << "\t" << number[i][1] << "\t" << number[i][2] << "\t" << number[i][3];
    }

//1
    if(number[0][0] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[0][0] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

//2
    if(number[0][1] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[0][1] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else
    {
        QPixmap pix1(PIC0);
        ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//3
    if(number[0][2] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));    }
    else if(number[0][2] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//4
    if(number[0][3] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[0][3] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//5
    if(number[1][0] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[1][0] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//6
    if(number[1][1] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[1][1] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//7
    if(number[1][2] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[1][2] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//8
    if(number[1][3] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));    }
    else if(number[1][3] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//9
    if(number[2][0] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[2][0] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//10
    if(number[2][1] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//11
    if(number[2][2] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[2][2] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//12
    if(number[2][3] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[2][3] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//13
    if(number[3][0] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[3][0] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//14
    if(number[3][1] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[3][1] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//15
    if(number[3][2] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
    else if(number[3][2] == 4)
    {
        QPixmap pix1(PIC4);
        ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
//16
    if(number[3][3] == 2)
    {
        QPixmap pix1(PIC2);
        ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }

    else
    {
        QPixmap pix1(PIC0);
        ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A)
    {
        int control = 0;
        int control1 = 0;
        /*count = count - 1;
        if(count > 0)
        {
            ui -> label_gg -> setNum(count);
        }
        else
        {
            ui -> label_gg -> setText("Game\nOver");
        }
        */
        for(int i = 0; i < 4; i++)
        {
            for(int j = 3; j > 0; j--)//빈칸 땡기기
            {
                if(number[i][j-1] == 0 && number[i][j] != 0)
                {
                    number[i][j-1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }
            for(int j = 3; j > 0; j--)//빈칸 땡기기
            {
                if(number[i][j-1] == 0 && number[i][j] != 0)
                {
                    number[i][j-1] = number[i][j];
                    number[i][j] = 0;
                }
            }
            for(int j = 3; j > 0; j--)//빈칸 땡기기
            {
                if(number[i][j-1] == 0 && number[i][j] != 0)
                {
                    number[i][j-1] = number[i][j];
                    number[i][j] = 0;
                }
            }

            for(int j = 0; j < 3; j++)//겹치는거 합치기
            {
                if(number[i][j] == number[i][j+1] && number[i][j] != 0)
                {
                    number[i][j] *= 2;
                    number[i][j+1] = 0;
                    control1++;
                    score = score + number[i][j];
                    qDebug() << "check";
                }
            }
            for(int j = 3; j > 0; j--)//빈칸 땡기기
            {
                if(number[i][j-1] == 0 && number[i][j] != 0)
                {
                    number[i][j-1] = number[i][j];
                    number[i][j] = 0;
                }
            }
            for(int j = 3; j > 0; j--)//빈칸 땡기기
            {
                if(number[i][j-1] == 0 && number[i][j] != 0)
                {
                    number[i][j-1] = number[i][j];
                    number[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < 4; i++)
        {
            qDebug() << number[i][0] << "\t" << number[i][1] << "\t" << number[i][2] << "\t" << number[i][3];
        }

        if(control != 0 || control1 != 0)//전에 카운트세고 여기서 카운트초기화
        {
            int x1 = rand()%4;
            int y1 = rand()%4;

            while(number[x1][y1] != 0)
            {
                x1 = rand()%4;
                y1 = rand()%4;
            }

            int num1 = rand()%10;
            if(num1 == 9)
            {
                number[x1][y1] = 4;
            }
            else number[x1][y1] = 2;

            control = 0;
            control1 = 0;
            //count = 6;
        }

        ui -> label1 -> clear();
        ui -> label2 -> clear();
        ui -> label3 -> clear();
        ui -> label4 -> clear();
        ui -> label5 -> clear();
        ui -> label6 -> clear();
        ui -> label7 -> clear();
        ui -> label8 -> clear();
        ui -> label9 -> clear();
        ui -> label10 -> clear();
        ui -> label11 -> clear();
        ui -> label12 -> clear();
        ui -> label13 -> clear();
        ui -> label14 -> clear();
        ui -> label15 -> clear();
        ui -> label16 -> clear();

//1
        if(number[0][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
        else if(number[0][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

    //2
        if(number[0][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //3
        if(number[0][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //4
        if(number[0][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //5
        if(number[1][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //6
        if(number[1][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //7
        if(number[1][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //8
        if(number[1][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //9
        if(number[2][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //10
        if(number[2][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //11
        if(number[2][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //12
        if(number[2][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //13
        if(number[3][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //14
        if(number[3][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //15
        if(number[3][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //16
        if(number[3][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

        ui -> label_s_2 -> setNum(score);

        for(int i = 0; i < 4; i++)//여기
        {
            for(int j = 0; j < 4; j++)
            {
                if(number[i][j] == 0)
                {
                    PosNull++;
                }
            }
        }
        if(PosNull == 0)//꽉참
        {
            for(int i = 0; i < 4; i++)//여기
            {
                for(int j = 0; j < 3; j++)//왼
                {
                    if(number[i][j] == number[i][j+1] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
                for(int j = 3; j > 0; j--)//오
                {
                    if(number[i][j-1] == number[i][j] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
            }
            for(int j = 0; j < 4; j++)//위
            {
                for(int i = 0; i < 3; i++)
                {
                    if(number[i][j] == number[i+1][j] && number[i+1][j] != 0)
                    {
                        count++;
                    }
                }
                for(int i = 3; i > 0; i--)//아래
                {
                    if(number[i][j] == number[i-1][j] && number[i-1][j] != 0)
                    {
                        count++;
                    }
                }
            }
            if(count == 0)
            {
                ui -> label_gg -> setText("Game\nOver");
            }
            else
            {
                count = 0;
            }
        }
        else
        {
            PosNull = 0;
        }

    }
    else if(event->key() == Qt::Key_D)
    {
        int control = 0;
        int control1 = 0;
        /*
        count = count - 1;
        if(count > 0)
        {
            ui -> label_gg -> setNum(count);
        }
        else
        {
            ui -> label_gg -> setText("Game\nOver");
        }
        */
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 3; j++)//빈칸 땡기기
            {
                if(number[i][j+1] == 0 && number[i][j] != 0)
                {
                    number[i][j+1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }
            for(int j = 0; j < 3; j++)//빈칸 땡기기
            {
                if(number[i][j+1] == 0 && number[i][j] != 0)
                {
                    number[i][j+1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }
            for(int j = 0; j < 3; j++)//빈칸 땡기기
            {
                if(number[i][j+1] == 0 && number[i][j] != 0)
                {
                    number[i][j+1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }

            for(int j = 3; j > 0; j--)//겹치는거 합치기
            {
                if(number[i][j-1] == number[i][j] && number[i][j] != 0)
                {
                    number[i][j] *= 2;
                    number[i][j-1] = 0;
                    control1;
                    score = score + number[i][j];
                    qDebug() << "check";
                }
            }
            for(int j = 0; j < 3; j++)//빈칸 땡기기
            {
                if(number[i][j+1] == 0 && number[i][j] != 0)
                {
                    number[i][j+1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }
            for(int j = 0; j < 3; j++)//빈칸 땡기기
            {
                if(number[i][j+1] == 0 && number[i][j] != 0)
                {
                    number[i][j+1] = number[i][j];
                    number[i][j] = 0;
                    control++;
                }
            }
        }
        for(int i = 0; i < 4; i++)
        {
            qDebug() << number[i][0] << "\t" << number[i][1] << "\t" << number[i][2] << "\t" << number[i][3];
        }

        if(control != 0 || control1 != 0)//전에 카운트세고 여기서 카운트초기화
        {
            int x1 = rand()%4;
            int y1 = rand()%4;

            while(number[x1][y1] != 0)
            {
                x1 = rand()%4;
                y1 = rand()%4;
            }

            int num1 = rand()%10;
            if(num1 == 9)
            {
                number[x1][y1] = 4;
            }
            else number[x1][y1] = 2;

            control = 0;
            control1 = 0;
            //count = 6;
        }

        ui -> label1 -> clear();
        ui -> label2 -> clear();
        ui -> label3 -> clear();
        ui -> label4 -> clear();
        ui -> label5 -> clear();
        ui -> label6 -> clear();
        ui -> label7 -> clear();
        ui -> label8 -> clear();
        ui -> label9 -> clear();
        ui -> label10 -> clear();
        ui -> label11 -> clear();
        ui -> label12 -> clear();
        ui -> label13 -> clear();
        ui -> label14 -> clear();
        ui -> label15 -> clear();
        ui -> label16 -> clear();

//1
        if(number[0][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

    //2
        if(number[0][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //3
        if(number[0][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //4
        if(number[0][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //5
        if(number[1][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //6
        if(number[1][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //7
        if(number[1][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //8
        if(number[1][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //9
        if(number[2][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //10
        if(number[2][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //11
        if(number[2][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //12
        if(number[2][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //13
        if(number[3][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //14
        if(number[3][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //15
        if(number[3][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //16
        if(number[3][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

        ui -> label_s_2 -> setNum(score);

        for(int i = 0; i < 4; i++)//여기
        {
            for(int j = 0; j < 4; j++)
            {
                if(number[i][j] == 0)
                {
                    PosNull++;
                }
            }
        }
        if(PosNull == 0)
        {
            for(int i = 0; i < 4; i++)//여기
            {
                for(int j = 0; j < 3; j++)//왼
                {
                    if(number[i][j] == number[i][j+1] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
                for(int j = 3; j > 0; j--)//오
                {
                    if(number[i][j-1] == number[i][j] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
            }
            for(int j = 0; j < 4; j++)//위
            {
                for(int i = 0; i < 3; i++)
                {
                    if(number[i][j] == number[i+1][j] && number[i+1][j] != 0)
                    {
                        count++;
                    }
                }
                for(int i = 3; i > 0; i--)//아래
                {
                    if(number[i][j] == number[i-1][j] && number[i-1][j] != 0)
                    {
                        count++;
                    }
                }
            }
            if(count == 0)
            {
                ui -> label_gg -> setText("Game\nOver");
            }
            else
            {
                count = 0;
            }
        }
        else
        {
            PosNull = 0;
        }
    }
    else if(event->key() == Qt::Key_W)
    {
        int control = 0;
        int control1 = 0;
        /*
        count = count - 1;
        if(count > 0)
        {
            ui -> label_gg -> setNum(count);
        }
        else
        {
            ui -> label_gg -> setText("Game\nOver");
        }
        */
        for(int j = 0; j < 4; j++)
        {
            for(int i = 0; i < 3; i++)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i+1][j] != 0)
                {
                    number[i][j] = number[i+1][j];
                    number[i+1][j] = 0;
                    control++;
                }
            }
            for(int i = 0; i < 3; i++)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i+1][j] != 0)
                {
                    number[i][j] = number[i+1][j];
                    number[i+1][j] = 0;
                    control++;
                }
            }
            for(int i = 0; i < 3; i++)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i+1][j] != 0)
                {
                    number[i][j] = number[i+1][j];
                    number[i+1][j] = 0;
                    control++;
                }
            }

            for(int i = 0; i < 3; i++)//겹치는거 합치기
            {
                if(number[i][j] == number[i+1][j] && number[i+1][j] != 0)
                {
                    number[i][j] *= 2;
                    number[i+1][j] = 0;
                    control1++;
                    score = score + number[i][j];
                    qDebug() << "check";
                }
            }
            for(int i = 0; i < 3; i++)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i+1][j] != 0)
                {
                    number[i][j] = number[i+1][j];
                    number[i+1][j] = 0;
                    control++;
                }
            }
            for(int i = 0; i < 3; i++)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i+1][j] != 0)
                {
                    number[i][j] = number[i+1][j];
                    number[i+1][j] = 0;
                    control++;
                }
            }
        }
        for(int i = 0; i < 4; i++)
        {
            qDebug() << number[i][0] << "\t" << number[i][1] << "\t" << number[i][2] << "\t" << number[i][3];
        }

        if(control != 0 || control1 != 0)//전에 카운트세고 여기서 카운트초기화
        {
            int x1 = rand()%4;
            int y1 = rand()%4;

            while(number[x1][y1] != 0)
            {
                x1 = rand()%4;
                y1 = rand()%4;
            }

            int num1 = rand()%10;
            if(num1 == 9)
            {
                number[x1][y1] = 4;
            }
            else number[x1][y1] = 2;

            control = 0;
            control1 = 0;
            //count = 6;
        }

        ui -> label1 -> clear();
        ui -> label2 -> clear();
        ui -> label3 -> clear();
        ui -> label4 -> clear();
        ui -> label5 -> clear();
        ui -> label6 -> clear();
        ui -> label7 -> clear();
        ui -> label8 -> clear();
        ui -> label9 -> clear();
        ui -> label10 -> clear();
        ui -> label11 -> clear();
        ui -> label12 -> clear();
        ui -> label13 -> clear();
        ui -> label14 -> clear();
        ui -> label15 -> clear();
        ui -> label16 -> clear();

        if(number[0][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

    //2
        if(number[0][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //3
        if(number[0][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //4
        if(number[0][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //5
        if(number[1][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //6
        if(number[1][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //7
        if(number[1][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //8
        if(number[1][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //9
        if(number[2][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //10
        if(number[2][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //11
        if(number[2][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //12
        if(number[2][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //13
        if(number[3][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //14
        if(number[3][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //15
        if(number[3][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //16
        if(number[3][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

        ui -> label_s_2 -> setNum(score);

        for(int i = 0; i < 4; i++)//여기
        {
            for(int j = 0; j < 4; j++)
            {
                if(number[i][j] == 0)
                {
                    PosNull++;
                }
            }
        }
        if(PosNull == 0)
        {
            for(int i = 0; i < 4; i++)//여기
            {
                for(int j = 0; j < 3; j++)//왼
                {
                    if(number[i][j] == number[i][j+1] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
                for(int j = 3; j > 0; j--)//오
                {
                    if(number[i][j-1] == number[i][j] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
            }
            for(int j = 0; j < 4; j++)//위
            {
                for(int i = 0; i < 3; i++)
                {
                    if(number[i][j] == number[i+1][j] && number[i+1][j] != 0)
                    {
                        count++;
                    }
                }
                for(int i = 3; i > 0; i--)//아래
                {
                    if(number[i][j] == number[i-1][j] && number[i-1][j] != 0)
                    {
                        count++;
                    }
                }
            }
            if(count == 0)
            {
                ui -> label_gg -> setText("Game\nOver");
            }
            else
            {
                count = 0;
            }
        }
        else
        {
            PosNull = 0;
        }
    }
    else if(event->key() == Qt::Key_S)
    {
        int control = 0;
        int control1 = 0;
        /*
        count = count - 1;
        if(count > 0)
        {
            ui -> label_gg -> setNum(count);
        }
        else
        {
            ui -> label_gg -> setText("Game\nOver");
        }
        */
        for(int j = 0; j < 4; j++)
        {
            for(int i = 3; i > 0; i--)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i-1][j] != 0)
                {
                    number[i][j] = number[i-1][j];
                    number[i-1][j] = 0;
                    control++;
                }
            }
            for(int i = 3; i > 0; i--)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i-1][j] != 0)
                {
                    number[i][j] = number[i-1][j];
                    number[i-1][j] = 0;
                    control++;
                }
            }
            for(int i = 3; i > 0; i--)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i-1][j] != 0)
                {
                    number[i][j] = number[i-1][j];
                    number[i-1][j] = 0;
                    control++;
                }
            }

            for(int i = 3; i > 0; i--)//겹치는거 합치기
            {
                if(number[i][j] == number[i-1][j] && number[i-1][j] != 0)
                {
                    number[i][j] *= 2;
                    number[i-1][j] = 0;
                    control1++;
                    score = score + number[i][j];
                    qDebug() << "check";
                }
            }
            for(int i = 3; i > 0; i--)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i-1][j] != 0)
                {
                    number[i][j] = number[i-1][j];
                    number[i-1][j] = 0;
                    control++;
                }
            }
            for(int i = 3; i > 0; i--)//빈칸 땡기기
            {
                if(number[i][j] == 0 && number[i-1][j] != 0)
                {
                    number[i][j] = number[i-1][j];
                    number[i-1][j] = 0;
                    control++;
                }
            }
        }
        for(int i = 0; i < 4; i++)
        {
            qDebug() << number[i][0] << "\t" << number[i][1] << "\t" << number[i][2] << "\t" << number[i][3];
        }

        if(control != 0 || control1 != 0)//전에 카운트세고 여기서 카운트초기화
        {
            int x1 = rand()%4;
            int y1 = rand()%4;

            while(number[x1][y1] != 0)
            {
                x1 = rand()%4;
                y1 = rand()%4;
            }

            int num1 = rand()%10;
            if(num1 == 9)
            {
                number[x1][y1] = 4;
            }
            else number[x1][y1] = 2;

            control = 0;
            control1 = 0;
            //count = 6;
        }

        ui -> label1 -> clear();
        ui -> label2 -> clear();
        ui -> label3 -> clear();
        ui -> label4 -> clear();
        ui -> label5 -> clear();
        ui -> label6 -> clear();
        ui -> label7 -> clear();
        ui -> label8 -> clear();
        ui -> label9 -> clear();
        ui -> label10 -> clear();
        ui -> label11 -> clear();
        ui -> label12 -> clear();
        ui -> label13 -> clear();
        ui -> label14 -> clear();
        ui -> label15 -> clear();
        ui -> label16 -> clear();

//1
        if(number[0][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label1 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

    //2
        if(number[0][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label2 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //3
        if(number[0][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label3 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //4
        if(number[0][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[0][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label4 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //5
        if(number[1][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label5 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //6
        if(number[1][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label6 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //7
        if(number[1][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label7 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //8
        if(number[1][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[1][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label8 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //9
        if(number[2][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label9 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //10
        if(number[2][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label10 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //11
        if(number[2][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label11 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //12
        if(number[2][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[2][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label12 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //13
        if(number[3][0] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][0] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label13 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //14
        if(number[3][1] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][1] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label14 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //15
        if(number[3][2] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][2] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label15 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }
    //16
        if(number[3][3] == 2)
        {
            QPixmap pix1(PIC2);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4)
        {
            QPixmap pix1(PIC4);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 8)
        {
            QPixmap pix1(PIC8);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 16)
        {
            QPixmap pix1(PIC16);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 32)
        {
            QPixmap pix1(PIC32);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 64)
        {
            QPixmap pix1(PIC64);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 128)
        {
            QPixmap pix1(PIC128);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 256)
        {
            QPixmap pix1(PIC256);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 512)
        {
            QPixmap pix1(PIC512);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 1024)
        {
            QPixmap pix1(PIC1024);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 2048)
        {
            QPixmap pix1(PIC2048);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else if(number[3][3] == 4096)
        {
            QPixmap pix1(PIC4096);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));

        }
        else
        {
            QPixmap pix1(PIC0);
            ui -> label16 -> setPixmap(pix1.scaled(100,100,Qt::KeepAspectRatio));
        }

        ui -> label_s_2 -> setNum(score);

        for(int i = 0; i < 4; i++)//여기
        {
            for(int j = 0; j < 4; j++)
            {
                if(number[i][j] == 0)
                {
                    PosNull++;
                }
            }
        }
        if(PosNull == 0)
        {
            for(int i = 0; i < 4; i++)//여기
            {
                for(int j = 0; j < 3; j++)//왼
                {
                    if(number[i][j] == number[i][j+1] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
                for(int j = 3; j > 0; j--)//오
                {
                    if(number[i][j-1] == number[i][j] && number[i][j] != 0)
                    {
                        count++;
                    }
                }
            }
            for(int j = 0; j < 4; j++)//위
            {
                for(int i = 0; i < 3; i++)
                {
                    if(number[i][j] == number[i+1][j] && number[i+1][j] != 0)
                    {
                        count++;
                    }
                }
                for(int i = 3; i > 0; i--)//아래
                {
                    if(number[i][j] == number[i-1][j] && number[i-1][j] != 0)
                    {
                        count++;
                    }
                }
            }
            if(count == 0)
            {
                ui -> label_gg -> setText("Game\nOver");
            }
            else
            {
                count = 0;
            }
        }
        else
        {
            PosNull = 0;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

