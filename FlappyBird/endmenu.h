#ifndef ENDMENU_H
#define ENDMENU_H


#include <QFile>
#include <QDialog>

namespace Ui {
class EndMenu;
}

class EndMenu : public QDialog
{
    Q_OBJECT

public:
    explicit EndMenu(QWidget *parent = 0);
    ~EndMenu();
    void addPlayerInfo();

private:
    Ui::EndMenu *ui;
    QFile *players;
};

#endif // ENDMENU_H
