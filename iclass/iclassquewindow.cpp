#include "iclassquewindow.h"
#include "ui_iclassquewindow.h"




MarkThread *markthem;


iClassQueWindow::iClassQueWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::iClassQueWindow)
{
    ui->setupUi(this);



    IclassDialog* myDialog= new IclassDialog(this);


    //Temporary Disable Region:
    myDialog->di->examOneButton->setEnabled(false);
    myDialog->di->examTwoButton->setEnabled(false);
    myDialog->di->beginnerButton_7->setEnabled(false);
    myDialog->di->standardButton_11->setEnabled(false);
    myDialog->di->intermediateButton_10->setEnabled(false);
    myDialog->di->normalStartButton->setEnabled(false);
    myDialog->di->pushButton_3->setEnabled(false);
    myDialog->di->startPushButton->setEnabled(false);
    current_app_directory=QDir::currentPath();

    myDialog->setStyleSheet("QRadioButton::indicator{ width: 13px; height: 13px;} QRadioButton::indicator::unchecked {image: url(:/icons/radio_unchecked.png);} QRadioButton::indicator::checked {image: url(:/icons/radio_checked3.png);} QDialog{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #72fd58, stop: 1 #0e3c0b);} QComboBox, QSpinBox , QComboBox QAbstractItemView QScrollBar{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #d3d3d3, stop: 1 #504f4f);  selection-background-color:#504f4f;}  QSlider::handle:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #d3d3d3, stop: 1 #504f4f); border: 1px solid #5c5c5c; width: 18px; margin: -2px 0; border-radius: 3px;}   QSlider::groove:horizontal {border: 1px solid #999999; height: 8px; background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4); margin: 2px 0;} QComboBox QAbstractItemView{border: 2px solid darkgray; background-color:#d3d3d3; selection-background-color:#504f4f;} QPushButton{color: black;border-image: url(:/icons/Button_Main.png) 10 25  10 25;border-top:3px transparent;border-bottom:3px transparent;border-right:10px transparent;border-left:10px transparent;} QPushButton:hover{border-image: url(:/icons/Button_Hover.png) 10 25  10 25;border-top:3px transparent;border-bottom:3px transparent;border-right:10px transparent;border-left:10px transparent} QPushButton:Pressed{border-image: url(:/icons/Button_Press.png) 10 25  10 25;border-top:3px transparent;border-bottom:3px transparent;border-right:10px transparent;border-left:10px transparent}");
    myDialog->exec();



    ui->stackedWidget->setCurrentWidget(ui->subject1Page);
    ui->stackedWidget_2->setCurrentWidget(ui->examPage_use);

    //Clear Subject Statistics
    sub_stats.clear();

    //initialize Marking Dialog... A messageBox
    markDialog = new QMessageBox(this);

    markthem = new MarkThread("cool",this);
    connect(markthem, SIGNAL(finished()),this, SLOT(close_thread()));

    //Timer initialization and setup
    timer= new QTimer(this);
    connect (timer, SIGNAL(timeout()), this, SLOT(update_time()));
    timer->start(1000);

    countdown = QTime::fromString(myDialog->di->timeExamModecomboBox_8->currentText(),"h:m:s");
    fetch_seconds = abs(countdown.secsTo(QTime::fromString("00:00:00","hh:mm:ss")));
    ui->remainingTimeProgressBar->setRange(0,fetch_seconds);

   // ui->remainingTimeProgressBar->setInvertedAppearance(true);


    ////////////////////////////////////////////////
    //---->>> just edited.. hoing it solves it 8/2

//    QDir subjectdir_temp(QString("debug/subjects/%1/answer/2011.txt").arg(selected_subjects_temp));
//    qDebug()<< subjectdir.absoluteFilePath(QString("%1.htm").arg(selected_subjects_temp));
//    QString file= subjectdir.absoluteFilePath(QString("%1.htm").arg(selected_subjects_temp));


    //////////////////////////////////////////////////////////////

//    QFile answer_master_sheet2("E:/Projects/Qt/iclass-build-desktop-Qt_4_8_0_for_Desktop_-_MinGW__Qt_SDK__Debug/debug/subjects/Mathematics/answer/2011.txt");
//    if(!answer_master_sheet2.open(QIODevice::ReadOnly |QIODevice::Text)){
//        qDebug()<<"not opened";
//    }
//    QTextStream cool2(&answer_master_sheet2);

//    ////////////////////////////////////////////////////////////


//    QFile answer_master_sheet3("E:/Projects/Qt/iclass-build-desktop-Qt_4_8_0_for_Desktop_-_MinGW__Qt_SDK__Debug/debug/subjects/Physics/answer/2011.txt");
//    if(!answer_master_sheet3.open(QIODevice::ReadOnly |QIODevice::Text)){
//        qDebug()<<"not opened";
//    }
//    QTextStream cool3(&answer_master_sheet3);

//    ////////////////////////////////////////////////////////////


//    QFile answer_master_sheet4("E:/Projects/Qt/iclass-build-desktop-Qt_4_8_0_for_Desktop_-_MinGW__Qt_SDK__Debug/debug/subjects/English/answer/2011.txt");
//    if(!answer_master_sheet4.open(QIODevice::ReadOnly |QIODevice::Text)){
//        qDebug()<<"not opened";
//    }
//    QTextStream cool4(&answer_master_sheet4);

    ////////////////////////////////////////////////////////////



    //ui->scrollAreaWidgetContents->setStyleSheet("{Background : red}");
    //For Each Selected Subject.. We take Note that the year and Subject field is not permanent
     QList<QString> selected_subjects;  //List that keeps the Selected Subjects
        int no_of_sub;
     selected_subjects<< "English" << myDialog->di->exam3comboBox_4->currentText() << myDialog->di->exam3comboBox_2->currentText() <<myDialog->di->exam3comboBox_7->currentText();
        int avail_count=1;
        //Begining of Defining the Question for each subjects
      foreach(QString selected_subjects_temp, selected_subjects){
          sub[avail_count]= selected_subjects_temp;
           current_app_directory = QDir::currentPath();
           QFile file_loaded_answers(QString("%1/debug/subjects/%2/answer/2011.txt").arg(current_app_directory).arg(selected_subjects_temp));
           QTextStream raw_loaded_answers(&file_loaded_answers);
           switch (avail_count){
          case 1:
              ui->subject1Radio->setText(selected_subjects_temp);
              ui->subject1Radio->setChecked(true);
              current_ans_layout= new QVBoxLayout(ui->ans1ScrollAreaWidgetContents);
              current_web_view = ui->que1webView;
              if (selected_subjects_temp == "English"){
                  no_of_sub =100;
              }
              else{
                  no_of_sub =50;
              }

//Load up answers into Memory

              if(!file_loaded_answers.open(QIODevice::ReadOnly |QIODevice::Text)){
                  qDebug()<<"not opened";
              }
                  while(!raw_loaded_answers.atEnd()){
                  QString runtins;
                  raw_loaded_answers.operator >>(runtins);
                  answers_compare_sub1[runtins.section(".",0,0).toInt()]=runtins.section(".",1,1).toInt();
              }
//End of Loading answers into Memory
            //Case 1 holds the basis of initialization
              //ui->subjectStatisticsLabel->setText("0/50");
              ui->currentSubjectLabel->setText(selected_subjects_temp);
              //Building the buttons individually
                build_map(1, no_of_sub);
                ui->sub1Label->setText(selected_subjects_temp);
              break;

          case 2:

             //Initialize Number of subjects
              ui->subject2Radio->setText(selected_subjects_temp);
              current_ans_layout= new QVBoxLayout(ui->ans2ScrollAreaWidgetContents);
              current_web_view = ui->que2webView;
              if (selected_subjects_temp == "English"){
                  no_of_sub =100;
              }
              else{
                  no_of_sub =50;
              }
              if(!file_loaded_answers.open(QIODevice::ReadOnly |QIODevice::Text)){
                  qDebug()<<"not opened";
              }
                  while(!raw_loaded_answers.atEnd()){
                  QString runtins;
                  raw_loaded_answers.operator >>(runtins);
                  answers_compare_sub2[runtins.section(".",0,0).toInt()]=runtins.section(".",1,1).toInt();
              }
               build_map(2, no_of_sub);
               ui->sub2Label->setText(selected_subjects_temp);
              break;

          case 3:

              ui->subject3Radio->setText(selected_subjects_temp);
              current_ans_layout= new QVBoxLayout(ui->ans3ScrollAreaWidgetContents);
              current_web_view = ui->que3webView;
              //Initialize Number of subjects
              if (selected_subjects_temp == "English"){
                  no_of_sub =100;
              }
              else{
                  no_of_sub =50;
              }
              if(!file_loaded_answers.open(QIODevice::ReadOnly |QIODevice::Text)){
                  qDebug()<<"not opened";
              }
                  while(!raw_loaded_answers.atEnd()){
                  QString runtins;
                  raw_loaded_answers.operator >>(runtins);
                  answers_compare_sub3[runtins.section(".",0,0).toInt()]=runtins.section(".",1,1).toInt();
              }
               build_map(3, no_of_sub);
               ui->sub3Label->setText(selected_subjects_temp);
              break;

          case 4:
              ui->subject4Radio->setText(selected_subjects_temp);
              current_ans_layout= new QVBoxLayout(ui->ans4ScrollAreaWidgetContents);
              current_web_view = ui->que4webView;
              //Initialize Number of subjects
              if (selected_subjects_temp == "English"){
                  no_of_sub =100;
              }
              else{
                  no_of_sub =50;
              }
              if(!file_loaded_answers.open(QIODevice::ReadOnly |QIODevice::Text)){
                  qDebug()<<"not opened";
              }
                  while(!raw_loaded_answers.atEnd()){
                  QString runtins;
                  raw_loaded_answers.operator >>(runtins);
                  answers_compare_sub4[runtins.section(".",0,0).toInt()]=runtins.section(".",1,1).toInt();
              }
             build_map(4, no_of_sub);
             ui->sub4Label->setText(selected_subjects_temp);
             break;
          default:
              break;
          }
      QDir subjectdir(QString("debug/subjects/%1/question/2011").arg(selected_subjects_temp));
      qDebug()<< subjectdir.absoluteFilePath(QString("%1.htm").arg(selected_subjects_temp));

      QString file= subjectdir.absoluteFilePath(QString("%1.htm").arg(selected_subjects_temp));
      current_web_view->load(QUrl::fromLocalFile(file));


      //Defining the Answer sheet for each layout

      ++avail_count;
      }
//////////////////////////////////////////////////

// Basic appearance and style sheet//
  this->setStyleSheet("QPushButton:checked {Background: black} QWidget#ans1ScrollAreaWidgetContents,QWidget#ans2ScrollAreaWidgetContents,QWidget#ans3ScrollAreaWidgetContents,QWidget#ans4ScrollAreaWidgetContents{Background:white} QFrame{color:green} QLabel{color:#000000}QMainWindow{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #776c6c, stop: 1 #0e9805)} QRadioButton::indicator{ width: 13px; height: 13px;} QRadioButton::indicator::unchecked {image: url(:/icons/radio_unchecked.png);} QRadioButton::indicator::checked {image: url(:/icons/radio_checked3.png);} QDialog{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #72fd58, stop: 1 #0e3c0b);} QPushButton,QComboBox, QSpinBox ,QScrollBar,QWebView QScrollbar, QProgressBar::chunk{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #d3d3d3, stop: 1 #504f4f);  selection-background-color:#504f4f;} QComboBox QAbstractItemView{border: 2px solid darkgray; background-color:#d3d3d3; selection-background-color:#504f4f;}   QSlider::handle:horizontal {background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #d3d3d3, stop: 1 #504f4f); border: 1px solid #5c5c5c; width: 18px; margin: -2px 0; border-radius: 3px;}   QSlider::groove:horizontal {border: 1px solid #999999; height: 8px; background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4); margin: 2px 0;} ");

      //Change Color of Omr desgned buttons to green
      ui->ans1ScrollArea->setStyleSheet("QPushButton{color:green}");
      ui->ans2ScrollArea->setStyleSheet("QPushButton{color:green}");
      ui->ans3ScrollArea->setStyleSheet("QPushButton{color:green}");
      ui->ans4ScrollArea->setStyleSheet("QPushButton{color:green}");
 //this ->setStyleSheet(" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #0c3507, stop: 1 #59d411); border: 2px solid gray; border-radius: 5px; margin-top: 1ex; /* leave space at the top for the title */");
     }

