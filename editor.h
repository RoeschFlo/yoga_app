#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>

namespace Ui {
class Editor;
}

class Editor : public QWidget
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

private slots:
    void on_pbtn_main_menu_clicked();

private:
    Ui::Editor *ui;

signals:
    void BackHome_signal();
};

#endif // EDITOR_H
