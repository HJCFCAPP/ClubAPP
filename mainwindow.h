#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class PlayerInfo
{
public:
    PlayerInfo(int id, std::string name);

private:
    int m_id;
    std::string m_name;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void loadPlayer();

private slots:
    void on_pushButton_pressed();

    void on_columnView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QDialog* m_create_dialog;

    std::vector<PlayerInfo*> m_player_list;
};

#endif // MAINWINDOW_H