iClassQueWindow::~iClassQueWindow()
{
    delete ui;
}

//void iClassQueWindow::on_sub1Radio_clicked()
//{
//    ui->stackedWidget->setCurrentWidget(ui->subject1Page);
//}

void iClassQueWindow::on_subject2Radio_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->subject2Page);
    //insertionn Might need rcheck Later.... TAke Note ======
    ui->currentSubjectLabel->setText(sub[2]);
    update_no_of_que_done();

}

void iClassQueWindow::on_subject3Radio_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->subject3Page);
    ui->currentSubjectLabel->setText(sub[3]);
    update_no_of_que_done();
}

void iClassQueWindow::on_subject4Radio_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->subject4Page);
    ui->currentSubjectLabel->setText(sub[4]);
    update_no_of_que_done();
}

void iClassQueWindow::on_subject1Radio_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->subject1Page);
    ui->currentSubjectLabel->setText(sub[1]);
    update_no_of_que_done();
}


//void iClassQueWindow::on_verticalSlider1_valueChanged(int value)
//{
//  qreal zoomfactor = (qreal(value)/qreal(100));
//  ui->que1webView->setZoomFactor(zoomfactor);
//}

//void iClassQueWindow::on_verticalSlider2_valueChanged(int value)
//{
//    qreal zoomfactor = (qreal(value)/qreal(100));
//    ui->que2webView->setZoomFactor(zoomfactor);
//}



