#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <stringstream>
//#include "initdb.h"
#include <QStandardItemModel>
//#include <QtSql>
#include "create_player.h"

PlayerInfo::PlayerInfo(int id, std::string name)
{
    m_id = id;
    m_name = name;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_create_dialog = NULL;
    m_create_dialog = new create_player();


    //QObject::connect(ui->on_pushButton_2_clicked, SIGNAL(clicked()), m_create_dialog, SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadPlayer()
{
    for(int i=0; i<10; ++i)
    {
        //std::stringstream str;
        //str<<"name+"<<i;
        PlayerInfo* newPlayer = new PlayerInfo(i, "name");
        m_player_list.push_back(newPlayer);
    }

}

void MainWindow::on_pushButton_pressed()
{
    loadPlayer();


    QStandardItemModel  *model = new QStandardItemModel();

    model->setColumnCount(2);

    model->setHeaderData(0,Qt::Horizontal,("id"));

    model->setHeaderData(1,Qt::Horizontal,("name"));

    ui->tableView->setModel(model);

    for(int i = 0; i < 3; i++)
     {
         model->setItem(i,0,new QStandardItem("2009441676"));
        //设置字符颜色
         model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
        //设置字符位置
         model->item(i,0)->setTextAlignment(Qt::AlignCenter);
         model->setItem(i,1,new QStandardItem(("哈哈")));
     }

}

void MainWindow::on_columnView_clicked(const QModelIndex &index)
{

}


void MainWindow::on_pushButton_2_clicked()
{

   m_create_dialog->show();

}

