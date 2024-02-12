#ifndef EXERCISE_INPUT_BOX_H
#define EXERCISE_INPUT_BOX_H

#include <QDialog>

class QLineEdit;
class QLabel;

class InputDialog : public QDialog
{
    Q_OBJECT
public:
    explicit InputDialog(QWidget *parent = nullptr);

    static QStringList getStrings(QWidget *parent, bool *ok = nullptr);

private:
    QList<QLineEdit*> fields;
};


#endif // EXERCISE_INPUT_BOX_H
