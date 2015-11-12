#include "endmenu.h"
#include "ui_endmenu.h"

EndMenu::EndMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EndMenu)
{
    ui->setupUi(this);
}

EndMenu::~EndMenu()
{
    delete ui;
}

void EndMenu::addPlayerInfo()
{
    players = new QFile("players.txt");
    if(!players->open(QIODevice::WriteOnly|QIODevice::Text))
        return;
//    QTextStream out(&players);
//    out << ui->nameLineEdit->text();
    //add score?
    //read file for highest score
    //close file?
}
