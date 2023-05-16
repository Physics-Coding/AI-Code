/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonExit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPassword;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButtonLogin = new QPushButton(Widget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(180, 170, 80, 18));
        pushButtonExit = new QPushButton(Widget);
        pushButtonExit->setObjectName("pushButtonExit");
        pushButtonExit->setGeometry(QRect(310, 170, 80, 18));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 100, 41, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 130, 40, 12));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        lineEditUser = new QLineEdit(Widget);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setGeometry(QRect(240, 100, 131, 20));
        lineEditPassword = new QLineEdit(Widget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(240, 130, 131, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\264\246\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