//void iClassQueWindow::on_verticalSlider3_valueChanged(int value)
//{
//    qreal zoomfactor = (qreal(value)/qreal(100));
//    ui->que3webView->setZoomFactor(zoomfactor);
//}


//void iClassQueWindow::on_verticalSlider4_valueChanged(int value)
//{
//    qreal zoomfactor = (qreal(value)/qreal(100));
//    ui->que4webView->setZoomFactor(zoomfactor);
//}

void iClassQueWindow::on_submitExamPushBurtton_clicked()
{
    QMessageBox chapMessageBox(this);
    chapMessageBox.setText("Are You Sure You Want to Submit");
    chapMessageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    if(chapMessageBox.exec() == QMessageBox::Yes ){
       timer->stop();
       markthem->start();
       markDialog->setText("Marking in Progress, Please Wait.");
       markDialog->exec();
        }
    else{
        return ;
    }
ui->stackedWidget_2->setCurrentWidget(ui->resultPage_use);
ui->stackedWidget_3->setCurrentWidget(ui->resultPage_3);


  }
MarkThread::MarkThread(const QString &debug_output, iClassQueWindow *test_me){
    text_test=debug_output;
    tested_me = test_me;
//QTextStream;
}

void MarkThread::run(){
    for(int in=1;in<=4 ; in++){
        int current_missed_que =1;
        switch (in){
        case 1:
            if(tested_me->sub.contains(1)){
                qDebug()<<tested_me->sub.operator [](1);
                tested_me->score.operator [](1)=0;
                QMap<int, QButtonGroup*>::const_iterator itr= tested_me->answers_choice1.begin();
             //   int current_missed_que =1;
                while(itr != tested_me->answers_choice1.end()){
                    qDebug()<<tested_me->answers_choice1[itr.key()]->checkedId();
                    qDebug()<< tested_me->answers_compare_sub1.operator [](itr.key());
                    qDebug()<<tested_me->sub.operator [](1);
                    if( tested_me->answers_choice1[itr.key()]->checkedId() == tested_me->answers_compare_sub1.operator [](itr.key()))
                                                {tested_me->score.operator [](1)+=1;}
                   //Where I am now... need some simple editing
                    else{

                       tested_me->missed_que[1].append(QString("%1\n\n").arg(QString::number(current_missed_que)));
                        }
                 //tested_me->ui->subject1Radio->setText(QString::number( tested_me->answers_compare_sub1.operator [](itr.key())));
                    itr++;
                    current_missed_que++; //go to the next number
                }
        tested_me->ui->score1Label->setText(QString::number(tested_me->score.operator [](1)*2));

            }
            break;
        case 2:
            if(tested_me->sub.contains(2)){
                qDebug()<<tested_me->sub.operator [](2);
                tested_me->score.operator [](2)=0;
                QMap<int, QButtonGroup*>::const_iterator itr= tested_me->answers_choice2.begin();
//                int itr =0;
                while(itr != tested_me->answers_choice2.end()){
                    qDebug()<<tested_me->answers_choice2[itr.key()]->checkedId();
                    qDebug()<< tested_me->answers_compare_sub2.operator [](itr.key());
                    qDebug()<<tested_me->sub.operator [](2);
                    if( tested_me->answers_choice2[itr.key()]->checkedId() == tested_me->answers_compare_sub2.operator [](itr.key()))
                                {tested_me->score.operator [](2)+=1;}
                    else{

                       tested_me->missed_que[2].append(QString("%1\n\n").arg(QString::number(current_missed_que)));
                        }
                 //tested_me->ui->subject1Radio->setText(QString::number( tested_me->answers_compare_sub1.operator [](itr.key())));
                    itr++;
                    current_missed_que++; //go to the next number
                }
    tested_me->ui->score2Label->setText(QString::number(tested_me->score.operator [](2)*2));
            }
            break;
        case 3:

            if(tested_me->sub.contains(3)){
                qDebug()<<tested_me->sub.operator [](3);
                tested_me->score.operator [](3)=0;
                QMap<int, QButtonGroup*>::const_iterator itr= tested_me->answers_choice3.begin();
//                int itr =0;
                while(itr != tested_me->answers_choice3.end()){
                    qDebug()<<tested_me->answers_choice3[itr.key()]->checkedId();
                    qDebug()<< tested_me->answers_compare_sub3.operator [](itr.key());
                    qDebug()<<tested_me->sub.operator [](3);
                    if( tested_me->answers_choice3[itr.key()]->checkedId() == tested_me->answers_compare_sub3.operator [](itr.key()))
                                                {tested_me->score.operator [](3)+=1;}
                    else{

                       tested_me->missed_que[3].append(QString("%1\n\n").arg(QString::number(current_missed_que)));
                        }
                 //tested_me->ui->subject1Radio->setText(QString::number( tested_me->answers_compare_sub1.operator [](itr.key())));
                    itr++;
                    current_missed_que++; //go to the next number
                }
tested_me->ui->score3Label->setText(QString::number(tested_me->score.operator [](3)*2));
            }
            break;
        case 4:

            if(tested_me->sub.contains(4)){
                qDebug()<<tested_me->sub.operator [](4);
                tested_me->score.operator [](4)=0;
                QMap<int, QButtonGroup*>::const_iterator itr= tested_me->answers_choice4.begin();
//                int itr =0;
                while(itr != tested_me->answers_choice4.end()){
                    qDebug()<<tested_me->answers_choice4[itr.key()]->checkedId();
                    qDebug()<< tested_me->answers_compare_sub4.operator [](itr.key());
                    qDebug()<<tested_me->sub.operator [](4);
                    if( tested_me->answers_choice4[itr.key()]->checkedId() == tested_me->answers_compare_sub4.operator [](itr.key()))
                                                {tested_me->score.operator [](4)+=1;}
                    else{

                       tested_me->missed_que[4].append(QString("%1\n\n").arg(QString::number(current_missed_que)));
                        }
                 //tested_me->ui->subject1Radio->setText(QString::number( tested_me->answers_compare_sub1.operator [](itr.key())));
                    itr++;
                    current_missed_que++; //go to the next number
                }
tested_me->ui->score4Label->setText(QString::number(tested_me->score.operator [](4)*2));
            }
//comute aggregate after displaying Last Question
            tested_me->ui->aggregateLabel->setText(QString::number((tested_me->score.operator [](1)+tested_me->score.operator [](2)+tested_me->score.operator [](3)+tested_me->score.operator [](4))*2));
                    break;
      }
}
    tested_me->ui->encourageinfoTextBrowser->setText(QString("<p>You Had an aggregate of %1. Well Done; however, We believe you can still do much better if you keep trying.</p>"
                                                     "<p>Please, Play around with other modes. For example under S.I mode(Self imrovement mode), you can use both dynamic strength and count down to improve and increase your speed. It would also help in improving your accuracy.</p>"
                                                     "<p>"
                                                     "<p></p>"
                                                     "<p>--Thank You for using our product</p>"
                                                             "<p><b>C</b>onvinient <b>L</b>earn <b>C</b>oncept</p>").arg(tested_me->ui->aggregateLabel->text()));
   // tested_me->ui->subject1Radio->setText(QString::number(tested_me->score.operator [](1)));
   // tested_me->ui->subject2Radio->setText(tested_me->sub.operator [](1));

}

