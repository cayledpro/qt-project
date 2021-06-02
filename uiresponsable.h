#ifndef UIRESPONSABLE_H
#define UIRESPONSABLE_H

#include <QMainWindow>
#include "ui_UIResponsable.h"

namespace Ui {
    class UIResponsable;
}

class UIResponsable : public QMainWindow
{
    Q_OBJECT

public:
    UIResponsable(QWidget *parent = nullptr);
    UIResponsable(QObject *controller = nullptr);

private:
    Ui::UIResponsable *ui;
};

#endif // UIRESPONSABLE_H
