#ifndef MASTER_H
#define MASTER_H

#include <QMainWindow>

namespace Ui {
class Master;
}

class Master : public QMainWindow
{
    Q_OBJECT

public:
    explicit Master(QWidget *parent = 0);
    ~Master();

private:
    Ui::Master *ui;
};

#endif // MASTER_H
