#ifndef WG2_H
#define WG2_H

#include <QWidget>

namespace Ui {
class WG2;
}

class WG2 : public QWidget
{
    Q_OBJECT

public:
    explicit WG2(QWidget *parent = 0);
    ~WG2();

signals:
    void back();

private slots:
    void slot_back();

private:
    Ui::WG2 *ui;
};

#endif // WG2_H
