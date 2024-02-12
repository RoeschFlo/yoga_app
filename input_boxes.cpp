#include "input_boxes.h"

#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QFormLayout>

InputDialog::InputDialog(QWidget *parent) : QDialog(parent)
{   //Problem Scope von Daten existiert nur in Konstruktor muss in header deklariert werden!!
    QFormLayout *lytMain = new QFormLayout(this);

    QLabel *tLabel_1 = new QLabel(QString("Übungsname").arg(1), this);
    QLineEdit *tLine_1 = new QLineEdit(this);
    lytMain->addRow(tLabel_1, tLine_1);

    QLabel *tLabel_2 = new QLabel(QString("Übungsdauer").arg(2), this);
    QLineEdit *tLine_2 = new QLineEdit(this);
    lytMain->addRow(tLabel_2, tLine_2);

    //Später erstmal läuft es ohne Bild
    // QLabel *tLabel_3 = new QLabel(QString("Pfad zu Beispielbild").arg(3), this);
    // QLineEdit *tLine_3 = new QLineEdit(this);
    // lytMain->addRow(tLabel_3, tLine_3);




    QDialogButtonBox *buttonBox = new QDialogButtonBox
        ( QDialogButtonBox::Ok | QDialogButtonBox::Cancel,
         Qt::Horizontal, this );
    lytMain->addWidget(buttonBox);

    bool conn = connect(buttonBox, &QDialogButtonBox::accepted,
                        this, &InputDialog::accept);
    Q_ASSERT(conn);
    conn = connect(buttonBox, &QDialogButtonBox::rejected,
                   this, &InputDialog::reject);
    Q_ASSERT(conn);

    setLayout(lytMain);
}

QStringList InputDialog::getStrings(QWidget *parent, bool *ok)
{
    InputDialog *dialog = new InputDialog(parent);

    QStringList list;

    const int ret = dialog->exec(); //Wert von ret hängt davon ab ob ich ok oder cancel drücke

    //Why okay here? Okay is always false?
    //if (ok)
        *ok = !!ret;
    qDebug() << dialog->;
    if (ret) { // hier ist der Fehler die Liste bleibt immer leer, die Schleife wird erreicht
        foreach (auto field, dialog->fields) {

            list << field->text();
        }
    }

    dialog->deleteLater();
    return list;
}
