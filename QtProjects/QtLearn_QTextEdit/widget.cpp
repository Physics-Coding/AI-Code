
#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QIntValidator>//整数验证器
#include <QFont>//综合字体格式
#include <QColorDialog>//用于选取前景色和背景色
#include <QBrush>//颜色画刷


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置二态按钮
    ui->pushButtonBold->setCheckable(true);
    ui->pushButtonItalic_2->setCheckable(true);
    ui->pushButtonUnderline_2->setCheckable(true);
    //字号原本是浮点数，这里简化为整数
    //字体点阵大小，这里设置下限 0，上限 72
    //0 不是没有字号，是不确定字号多大
    QIntValidator *vali=new QIntValidator(0,72);
    ui->lineEditFontSize->setValidator(vali);
    //默认显示字号 9pt
    ui->lineEditFontSize->setText(QString("").setNum(9));

    //字体家族设置,直接关联组合框的信号到编辑框槽函数
    connect(ui->fontComboBox, SIGNAL(currentIndexChanged(QString)),
            ui->textEdit, SLOT(setFontFamily(QString)));
    //丰富文本编辑框初始内容
    ui->textEdit->setHtml("<b>粗体字的行<br></b>"
                          "<i>斜体字的行<br></i>"
                          "<u>下划线的行<br></u>"
                          "<font style=\"color:red;\">文本前景色<br></font>"
                          "<font style=\"background:yellow;\">文字背景色<br></font>"
                          "<font style=\"font-size:18pt;\">字号大小变化的行<br></font>"
                          "<font style=\"font-family:黑体;\">字体家族变化的行<br></font>"
                          );
    //html 字号有 pt(PointSize) 和 px(PixelSize) 两种形式，例子代码适用于 pt
    //通常 1 英寸 == 72pt(点) == 96px (像素)，网页中最常用到的：9pt == 12px
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButtonBold_clicked(bool checked)
{
    if(checked){
        ui->textEdit->setFontWeight(QFont::Bold);
    }
    else{
        ui->textEdit->setFontWeight(QFont::Normal);
    }
}


void Widget::on_pushButtonItalic_2_clicked(bool checked)
{
    ui->textEdit->setFontItalic(checked);
}


void Widget::on_pushButtonUnderline_2_clicked(bool checked)
{
    ui->textEdit->setFontUnderline(checked);
}


void Widget::on_pushButtonColor_clicked()
{

}


void Widget::on_pushButtonBGColor_clicked()
{

}


void Widget::on_lineEditFontSize_editingFinished()
{

}


void Widget::on_textEdit_currentCharFormatChanged(const QTextCharFormat &format)
{

}


void Widget::on_textEdit_textChanged()
{

}

