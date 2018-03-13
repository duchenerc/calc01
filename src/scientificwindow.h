#ifndef SCIENTIFICWINDOW_H
#define SCIENTIFICWINDOW_H

#include <QDialog>
#include "memStorage.h"

namespace Ui {
class scientificWindow;
}

class scientificWindow : public QDialog
{
    Q_OBJECT

public:
    explicit scientificWindow(QWidget *parent = 0);
    ~scientificWindow();
    MemStorage mem;

private:
    Ui::scientificWindow *ui;

private slots:
    void digitPressed();
    void clearPressed();
    void backPressed();
    void basicModePressed();
    void helpPressed();
    void parFuncPressed();
    void piPressed();
    void leftParPressed();
    void rightParPressed();
    void decimalPressed();
    void sqrtPressed();
    void cbrtPressed();
    void powerPressed();
    void expPressed();

    void upPressed();
    void downPressed();
    void equalsPressed();
    void on_lineEdit_returnPressed();

    void dividePressed();
    void multiplyPressed();
    void addPressed();
    void subtractPressed();
};

#endif // SCIENTIFICWINDOW_H