void iClassQueWindow::close_thread(){
   //No need to call Terminate
    // markthem->terminate();//Might not necessari;y use terminate.. for now just cilling
  //exit(0);
    markDialog->accept();
}

void iClassQueWindow::build_map(int current_button_group,const int& number_of_que){
    int no_of_sub=number_of_que;
    //Minimal Declaration
     QHBoxLayout* temp_lay;
     QLabel* QueNumberLabel;
     QFont font;
     QString buttontext;    font.setPointSize(5);

    QFont queFont;
    queFont.setPointSize(7);
    queFont.setBold(true);

  //  QMap<int, QButtonGroup*>& answe = answers_choice1;//Just a Place holder
    for(int i=1; i<=no_of_sub ; i++){

        switch (current_button_group){
        case 1:
         //current_map =  answers_choice1;
         temp_lay= new QHBoxLayout();
         QueNumberLabel = new QLabel(QString::number(i),this);
         QueNumberLabel->setFont(queFont);
         current_ans_layout->addLayout(temp_lay);

         answers_choice1[i] = new QButtonGroup(this);
         connect(answers_choice1[i],SIGNAL(buttonClicked(int)),this,SLOT(update_no_of_que_done()));

         for(int in=1;in<=4 ; in++){



              switch (in){
              case 1:
                  temp_lay->addWidget(QueNumberLabel);
                  buttontext = "[  A  ]";
                  break;
              case 2:
                  buttontext = "[  B  ]";
                  break;
              case 3:
                  buttontext = "[  C  ]";
                  break;
              case 4:
                  buttontext = "[  D  ]";
                  break;
            }
            QPushButton* temp_holdbutton= new QPushButton(buttontext,this);
            temp_holdbutton->setFont(font);
            temp_holdbutton->setFlat(true);
            temp_holdbutton->setCheckable(true);
            temp_holdbutton->setMaximumSize(27,15);
            answers_choice1[i]->addButton(temp_holdbutton);
            answers_choice1[i]->setId(temp_holdbutton,in);
            temp_lay->addWidget(temp_holdbutton);


    }
          if(i%5==0){
              QFrame* horizontalSeperator = new QFrame(this);

              horizontalSeperator->setFrameShape(QFrame::HLine);
              horizontalSeperator->setFrameShadow(QFrame::Plain);
              current_ans_layout->addWidget(horizontalSeperator);
          }
         break;
        case 2:
            temp_lay= new QHBoxLayout();
            QueNumberLabel = new QLabel(QString::number(i),this);
            QueNumberLabel->setFont(queFont);
            current_ans_layout->addLayout(temp_lay);

            answers_choice2[i] = new QButtonGroup(this);

            for(int in=1;in<=4 ; in++){



                 switch (in){
                 case 1:
                     temp_lay->addWidget(QueNumberLabel);
                     buttontext = "[  A  ]";
                     break;
                 case 2:
                     buttontext = "[  B  ]";
                     break;
                 case 3:
                     buttontext = "[  C  ]";
                     break;
                 case 4:
                     buttontext = "[  D  ]";
                     break;
               }
               QPushButton* temp_holdbutton= new QPushButton(buttontext,this);
               temp_holdbutton->setFont(font);
               temp_holdbutton->setFlat(true);
               temp_holdbutton->setCheckable(true);
               temp_holdbutton->setMaximumSize(27,15);
               answers_choice2[i]->addButton(temp_holdbutton);
               answers_choice2[i]->setId(temp_holdbutton,in);
               temp_lay->addWidget(temp_holdbutton);


       }
             if(i%5==0){
                 QFrame* horizontalSeperator = new QFrame(this);

                 horizontalSeperator->setFrameShape(QFrame::HLine);
                 horizontalSeperator->setFrameShadow(QFrame::Plain);
                 current_ans_layout->addWidget(horizontalSeperator);
             }

            break;
        case 3:
            temp_lay= new QHBoxLayout();
            QueNumberLabel = new QLabel(QString::number(i),this);
            QueNumberLabel->setFont(queFont);
            current_ans_layout->addLayout(temp_lay);

            answers_choice3[i] = new QButtonGroup(this);

            for(int in=1;in<=4 ; in++){



                 switch (in){
                 case 1:
                     temp_lay->addWidget(QueNumberLabel);
                     buttontext = "[  A  ]";
                     break;
                 case 2:
                     buttontext = "[  B  ]";
                     break;
                 case 3:
                     buttontext = "[  C  ]";
                     break;
                 case 4:
                     buttontext = "[  D  ]";
                     break;
               }
               QPushButton* temp_holdbutton= new QPushButton(buttontext,this);
               temp_holdbutton->setFont(font);
               temp_holdbutton->setFlat(true);
               temp_holdbutton->setCheckable(true);
               temp_holdbutton->setMaximumSize(27,15);
               answers_choice3[i]->addButton(temp_holdbutton);
               answers_choice3[i]->setId(temp_holdbutton,in);
               temp_lay->addWidget(temp_holdbutton);


       }
             if(i%5==0){
                 QFrame* horizontalSeperator = new QFrame(this);

                 horizontalSeperator->setFrameShape(QFrame::HLine);
                 horizontalSeperator->setFrameShadow(QFrame::Plain);
                 current_ans_layout->addWidget(horizontalSeperator);
             }
          break;
      case 4:
             temp_lay= new QHBoxLayout();
             QueNumberLabel = new QLabel(QString::number(i),this);
             QueNumberLabel->setFont(queFont);
             current_ans_layout->addLayout(temp_lay);

             answers_choice4[i] = new QButtonGroup(this);

             for(int in=1;in<=4 ; in++){



                  switch (in){
                  case 1:
                      temp_lay->addWidget(QueNumberLabel);
                      buttontext = "[  A  ]";
                      break;
                  case 2:
                      buttontext = "[  B  ]";
                      break;
                  case 3:
                      buttontext = "[  C  ]";
                      break;
                  case 4:
                      buttontext = "[  D  ]";
                      break;
                }
                QPushButton* temp_holdbutton= new QPushButton(buttontext,this);
                temp_holdbutton->setFont(font);
                temp_holdbutton->setFlat(true);
                temp_holdbutton->setCheckable(true);
                temp_holdbutton->setMaximumSize(27,15);
                answers_choice4[i]->addButton(temp_holdbutton);
                answers_choice4[i]->setId(temp_holdbutton,in);
                temp_lay->addWidget(temp_holdbutton);


        }
              if(i%5==0){
                  QFrame* horizontalSeperator = new QFrame(this);

                  horizontalSeperator->setFrameShape(QFrame::HLine);
                  horizontalSeperator->setFrameShadow(QFrame::Plain);
                  current_ans_layout->addWidget(horizontalSeperator);
              }
    break;
      }

       //Font Declaration

        //Font Declaration


    }

}

