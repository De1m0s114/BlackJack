#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <cstdlib>
#include <QVector>
#include <QString>



QVector <int> index_vec;
SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{

    ui->setupUi(this);
    QPixmap pix(":/background/Picture/table.jpg");
    ui->label->setPixmap(pix.scaled(800,600,Qt::KeepAspectRatioByExpanding));
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->points_d->hide();
    ui->points_p->hide();
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

struct count_viz{
    QString link;
    int point;
};

count_viz generate_card(){
    int index;
    count_viz card;
    index=rand()%52;
    while(std::find(index_vec.begin(),index_vec.end(),index)!=index_vec.end())index=rand()%52;
    index_vec.push_back(index);
    if(index==0){
        card.link=":/cards/Picture/two_bub.JPG";
        card.point=2;
    }
    else if(index==1){
        card.link=":/cards/Picture/two_ch.JPG";
        card.point=2;
    }
    else if(index==2){
        card.link=":/cards/Picture/two_kr.JPG";
        card.point=2;
    }
    else if(index==3){
        card.link=":/cards/Picture/two_pic.JPG";
        card.point=2;
    }
    else if(index==4){
        card.link=":/cards/Picture/three_bub.JPG";
        card.point=3;
    }
    else if(index==5){
        card.link=":/cards/Picture/three_ch.JPG";
        card.point=3;
    }
    else if(index==6){
        card.link=":/cards/Picture/three_kr.JPG";
        card.point=3;
    }
    else if(index==7){
        card.link=":/cards/Picture/three_pic.JPG";
        card.point=3;
    }
    else if(index==8){
        card.link=":/cards/Picture/four_bub.JPG";
        card.point=4;
    }
    else if(index==9){
        card.link=":/cards/Picture/four_ch.JPG";
        card.point=4;
    }
    else if(index==10){
        card.link=":/cards/Picture/four_kr.JPG";
        card.point=4;
    }
    else if(index==11){
        card.link=":/cards/Picture/four_pic.JPG";
        card.point=4;
    }
    else if(index==12){
        card.link=":/cards/Picture/five_bub.JPG";
        card.point=5;
    }
    else if(index==13){
        card.link=":/cards/Picture/five_ch.JPG";
        card.point=5;
    }
    else if(index==14){
        card.link=":/cards/Picture/five_kr.JPG";
        card.point=5;
    }
    else if(index==15){
        card.link=":/cards/Picture/five_pic.JPG";
        card.point=5;
    }
    else if(index==16){
        card.link=":/cards/Picture/six_bub.JPG";
        card.point=6;
    }
    else if(index==17){
        card.link=":/cards/Picture/six_ch.JPG";
        card.point=6;
    }
    else if(index==18){
        card.link=":/cards/Picture/six_kr.JPG";
        card.point=6;
    }
    else if(index==19){
        card.link=":/cards/Picture/six_pic.JPG";
        card.point=6;
    }
    else if(index==20){
        card.link=":/cards/Picture/seven_bub.JPG";
        card.point=7;
    }
    else if(index==21){
        card.link=":/cards/Picture/seven_ch.JPG";
        card.point=7;
    }
    else if(index==22){
        card.link=":/cards/Picture/seven_kr.JPG";
        card.point=7;
    }
    else if(index==23){
        card.link=":/cards/Picture/seven_pic.JPG";
        card.point=7;
    }
    else if(index==24){
        card.link=":/cards/Picture/eight_bub.JPG";
        card.point=8;
    }
    else if(index==25){
        card.link=":/cards/Picture/eight_ch.JPG";
        card.point=8;
    }
    else if(index==26){
        card.link=":/cards/Picture/eight_kr.JPG";
        card.point=8;
    }
    else if(index==27){
        card.link=":/cards/Picture/eight_pic.JPG";
        card.point=8;
    }
    else if(index==28){
        card.link=":/cards/Picture/nine_bub.JPG";
        card.point=9;
    }
    else if(index==29){
        card.link=":/cards/Picture/nine_ch.JPG";
        card.point=9;
    }
    else if(index==30){
        card.link=":/cards/Picture/nine_kr.JPG";
        card.point=9;
    }
    else if(index==31){
        card.link=":/cards/Picture/nine_pic.JPG";
        card.point=9;
    }
    else if(index==32){
        card.link=":/cards/Picture/ten_bub.JPG";
        card.point=10;
    }
    else if(index==33){
        card.link=":/cards/Picture/ten_ch.JPG";
        card.point=10;
    }
    else if(index==34){
        card.link=":/cards/Picture/ten_kr.JPG";
        card.point=10;
    }
    else if(index==35){
        card.link=":/cards/Picture/ten_pic.JPG";
        card.point=10;
    }
    else if(index==36){
        card.link=":/cards/Picture/valet_bub.JPG";
        card.point=10;
    }
    else if(index==37){
        card.link=":/cards/Picture/valet_ch.JPG";
        card.point=10;
    }
    else if(index==38){
        card.link=":/cards/Picture/valet_kr.JPG";
        card.point=10;
    }
    else if(index==39){
        card.link=":/cards/Picture/valet_pic.JPG";
        card.point=10;
    }
    else if(index==40){
        card.link=":/cards/Picture/dama_bub.JPG";
        card.point=10;
    }
    else if(index==41){
        card.link=":/cards/Picture/dama_ch.JPG";
        card.point=10;
    }
    else if(index==42){
        card.link=":/cards/Picture/dama_kr.JPG";
        card.point=10;
    }
    else if(index==43){
        card.link=":/cards/Picture/dama_pic.JPG";
        card.point=10;
    }
    else if(index==44){
        card.link=":/cards/Picture/king_bub.JPG";
        card.point=10;
    }
    else if(index==45){
        card.link=":/cards/Picture/king_ch.JPG";
        card.point=10;
    }
    else if(index==46){
        card.link=":/cards/Picture/king_kr.JPG";
        card.point=10;
    }
    else if(index==47){
        card.link=":/cards/Picture/king_pic.JPG";
        card.point=10;
    }
    else if(index==48){
        card.link=":/cards/Picture/tuz_bub.JPG";
        card.point=11;
    }
    else if(index==49){
        card.link=":/cards/Picture/tuz_ch.JPG";
        card.point=11;
    }
    else if(index==50){
        card.link=":/cards/Picture/tuz_kr.JPG";
        card.point=11;
    }
    else if(index==51){
        card.link=":/cards/Picture/tuz_pic.JPG";
        card.point=11;
    }

    return card;
}

void SecondWindow::on_pushButton_clicked()
{
   QPixmap pix0(":/cards/Picture/back.JPG");
   ui->p_5->setPixmap(pix0.scaled(141,171,Qt::KeepAspectRatioByExpanding));
   ui->points_d->hide();
   ui->p_1->clear();
   ui->p_2->clear();
   ui->p_3->clear();
   ui->p_4->clear();
   ui->d_1->clear();
   ui->d_2->clear();
   ui->d_3->clear();
   ui->d_4->clear();
   index_vec.clear();
   ui->p_1->show();
   ui->p_2->show();
   int score, bet,res;
   score=ui->score->toPlainText().toInt();
   bet=ui->spinBox->value();
   if(bet==0){
       bet=1;
       ui->spinBox->setValue(1);
   }
   if(bet>score){
       bet=score;
       ui->spinBox->setValue(bet);
   }
   score-=bet;
   ui->pushButton->hide();
   ui->spinBox->hide();
   ui->lineEdit_2->hide();
   ui->pushButton_2->show();
   ui->pushButton_3->show();
   ui->score->setText(QString::number(score));
   count_viz card=generate_card();
   QString href=card.link;
   QPixmap pix(href);
   animation = new QPropertyAnimation(ui->p_1,"geometry");
   animation->setDuration(3000);
   animation->setStartValue(QRect(500,200,141,171));
   animation->setEndValue(QRect(130,370,141,171));
   animation->start();
   ui->p_1->setPixmap(pix.scaled(115,140,Qt::KeepAspectRatioByExpanding));
   res=card.point;
   card=generate_card();
   href=card.link;
   res+=card.point;
   QPixmap pix2(href);
   animation = new QPropertyAnimation(ui->p_2,"geometry");
   animation->setDuration(3000);
   animation->setStartValue(QRect(500,200,141,171));
   animation->setEndValue(QRect(210,370,141,171));
   animation->start();
   ui->p_2->setPixmap(pix2.scaled(115,140,Qt::KeepAspectRatioByExpanding));
   ui->points_p->setText(QString::number(res));
   ui->points_p->show();

   //Перед новым раундом
   //ui->pushButton->show();
   //ui->spinBox->show();
   //ui->lineEdit_2->show();

}


void SecondWindow::on_pushButton_3_clicked()
{
    ui->p_3->show();
    count_viz card=generate_card();
    int res=ui->points_p->toPlainText().toInt();
    res+=card.point;
    QString href=card.link;
    QPixmap pix(href);
    animation = new QPropertyAnimation(ui->p_3,"geometry");
    animation->setDuration(3000);
    animation->setStartValue(QRect(500,200,141,171));
    animation->setEndValue(QRect(270,370,141,171));
    animation->start();
    ui->p_3->setPixmap(pix.scaled(115,140,Qt::KeepAspectRatioByExpanding));
    ui->points_p->setText(QString::number(res));
    ui->pushButton_3->hide();
    ui->pushButton_4->show();
    if(res>21){
        int score;
        score=ui->score->toPlainText().toInt();
        if(score==0){
            ui->lineEdit_2->setText("Гроші скінчились");
            ui->lineEdit_2->show();
            ui->pushButton_5->show();
        }
        else{
            ui->lineEdit_2->setText("Ви програли, давайте знову");
            ui->pushButton_4->hide();
            ui->pushButton->show();
            ui->spinBox->show();
            ui->lineEdit_2->show();}

    }
}
void SecondWindow::on_pushButton_4_clicked()
{
    ui->p_4->show();
    count_viz card=generate_card();
    int res=ui->points_p->toPlainText().toInt();
    res+=card.point;
    QString href=card.link;
    QPixmap pix(href);
    ui->points_p->setText(QString::number(res));
    animation = new QPropertyAnimation(ui->p_4,"geometry");
    animation->setDuration(3000);
    animation->setStartValue(QRect(500,200,141,171));
    animation->setEndValue(QRect(340,370,141,171));
    animation->start();
    ui->p_4->setPixmap(pix.scaled(115,140,Qt::KeepAspectRatioByExpanding));
    ui->pushButton_4->hide();
    if(res>21){
        int score;
        score=ui->score->toPlainText().toInt();
        if(score==0){
            ui->lineEdit_2->setText("Гроші скінчились");
            ui->lineEdit_2->show();
            ui->pushButton_5->show();
        }
        else{
            ui->lineEdit_2->setText("Ви програли, давайте знову");
            ui->pushButton->show();
            ui->spinBox->show();
            ui->lineEdit_2->show();}
    }
}


void SecondWindow::on_pushButton_2_clicked()
{
    ui->pushButton_4->hide();
    ui->pushButton_3->hide();
    ui->pushButton_2->hide();
    ui->points_d->show();
    count_viz card=generate_card();
    int res= card.point;
    QString href=card.link;
    QPixmap pix(href);
    animation = new QPropertyAnimation(ui->d_1,"geometry");
    animation->setDuration(3000);
    animation->setStartValue(QRect(500,200,141,171));
    animation->setEndValue(QRect(140,70,141,171));
    animation->start();
    ui->d_1->setPixmap(pix.scaled(115,140,Qt::KeepAspectRatioByExpanding));
    card=generate_card();
    res+=card.point;
    href=card.link;
    QPixmap pix2(href);
    animation = new QPropertyAnimation(ui->d_2,"geometry");
    animation->setDuration(3000);
    animation->setStartValue(QRect(500,200,141,171));
    animation->setEndValue(QRect(210,70,141,171));
    animation->start();
    ui->d_2->setPixmap(pix2.scaled(115,140,Qt::KeepAspectRatioByExpanding));
    ui->points_d->setText(QString::number(res));
    int points_p=ui->points_p->toPlainText().toInt();
    if(points_p>res){
        card=generate_card();
        res+=card.point;
        href=card.link;
        QPixmap pix3(href);
        animation = new QPropertyAnimation(ui->d_3,"geometry");
        animation->setDuration(3000);
        animation->setStartValue(QRect(500,200,141,171));
        animation->setEndValue(QRect(260,70,141,171));
        animation->start();
        ui->d_3->setPixmap(pix3.scaled(115,140,Qt::KeepAspectRatioByExpanding));
        ui->points_d->setText(QString::number(res));
    }
    if(points_p>res){
        card=generate_card();
        res+=card.point;
        href=card.link;
        animation = new QPropertyAnimation(ui->d_4,"geometry");
        animation->setDuration(3000);
        animation->setStartValue(QRect(500,200,141,171));
        animation->setEndValue(QRect(320,70,141,171));
        animation->start();
        QPixmap pix4(href);
        ui->d_4->setPixmap(pix4.scaled(115,140,Qt::KeepAspectRatioByExpanding));
        ui->points_d->setText(QString::number(res));
    }
    if(res==points_p){
        ui->lineEdit_2->setText("Нічия");
        ui->pushButton->show();
        ui->spinBox->show();
        ui->lineEdit_2->show();
        int score=ui->score->toPlainText().toInt();
        int bet=ui->spinBox->value();
        score+=bet;
        ui->score->setText(QString::number(score));
    }
    else if(res>21){
        ui->lineEdit_2->setText("Ви перемогли, Вітаємо");
        ui->pushButton->show();
        ui->spinBox->show();
        ui->lineEdit_2->show();
        int score=ui->score->toPlainText().toInt();
        int bet=ui->spinBox->value();
        score+=2*bet;
        ui->score->setText(QString::number(score));
    }

    else{
        int score;
        score=ui->score->toPlainText().toInt();
        if(score==0){
            ui->lineEdit_2->setText("Гроші скінчились");
            ui->lineEdit_2->show();
            ui->pushButton_5->show();
        }
        else{
            ui->lineEdit_2->setText("Ви програли, давайте знову");
            ui->pushButton->show();
            ui->spinBox->show();
            ui->lineEdit_2->show();}

    }
}




