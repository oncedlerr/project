#ifndef PASSWORDSEC_H
#define PASSWORDSEC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class passwordSec;
}
QT_END_NAMESPACE

class passwordSec : public QMainWindow
{
    Q_OBJECT

public:
    passwordSec(QWidget *parent = nullptr);
    ~passwordSec();
    void getUsername(const QString& text);
    QString username;
    void onChangePasswordButtonClicked();

private:
    Ui::passwordSec *ui;
};
#endif // PASSWORDSEC_H