void iClassQueWindow::update_no_of_que_done(){
    sub_stats[ui->currentSubjectLabel->text()]+=1;
    QString overall_indicator;
    if(ui->currentSubjectLabel->text() =="English"){
        overall_indicator = "/100";
    }
    else{
         overall_indicator = "/50";
    }

    //ui->subjectStatisticsLabel->setText(QString("%1%2").arg(sub_stats[ui->currentSubjectLabel->text()]).arg(overall_indicator));
}

void iClassQueWindow::update_time(){
    countdown=countdown.addSecs(-1);
    ui->timerLabel->setText(countdown.toString());
    int time_spent;
    time_spent =fetch_seconds-(abs(countdown.secsTo(QTime::fromString("00:00:00","hh:mm:ss"))));
    ui->remainingTimeProgressBar->setValue(time_spent);
    if((((ui->remainingTimeProgressBar->text()).remove("%")).toInt()) >= 70){
        ui->remainingTimeProgressBar->setStyleSheet("QProgressBar::chunk{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ec0808, stop: 1 #504f4f)}");
    }

    // Just inputed... for marking after time is up
    if((((ui->remainingTimeProgressBar->text()).remove("%")).toInt()) >=100){
        timer->stop();
        markthem->start();
        markDialog->setText("Marking in Progress, Please Wait.");
        markDialog->exec();

    ui->stackedWidget_2->setCurrentWidget(ui->resultPage_use);
     ui->stackedWidget_3->setCurrentWidget(ui->resultPage_3);
    }
}

