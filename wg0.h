#ifndef WG0_H
#define WG0_H

#include <QWidget>

namespace Ui {
class WG0;
}

class WG0 : public QWidget
{
    Q_OBJECT

public:
    explicit WG0(QWidget *parent = 0);
    ~WG0();

signals:
    void choose(std::string);

private slots:
    void clickWG1();
    void clickWG2();

private:
    Ui::WG0 *ui;
};

#endif // WG0_H
