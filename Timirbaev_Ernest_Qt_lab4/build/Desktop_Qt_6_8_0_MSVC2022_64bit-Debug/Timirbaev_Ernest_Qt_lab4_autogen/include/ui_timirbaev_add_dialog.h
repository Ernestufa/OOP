/********************************************************************************
** Form generated from reading UI file 'timirbaev_add_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMIRBAEV_ADD_DIALOG_H
#define UI_TIMIRBAEV_ADD_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Timirbaev_Add_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Timirbaev_Add_Dialog)
    {
        if (Timirbaev_Add_Dialog->objectName().isEmpty())
            Timirbaev_Add_Dialog->setObjectName("Timirbaev_Add_Dialog");
        Timirbaev_Add_Dialog->resize(307, 275);
        gridLayout = new QGridLayout(Timirbaev_Add_Dialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Timirbaev_Add_Dialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Timirbaev_Add_Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Timirbaev_Add_Dialog);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Timirbaev_Add_Dialog);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Timirbaev_Add_Dialog);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(Timirbaev_Add_Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(Timirbaev_Add_Dialog);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(Timirbaev_Add_Dialog);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(Timirbaev_Add_Dialog);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        comboBox_2 = new QComboBox(Timirbaev_Add_Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_5->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        radioButton = new QRadioButton(Timirbaev_Add_Dialog);
        radioButton->setObjectName("radioButton");
        radioButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        radioButton->setChecked(true);

        horizontalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(Timirbaev_Add_Dialog);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_6->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(Timirbaev_Add_Dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Timirbaev_Add_Dialog);

        QMetaObject::connectSlotsByName(Timirbaev_Add_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Timirbaev_Add_Dialog)
    {
        Timirbaev_Add_Dialog->setWindowTitle(QCoreApplication::translate("Timirbaev_Add_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\242\320\270\320\277 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\237\320\270\321\211. \320\277\321\200-\321\206\320\270\321\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\242\320\265\321\205\320\275\320\270\320\272\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\245\320\270\320\274\320\270\321\217", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\236\320\264\320\265\320\266\320\264\320\260", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\224\321\200\321\203\320\263\320\276\320\265", nullptr));

        label_4->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\232\320\276\320\273-\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\242\320\270\320\277 \320\261\321\200\320\260\320\272\320\260", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\224\320\265\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\227\320\260\320\263\321\200\321\217\320\267\320\275\320\265\320\275\320\270\321\217", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\224\321\200\321\203\320\263\320\276\320\265", nullptr));

        radioButton->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\243\321\202\320\270\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\243\321\206\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Timirbaev_Add_Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timirbaev_Add_Dialog: public Ui_Timirbaev_Add_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMIRBAEV_ADD_DIALOG_H