//Dialogthings Here...

IclassDialog::IclassDialog(QWidget *parent) :
    QDialog(parent),
    di (new Ui::Dialog)
{
   di->setupUi(this);
   di->applicationStack->setCurrentWidget(di->defaultPage);
   checked();
   initialize_combobox();
   di->normalModeTime->setText(di->timeExamModecomboBox_8->currentText());
}
IclassDialog::~IclassDialog()
{
    delete di;
}
void IclassDialog::on_examModeRadio_clicked()
{

   di->applicationStack->setCurrentWidget(di->exam);

}

void IclassDialog::on_siModeRadio_clicked()
{
  di->applicationStack->setCurrentWidget(di->dynamic);
  di->siMode->setCurrentWidget(di->defaultSimodeStack);
  di->dynamicRadio->setChecked(false);
  di->NormalRadio->setChecked(false);
  di->countDownRadio->setChecked(false);
}

void IclassDialog::on_pushButton_3_clicked()
{
   this->reject();
}

void IclassDialog::on_examOneButton_clicked()
{
    di->exam1comboBox->setEnabled(true);
    di->exam2comboBox_1->setEnabled(false);
    di->exam2comboBox_2->setEnabled(false);
    di->exam3comboBox_4->setEnabled(false);
    di->exam3comboBox_2->setEnabled(false);
    di->exam3comboBox_7->setEnabled(false);
}

