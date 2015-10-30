#ifndef STARTMENU_H
#define STARTMENU_H


#include <QDialog>


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

    void on_difficultyComboBox_activated(const QString &arg1);

    void on_BigStartButton_clicked();

private:
    Ui::StartMenu *ui;
    StartMenu* startMenu;
};

#endif // STARTMENU_H
