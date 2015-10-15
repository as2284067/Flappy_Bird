#ifndef STARTMENU_H
#define STARTMENU_H

#include <QMenu>
#include <QScrollBar>
#include <QDialog>
#include "mainscene.h"
#include "uicontroller.h"

namespace Ui {
class StartMenu;
}

class StartMenu : public QDialog
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = 0);
    ~StartMenu();

private slots:
    /*This function starts the game when start is clicked*/
    void on_startButton_clicked();

    void on_quitButton_clicked();

    void on_difficultyComboBox_activated(const QString &arg1);

private:
    Ui::StartMenu *ui;
    StartMenu* startMenu;
};

#endif // STARTMENU_H