void IclassDialog::on_examTwoButton_clicked()
{
    di->exam1comboBox->setEnabled(false);
    di->exam2comboBox_1->setEnabled(true);
    di->exam2comboBox_2->setEnabled(true);
    di->exam3comboBox_4->setEnabled(false);
    di->exam3comboBox_2->setEnabled(false);
    di->exam3comboBox_7->setEnabled(false);
}

void IclassDialog::on_examThreeButton_clicked()
{
    di->exam1comboBox->setEnabled(false);
    di->exam2comboBox_1->setEnabled(false);
    di->exam2comboBox_2->setEnabled(false);
    di->exam3comboBox_4->setEnabled(true);
    di->exam3comboBox_2->setEnabled(true);
    di->exam3comboBox_7->setEnabled(true);
    di->startPushButton->setEnabled(true);
}
void IclassDialog::checked(){
di->examOneButton->setChecked(true);
di->beginnerButton_7->setChecked(true);
on_examOneButton_clicked();
di->examOneButton_2->setChecked(true);
on_examOneButton_2_clicked();
}

void IclassDialog::on_NormalRadio_clicked()
{
    di->siMode->setCurrentWidget(di->normalSimode);
}

void IclassDialog::on_dynamicRadio_clicked()
{
    di->siMode->setCurrentWidget(di->dynamcStrebgthSImode);
}

void IclassDialog::initialize_combobox(){
    QFile avail_subjects("debug/subjects.dat");
    QList<QString>subject_list;

    if(!avail_subjects.exists()){
        qDebug()<<"File not found";//To use Message Box to alert
    }
    if(!avail_subjects.open(QIODevice::ReadOnly |QIODevice::Text)){

        qDebug()<<"error opening";
    }
    QTextStream text_stream(&avail_subjects);

    while(!text_stream.atEnd()){

        QString text_line;


        text_line = text_stream.readLine();
        subject_list.append(text_line);
        qDebug()<< text_line;
    }

 avail_subjects.close();

    di->exam1comboBox->addItems(subject_list);
    di->exam2comboBox_1->addItems(subject_list);
    di->exam2comboBox_2->addItems(subject_list);
    di->exam2comboBox_3->addItems(subject_list);
    di->exam2comboBox_4->addItems(subject_list);
    di->exam3comboBox_2->addItems(subject_list);
    di->exam3comboBox_3->addItems(subject_list);
    di->exam3comboBox_4->addItems(subject_list);
    di->exam3comboBox_5->addItems(subject_list);
    di->exam3comboBox_7->addItems(subject_list);
    di->exam3comboBox_8->addItems(subject_list);
    di->exam1comboBox_2->addItems(subject_list);
    di->subjectNormalComboBox->addItems(subject_list);

}

void IclassDialog::on_examOneButton_2_clicked()
{
    di->exam1comboBox_2->setEnabled(true);
    di->exam2comboBox_4->setEnabled(false);
    di->exam2comboBox_3->setEnabled(false);
    di->exam3comboBox_5->setEnabled(false);
    di->exam3comboBox_8->setEnabled(false);
    di->exam3comboBox_3->setEnabled(false);
}

