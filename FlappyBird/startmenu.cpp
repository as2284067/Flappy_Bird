#include "startmenu.h"
#include "ui_startmenu.h"
#include "uicontroller.h"
#include "mainscene.h"


StartMenu::StartMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);

    //Fill the items of the difficulty ComboBox
    ui->difficultyComboBox->addItem("Easy");
    ui->difficultyComboBox->addItem("Medium");
    ui->difficultyComboBox->addItem("Hard");

}

StartMenu::~StartMenu()
{
    delete ui;
}


void StartMenu::on_difficultyComboBox_activated(const QString &arg1)
{
    if(ui->difficultyComboBox->currentText().compare("Easy")){
        //low speed
        //UIController->changeDifficulty(12, 170);
    }
    else if (ui->difficultyComboBox->currentText().compare("Medium")){
        //medium speed
        //UiController->changeDifficulty(15, 200);
    }
    else if (ui->difficultyComboBox->currentText().compare("Hard")){
        //high speed
        //UIController->changeDifficulty(18, 250);
    }
}


void StartMenu::on_BigStartButton_clicked()
{
    ui->difficultyComboBox->currentText().compare("Easy");
}

