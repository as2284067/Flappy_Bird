#include "startmenu.h"
#include "ui_startmenu.h"
#include "uicontroller.h"
#include "mainscene.h"

/*
 * I spent a few hours playing with this file
 * and I think we should migrate it to mainwindow.ui
 * I haven't been able to figure out how to open startMenu
 * without breaking the code
 *
 */

StartMenu::StartMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);

    //Fill the items of the difficulty ComboBox
    ui->difficultyComboBox->addItem("Easy");
    ui->difficultyComboBox->addItem("Medium");
    ui->difficultyComboBox->addItem("Hard");

    startMenu = new StartMenu(0);
    startMenu->setModal(true);
    startMenu->exec();
}

StartMenu::~StartMenu()
{
    delete ui;
}

void StartMenu::on_startButton_clicked()
{
    /*
    if(ui->difficultyComboBox->currentText().compare("Easy")){
        //low speed
        //uicontroller->changeDifficulty(12, 170);
    }
    else if (ui->difficultyComboBox->currentText().compare("Medium")){
        //medium speed
        //uicontroller->changeDifficulty(15, 200);
    }
    else if (ui->difficultyComboBox->currentText().compare("Hard")){
        //high speed
        //uicontroller->changeDifficulty(18, 250);
    }
    */
}

void StartMenu::on_quitButton_clicked()
{
    qApp->quit();
}

void StartMenu::on_difficultyComboBox_activated(const QString &arg1)
{
    if(ui->difficultyComboBox->currentText().compare("Easy")){
        //low speed
        //uicontroller->changeDifficulty(12, 170);
    }
    else if (ui->difficultyComboBox->currentText().compare("Medium")){
        //medium speed
        //uicontroller->changeDifficulty(15, 200);
    }
    else if (ui->difficultyComboBox->currentText().compare("Hard")){
        //high speed
        //uicontroller->changeDifficulty(18, 250);
    }
}
