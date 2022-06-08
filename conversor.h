#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class conversor; }
QT_END_NAMESPACE

class conversor : public QDialog
{
    Q_OBJECT

public:
    conversor(QWidget *parent = nullptr);
    ~conversor();
public slots:
    void cent2fahr(int);
    void fahr2cent(int);

private:
    Ui::conversor *ui;
};
#endif // CONVERSOR_H