void IclassDialog::on_examTwoButton_2_clicked()
{
    di->exam1comboBox_2->setEnabled(false);
    di->exam2comboBox_4->setEnabled(true);
    di->exam2comboBox_3->setEnabled(true);
    di->exam3comboBox_5->setEnabled(false);
    di->exam3comboBox_8->setEnabled(false);
    di->exam3comboBox_3->setEnabled(false);
}

void IclassDialog::on_examThreeButton_2_clicked()
{
    di->exam1comboBox_2->setEnabled(false);
    di->exam2comboBox_4->setEnabled(false);
    di->exam2comboBox_3->setEnabled(false);
    di->exam3comboBox_5->setEnabled(true);
    di->exam3comboBox_8->setEnabled(true);
    di->exam3comboBox_3->setEnabled(true);
}


void IclassDialog::on_pushButton_clicked()
{
    accept();
}

void iClassQueWindow::on_verticalSlider1_sliderReleased()
{
    qreal zoomfactor = (qreal(ui->verticalSlider1->value())/qreal(100));
    ui->que1webView->setZoomFactor(zoomfactor);
}

void iClassQueWindow::on_verticalSlider2_sliderReleased()
{
    qreal zoomfactor = (qreal(ui->verticalSlider2->value())/qreal(100));
    ui->que2webView->setZoomFactor(zoomfactor);
}

void iClassQueWindow::on_verticalSlider3_sliderReleased()
{
    qreal zoomfactor = (qreal(ui->verticalSlider3->value())/qreal(100));
    ui->que3webView->setZoomFactor(zoomfactor);
}

void iClassQueWindow::on_verticalSlider4_sliderReleased()
{
    qreal zoomfactor = (qreal(ui->verticalSlider4->value())/qreal(100));
    ui->que4webView->setZoomFactor(zoomfactor);
}

void iClassQueWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget_3->setCurrentWidget(ui->result_and_solution_page);
    QDir subjectdir(QString("debug/subjects/%1/question/2011").arg(sub[1]));
    QString file_que= subjectdir.absoluteFilePath(QString("%1.htm").arg(sub[1]));
    QFile file_sol(QString("%1/debug/subjects/%2/solution/2011.htm").arg(current_app_directory).arg(sub[1]));
    ui->que_webView->load(QUrl::fromLocalFile(file_que));
    ui->sol_webView->load(QUrl::fromLocalFile(file_sol.fileName()));
    ui->missed_que_textBrowser->setText(missed_que[1]);

}

void iClassQueWindow::on_pushButton_3_clicked()
{
     ui->stackedWidget_3->setCurrentWidget(ui->result_and_solution_page);
     QDir subjectdir(QString("debug/subjects/%1/question/2011").arg(sub[2]));
     QString file_que= subjectdir.absoluteFilePath(QString("%1.htm").arg(sub[2]));
     QFile file_sol(QString("%1/debug/subjects/%2/solution/2011.htm").arg(current_app_directory).arg(sub[2]));
     ui->que_webView->load(QUrl::fromLocalFile(file_que));
     ui->sol_webView->load(QUrl::fromLocalFile(file_sol.fileName()));
     ui->missed_que_textBrowser->setText(missed_que[2]);
}

void iClassQueWindow::on_pushButton_clicked()
{
     ui->stackedWidget_3->setCurrentWidget(ui->result_and_solution_page);
     QDir subjectdir(QString("debug/subjects/%1/question/2011").arg(sub[3]));
     QString file_que= subjectdir.absoluteFilePath(QString("%1.htm").arg(sub[3]));
     QFile file_sol(QString("%1/debug/subjects/%2/solution/2011.htm").arg(current_app_directory).arg(sub[3]));
     ui->que_webView->load(QUrl::fromLocalFile(file_que));
     ui->sol_webView->load(QUrl::fromLocalFile(file_sol.fileName()));
     ui->missed_que_textBrowser->setText(missed_que[3]);

}

void iClassQueWindow::on_pushButton_4_clicked()
{
     ui->stackedWidget_3->setCurrentWidget(ui->result_and_solution_page);
     QDir subjectdir(QString("debug/subjects/%1/question/2011").arg(sub[4]));
     QString file_que= subjectdir.absoluteFilePath(QString("%1.htm").arg(sub[4]));
     QFile file_sol(QString("%1/debug/subjects/%2/solution/2011.htm").arg(current_app_directory).arg(sub[4]));
     ui->que_webView->load(QUrl::fromLocalFile(file_que));
     ui->sol_webView->load(QUrl::fromLocalFile(file_sol.fileName()));
    ui->missed_que_textBrowser->setText(missed_que[4]);
}

void iClassQueWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget_3->setCurrentWidget(ui->resultPage_3);
}

void iClassQueWindow::on_horizontalSlider_sliderReleased()
{
    qreal zoomfactor = (qreal(ui->horizontalSlider->value())/qreal(100));
    ui->que_webView->setZoomFactor(zoomfactor);
}
