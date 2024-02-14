#ifndef HISTORIE_H
#define HISTORIE_H

#include <QWidget>

namespace Ui {
class Historie;
}

class Historie : public QWidget
{
    Q_OBJECT

public:
    explicit Historie(QWidget *parent = nullptr);
    ~Historie();

private slots:
    void on_pbtn_main_menu_clicked();

private:
    Ui::Historie *ui;

signals:
    void BackHome_signal();
};

#endif // HISTORIE_H
