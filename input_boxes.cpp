#include "input_boxes.h"

#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QFormLayout>

InputDialog::InputDialog(QWidget *parent) : QDialog(parent)
{   //Problem Scope von Daten existiert nur in Konstruktor muss in header deklariert werden!!
    QFormLayout *lytMain = new QFormLayout(this);

    QLabel *tLabel_1 = new QLabel(QString("Übungsname %1").arg(1), this);
    tLine_name = new QLineEdit(this);
    validator_name = new QRegularExpressionValidator(
        QRegularExpression("[a-zA-Z]+"), tLine_name);
    tLine_name->setValidator(validator_name);
    lytMain->addRow(tLabel_1, tLine_name);


    QLabel *tLabel_2 = new QLabel(QString("Übungsdauer %1").arg(2), this);
    tLine_duration = new QLineEdit(this);
    validator_duration = new QRegularExpressionValidator(
        QRegularExpression("55"), tLine_duration);
    tLine_duration->setValidator(validator_duration);
    lytMain->addRow(tLabel_2, tLine_duration);

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
    QStringList list;
    bool input_checked = false;
    InputDialog *dialog = new InputDialog(parent);
    int ret = 0;
    do{
        ret= dialog->exec(); //Wert von ret hängt davon ab ob ich ok oder cancel drücke
        *ok = !!ret;
        //Problem ich komm nicht aus der schleife wenn ich abbrechen drücke, eine
        //Aufgabe für morgen
         if (!(dialog->tLine_name->text()=="") ||
            !(dialog->tLine_duration->text()=="")){

            input_checked==true;
        }

    }while (input_checked==false && ok);



        list<< dialog->tLine_name->text() << dialog ->tLine_duration->text();


    dialog->deleteLater();

    return list;
}
