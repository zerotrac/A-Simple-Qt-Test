#ifndef WG1_H
#define WG1_H

#include <QWidget>

namespace Ui {
class WG1;
}

class WG1 : public QWidget
{
    Q_OBJECT

public:
    explicit WG1(QWidget *parent = 0);
    ~WG1();

private:
    Ui::WG1 *ui;
};

#endif // WG1_H
