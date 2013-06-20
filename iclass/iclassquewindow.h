#ifndef ICLASSQUEWINDOW_H
#define ICLASSQUEWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QMap>
#include <QThread>
#include <QDir>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QWebView>
#include <QLayout>
#include <QTimer>
#include <QTime>
#include "ui_iclass_dialog.h"







namespace Ui {
class iClassQueWindow;
}

class iClassQueWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit iClassQueWindow(QWidget *parent = 0);
    ~iClassQueWindow();
    
private slots:
    //void on_sub1Radio_clicked();

    void on_subject2Radio_clicked();

    void on_subject3Radio_clicked();

    void on_subject4Radio_clicked();

    void on_subject1Radio_clicked();


    //void on_verticalSlider1_valueChanged(int value);

//    void on_verticalSlider2_valueChanged(int value);


//    void on_verticalSlider3_valueChanged(int value);



//    void on_verticalSlider4_valueChanged(int value);

    void on_submitExamPushBurtton_clicked();
    void close_thread();
    void build_map(int current_button_group, const int& number_of_que);
    void update_no_of_que_done();
    void update_time();


    void on_verticalSlider1_sliderReleased();

    void on_verticalSlider2_sliderReleased();

    void on_verticalSlider3_sliderReleased();

    void on_verticalSlider4_sliderReleased();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_horizontalSlider_sliderReleased();

private:
   // Ui::iClassQueWindow *ui;
    QMap<int,int> answers_compare_sub1;
    QMap<int, int> answers_compare_sub2;
    QMap<int,int> answers_compare_sub3;
    QMap<int, int> answers_compare_sub4;
    QMap<int, QString>sub;
    QMap<int, QString>missed_que;
   // QMap<QString, QString>sub2;
  //  QMap<QString, QString>sub3;
   // QMap<QString, QString>sub4;
    QMap<int, QButtonGroup*> answers_choice1;
    QMap<int, QButtonGroup*> answers_choice2;
    QMap<int, QButtonGroup*> answers_choice3;
    QMap<int, QButtonGroup*> answers_choice4;
    QMap<int, int>score;
    QVBoxLayout* current_ans_layout;
    QWebView* current_web_view;
    QMap<QString, int>sub_stats;
    QTime countdown;
    int fetch_seconds;
    QMessageBox* markDialog;
    QTimer* timer;
    QString current_app_directory;





public:

    Ui::iClassQueWindow *ui;


    friend class MarkThread;
};

class MarkThread: public QThread
{
    Q_OBJECT
  public:
    MarkThread(const QString& debug_output, iClassQueWindow * test_me);
    void run();

private:
    QString text_test;
        int rec;
        iClassQueWindow* tested_me;
};

class IclassDialog : public QDialog

{
    Q_OBJECT

public:
    explicit IclassDialog(QWidget *parent = 0);
    ~IclassDialog();
     Ui::Dialog *di;

private slots:
     void on_examModeRadio_clicked();
     void on_siModeRadio_clicked();
     void on_pushButton_3_clicked();
     void on_examOneButton_clicked();
     void on_examTwoButton_clicked();
     void on_examThreeButton_clicked();
     void checked();
     void initialize_combobox();
     void on_NormalRadio_clicked();
     void on_dynamicRadio_clicked();
     void on_examOneButton_2_clicked();
     void on_examTwoButton_2_clicked();
     void on_examThreeButton_2_clicked();
     void on_pushButton_clicked();
};



#endif // ICLASSQUEWINDOW_H
