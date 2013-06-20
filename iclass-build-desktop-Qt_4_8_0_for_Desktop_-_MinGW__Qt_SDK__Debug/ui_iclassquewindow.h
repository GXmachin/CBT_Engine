/********************************************************************************
** Form generated from reading UI file 'iclassquewindow.ui'
**
** Created: Sat Oct 6 22:43:28 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICLASSQUEWINDOW_H
#define UI_ICLASSQUEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_iClassQueWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_2;
    QWidget *examPage_use;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *subjectradioGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *subject1Radio;
    QRadioButton *subject2Radio;
    QRadioButton *subject3Radio;
    QRadioButton *subject4Radio;
    QSpacerItem *horizontalSpacer;
    QGroupBox *GroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *timerLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *remainingTimeProgressBar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *currentSubjectLabel;
    QLabel *subjectStatisticsLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *submitExamPushBurtton;
    QStackedWidget *stackedWidget;
    QWidget *subject1Page;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSlider *verticalSlider1;
    QWebView *que1webView;
    QScrollArea *ans1ScrollArea;
    QWidget *ans1ScrollAreaWidgetContents;
    QWidget *subject2Page;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSlider *verticalSlider2;
    QScrollArea *ans2ScrollArea;
    QWidget *ans2ScrollAreaWidgetContents;
    QWebView *que2webView;
    QWidget *subject3Page;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSlider *verticalSlider3;
    QScrollArea *ans3ScrollArea;
    QWidget *ans3ScrollAreaWidgetContents;
    QWebView *que3webView;
    QWidget *subject4Page;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QSlider *verticalSlider4;
    QScrollArea *ans4ScrollArea;
    QWidget *ans4ScrollAreaWidgetContents;
    QWebView *que4webView;
    QWidget *resultPage;
    QGridLayout *gridLayout_2;
    QWidget *resultPage_use;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget_3;
    QWidget *result_and_solution_page;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLabel *label_12;
    QSlider *horizontalSlider;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTextBrowser *missed_que_textBrowser;
    QWebView *que_webView;
    QLabel *label_11;
    QWebView *sol_webView;
    QPushButton *pushButton_5;
    QWidget *subject2Page_3;
    QWidget *subject3Page_3;
    QWidget *subject4Page_3;
    QHBoxLayout *horizontalLayout_35;
    QWidget *resultPage_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_36;
    QLabel *Label_3;
    QSpacerItem *horizontalSpacer_26;
    QLabel *nameLabel;
    QTextBrowser *encourageinfoTextBrowser;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_27;
    QLabel *scoreLabel;
    QHBoxLayout *horizontalLayout_38;
    QLabel *sub1Label;
    QSpacerItem *horizontalSpacer_28;
    QLabel *score1Label;
    QHBoxLayout *horizontalLayout_39;
    QLabel *sub2Label;
    QSpacerItem *horizontalSpacer_29;
    QLabel *score2Label;
    QHBoxLayout *horizontalLayout_40;
    QLabel *sub3Label;
    QSpacerItem *horizontalSpacer_30;
    QLabel *score3Label;
    QHBoxLayout *horizontalLayout_41;
    QLabel *sub4Label;
    QSpacerItem *horizontalSpacer_31;
    QLabel *score4Label;
    QHBoxLayout *horizontalLayout_42;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_43;
    QLabel *agateLabel_3;
    QLabel *aggregateLabel;
    QFrame *line_5;
    QFrame *line_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_14;
    QLabel *label_6;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *iClassQueWindow)
    {
        if (iClassQueWindow->objectName().isEmpty())
            iClassQueWindow->setObjectName(QString::fromUtf8("iClassQueWindow"));
        iClassQueWindow->resize(722, 607);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/RevisionKit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        iClassQueWindow->setWindowIcon(icon);
        centralWidget = new QWidget(iClassQueWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        examPage_use = new QWidget();
        examPage_use->setObjectName(QString::fromUtf8("examPage_use"));
        gridLayout_3 = new QGridLayout(examPage_use);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        subjectradioGroupBox = new QGroupBox(examPage_use);
        subjectradioGroupBox->setObjectName(QString::fromUtf8("subjectradioGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(subjectradioGroupBox->sizePolicy().hasHeightForWidth());
        subjectradioGroupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        subjectradioGroupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(subjectradioGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        subject1Radio = new QRadioButton(subjectradioGroupBox);
        subject1Radio->setObjectName(QString::fromUtf8("subject1Radio"));

        horizontalLayout_3->addWidget(subject1Radio);

        subject2Radio = new QRadioButton(subjectradioGroupBox);
        subject2Radio->setObjectName(QString::fromUtf8("subject2Radio"));
        subject2Radio->setChecked(true);

        horizontalLayout_3->addWidget(subject2Radio);

        subject3Radio = new QRadioButton(subjectradioGroupBox);
        subject3Radio->setObjectName(QString::fromUtf8("subject3Radio"));

        horizontalLayout_3->addWidget(subject3Radio);

        subject4Radio = new QRadioButton(subjectradioGroupBox);
        subject4Radio->setObjectName(QString::fromUtf8("subject4Radio"));

        horizontalLayout_3->addWidget(subject4Radio);


        horizontalLayout_4->addWidget(subjectradioGroupBox);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        GroupBox = new QGroupBox(examPage_use);
        GroupBox->setObjectName(QString::fromUtf8("GroupBox"));
        GroupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(GroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        timerLabel = new QLabel(GroupBox);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        timerLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(timerLabel);


        horizontalLayout_4->addWidget(GroupBox);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(examPage_use);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        remainingTimeProgressBar = new QProgressBar(examPage_use);
        remainingTimeProgressBar->setObjectName(QString::fromUtf8("remainingTimeProgressBar"));
        remainingTimeProgressBar->setValue(0);

        horizontalLayout->addWidget(remainingTimeProgressBar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(examPage_use);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        currentSubjectLabel = new QLabel(examPage_use);
        currentSubjectLabel->setObjectName(QString::fromUtf8("currentSubjectLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentSubjectLabel->sizePolicy().hasHeightForWidth());
        currentSubjectLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(currentSubjectLabel);

        subjectStatisticsLabel = new QLabel(examPage_use);
        subjectStatisticsLabel->setObjectName(QString::fromUtf8("subjectStatisticsLabel"));
        sizePolicy1.setHeightForWidth(subjectStatisticsLabel->sizePolicy().hasHeightForWidth());
        subjectStatisticsLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(subjectStatisticsLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(594, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 2, 0, 1, 1);

        submitExamPushBurtton = new QPushButton(examPage_use);
        submitExamPushBurtton->setObjectName(QString::fromUtf8("submitExamPushBurtton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(submitExamPushBurtton->sizePolicy().hasHeightForWidth());
        submitExamPushBurtton->setSizePolicy(sizePolicy2);
        submitExamPushBurtton->setFont(font);

        gridLayout_3->addWidget(submitExamPushBurtton, 2, 1, 1, 1);

        stackedWidget = new QStackedWidget(examPage_use);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFont(font);
        subject1Page = new QWidget();
        subject1Page->setObjectName(QString::fromUtf8("subject1Page"));
        gridLayout_4 = new QGridLayout(subject1Page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(subject1Page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        verticalSlider1 = new QSlider(subject1Page);
        verticalSlider1->setObjectName(QString::fromUtf8("verticalSlider1"));
        verticalSlider1->setMinimum(10);
        verticalSlider1->setMaximum(210);
        verticalSlider1->setValue(100);
        verticalSlider1->setOrientation(Qt::Horizontal);
        verticalSlider1->setTickPosition(QSlider::TicksAbove);
        verticalSlider1->setTickInterval(10);

        horizontalLayout_5->addWidget(verticalSlider1);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        que1webView = new QWebView(subject1Page);
        que1webView->setObjectName(QString::fromUtf8("que1webView"));
        que1webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_4->addWidget(que1webView, 1, 0, 1, 1);

        ans1ScrollArea = new QScrollArea(subject1Page);
        ans1ScrollArea->setObjectName(QString::fromUtf8("ans1ScrollArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ans1ScrollArea->sizePolicy().hasHeightForWidth());
        ans1ScrollArea->setSizePolicy(sizePolicy3);
        ans1ScrollArea->setMinimumSize(QSize(208, 0));
        ans1ScrollArea->setWidgetResizable(true);
        ans1ScrollAreaWidgetContents = new QWidget();
        ans1ScrollAreaWidgetContents->setObjectName(QString::fromUtf8("ans1ScrollAreaWidgetContents"));
        ans1ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 16));
        ans1ScrollArea->setWidget(ans1ScrollAreaWidgetContents);

        gridLayout_4->addWidget(ans1ScrollArea, 0, 1, 2, 1);

        stackedWidget->addWidget(subject1Page);
        subject2Page = new QWidget();
        subject2Page->setObjectName(QString::fromUtf8("subject2Page"));
        gridLayout_7 = new QGridLayout(subject2Page);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(subject2Page);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        verticalSlider2 = new QSlider(subject2Page);
        verticalSlider2->setObjectName(QString::fromUtf8("verticalSlider2"));
        verticalSlider2->setMinimum(10);
        verticalSlider2->setMaximum(210);
        verticalSlider2->setValue(100);
        verticalSlider2->setSliderPosition(100);
        verticalSlider2->setOrientation(Qt::Horizontal);
        verticalSlider2->setTickPosition(QSlider::TicksAbove);
        verticalSlider2->setTickInterval(10);

        horizontalLayout_7->addWidget(verticalSlider2);


        gridLayout_7->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        ans2ScrollArea = new QScrollArea(subject2Page);
        ans2ScrollArea->setObjectName(QString::fromUtf8("ans2ScrollArea"));
        sizePolicy3.setHeightForWidth(ans2ScrollArea->sizePolicy().hasHeightForWidth());
        ans2ScrollArea->setSizePolicy(sizePolicy3);
        ans2ScrollArea->setMinimumSize(QSize(208, 0));
        ans2ScrollArea->setWidgetResizable(true);
        ans2ScrollAreaWidgetContents = new QWidget();
        ans2ScrollAreaWidgetContents->setObjectName(QString::fromUtf8("ans2ScrollAreaWidgetContents"));
        ans2ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 16));
        ans2ScrollArea->setWidget(ans2ScrollAreaWidgetContents);

        gridLayout_7->addWidget(ans2ScrollArea, 0, 1, 3, 1);

        que2webView = new QWebView(subject2Page);
        que2webView->setObjectName(QString::fromUtf8("que2webView"));
        que2webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_7->addWidget(que2webView, 1, 0, 2, 1);

        stackedWidget->addWidget(subject2Page);
        subject3Page = new QWidget();
        subject3Page->setObjectName(QString::fromUtf8("subject3Page"));
        gridLayout_8 = new QGridLayout(subject3Page);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(subject3Page);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        verticalSlider3 = new QSlider(subject3Page);
        verticalSlider3->setObjectName(QString::fromUtf8("verticalSlider3"));
        verticalSlider3->setMinimum(10);
        verticalSlider3->setMaximum(210);
        verticalSlider3->setValue(100);
        verticalSlider3->setOrientation(Qt::Horizontal);
        verticalSlider3->setTickPosition(QSlider::TicksAbove);
        verticalSlider3->setTickInterval(10);

        horizontalLayout_8->addWidget(verticalSlider3);


        gridLayout_8->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        ans3ScrollArea = new QScrollArea(subject3Page);
        ans3ScrollArea->setObjectName(QString::fromUtf8("ans3ScrollArea"));
        sizePolicy3.setHeightForWidth(ans3ScrollArea->sizePolicy().hasHeightForWidth());
        ans3ScrollArea->setSizePolicy(sizePolicy3);
        ans3ScrollArea->setMinimumSize(QSize(208, 0));
        ans3ScrollArea->setWidgetResizable(true);
        ans3ScrollAreaWidgetContents = new QWidget();
        ans3ScrollAreaWidgetContents->setObjectName(QString::fromUtf8("ans3ScrollAreaWidgetContents"));
        ans3ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 206, 439));
        ans3ScrollArea->setWidget(ans3ScrollAreaWidgetContents);

        gridLayout_8->addWidget(ans3ScrollArea, 0, 1, 3, 1);

        que3webView = new QWebView(subject3Page);
        que3webView->setObjectName(QString::fromUtf8("que3webView"));
        que3webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_8->addWidget(que3webView, 1, 0, 2, 1);

        stackedWidget->addWidget(subject3Page);
        subject4Page = new QWidget();
        subject4Page->setObjectName(QString::fromUtf8("subject4Page"));
        gridLayout_9 = new QGridLayout(subject4Page);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(subject4Page);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        verticalSlider4 = new QSlider(subject4Page);
        verticalSlider4->setObjectName(QString::fromUtf8("verticalSlider4"));
        verticalSlider4->setMinimum(10);
        verticalSlider4->setMaximum(210);
        verticalSlider4->setValue(100);
        verticalSlider4->setOrientation(Qt::Horizontal);
        verticalSlider4->setTickPosition(QSlider::TicksAbove);
        verticalSlider4->setTickInterval(10);

        horizontalLayout_9->addWidget(verticalSlider4);


        gridLayout_9->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        ans4ScrollArea = new QScrollArea(subject4Page);
        ans4ScrollArea->setObjectName(QString::fromUtf8("ans4ScrollArea"));
        sizePolicy3.setHeightForWidth(ans4ScrollArea->sizePolicy().hasHeightForWidth());
        ans4ScrollArea->setSizePolicy(sizePolicy3);
        ans4ScrollArea->setMinimumSize(QSize(208, 0));
        ans4ScrollArea->setWidgetResizable(true);
        ans4ScrollAreaWidgetContents = new QWidget();
        ans4ScrollAreaWidgetContents->setObjectName(QString::fromUtf8("ans4ScrollAreaWidgetContents"));
        ans4ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 16));
        ans4ScrollArea->setWidget(ans4ScrollAreaWidgetContents);

        gridLayout_9->addWidget(ans4ScrollArea, 0, 1, 2, 1);

        que4webView = new QWebView(subject4Page);
        que4webView->setObjectName(QString::fromUtf8("que4webView"));
        que4webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_9->addWidget(que4webView, 1, 0, 1, 1);

        stackedWidget->addWidget(subject4Page);
        resultPage = new QWidget();
        resultPage->setObjectName(QString::fromUtf8("resultPage"));
        gridLayout_2 = new QGridLayout(resultPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget->addWidget(resultPage);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 2);

        stackedWidget_2->addWidget(examPage_use);
        resultPage_use = new QWidget();
        resultPage_use->setObjectName(QString::fromUtf8("resultPage_use"));
        gridLayout_6 = new QGridLayout(resultPage_use);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        stackedWidget_3 = new QStackedWidget(resultPage_use);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        stackedWidget_3->setFont(font);
        result_and_solution_page = new QWidget();
        result_and_solution_page->setObjectName(QString::fromUtf8("result_and_solution_page"));
        gridLayout_10 = new QGridLayout(result_and_solution_page);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(result_and_solution_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_10->addWidget(label_4);

        label_12 = new QLabel(result_and_solution_page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label_12->setFont(font1);

        horizontalLayout_10->addWidget(label_12);

        horizontalSlider = new QSlider(result_and_solution_page);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(210);
        horizontalSlider->setSliderPosition(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider);

        label_13 = new QLabel(result_and_solution_page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_13->setFont(font2);

        horizontalLayout_10->addWidget(label_13);


        gridLayout_10->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(result_and_solution_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(61, 41));
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        missed_que_textBrowser = new QTextBrowser(result_and_solution_page);
        missed_que_textBrowser->setObjectName(QString::fromUtf8("missed_que_textBrowser"));
        missed_que_textBrowser->setMaximumSize(QSize(71, 16777215));

        verticalLayout_4->addWidget(missed_que_textBrowser);


        gridLayout_10->addLayout(verticalLayout_4, 0, 1, 4, 1);

        que_webView = new QWebView(result_and_solution_page);
        que_webView->setObjectName(QString::fromUtf8("que_webView"));
        que_webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_10->addWidget(que_webView, 1, 0, 1, 1);

        label_11 = new QLabel(result_and_solution_page);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_10->addWidget(label_11, 2, 0, 1, 1);

        sol_webView = new QWebView(result_and_solution_page);
        sol_webView->setObjectName(QString::fromUtf8("sol_webView"));
        sol_webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_10->addWidget(sol_webView, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(result_and_solution_page);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_10->addWidget(pushButton_5, 4, 1, 1, 1);

        stackedWidget_3->addWidget(result_and_solution_page);
        subject2Page_3 = new QWidget();
        subject2Page_3->setObjectName(QString::fromUtf8("subject2Page_3"));
        stackedWidget_3->addWidget(subject2Page_3);
        subject3Page_3 = new QWidget();
        subject3Page_3->setObjectName(QString::fromUtf8("subject3Page_3"));
        stackedWidget_3->addWidget(subject3Page_3);
        subject4Page_3 = new QWidget();
        subject4Page_3->setObjectName(QString::fromUtf8("subject4Page_3"));
        horizontalLayout_35 = new QHBoxLayout(subject4Page_3);
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        stackedWidget_3->addWidget(subject4Page_3);
        resultPage_3 = new QWidget();
        resultPage_3->setObjectName(QString::fromUtf8("resultPage_3"));
        gridLayout_5 = new QGridLayout(resultPage_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        Label_3 = new QLabel(resultPage_3);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        horizontalLayout_36->addWidget(Label_3);

        horizontalSpacer_26 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_26);

        nameLabel = new QLabel(resultPage_3);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_36->addWidget(nameLabel);


        gridLayout_5->addLayout(horizontalLayout_36, 1, 0, 1, 3);

        encourageinfoTextBrowser = new QTextBrowser(resultPage_3);
        encourageinfoTextBrowser->setObjectName(QString::fromUtf8("encourageinfoTextBrowser"));

        gridLayout_5->addWidget(encourageinfoTextBrowser, 1, 4, 11, 2);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_7 = new QLabel(resultPage_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_37->addWidget(label_7);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_27);

        scoreLabel = new QLabel(resultPage_3);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));

        horizontalLayout_37->addWidget(scoreLabel);


        gridLayout_5->addLayout(horizontalLayout_37, 3, 0, 1, 3);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        sub1Label = new QLabel(resultPage_3);
        sub1Label->setObjectName(QString::fromUtf8("sub1Label"));

        horizontalLayout_38->addWidget(sub1Label);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_28);

        score1Label = new QLabel(resultPage_3);
        score1Label->setObjectName(QString::fromUtf8("score1Label"));

        horizontalLayout_38->addWidget(score1Label);


        gridLayout_5->addLayout(horizontalLayout_38, 5, 0, 1, 3);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        sub2Label = new QLabel(resultPage_3);
        sub2Label->setObjectName(QString::fromUtf8("sub2Label"));

        horizontalLayout_39->addWidget(sub2Label);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_29);

        score2Label = new QLabel(resultPage_3);
        score2Label->setObjectName(QString::fromUtf8("score2Label"));

        horizontalLayout_39->addWidget(score2Label);


        gridLayout_5->addLayout(horizontalLayout_39, 6, 0, 1, 3);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        sub3Label = new QLabel(resultPage_3);
        sub3Label->setObjectName(QString::fromUtf8("sub3Label"));

        horizontalLayout_40->addWidget(sub3Label);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_30);

        score3Label = new QLabel(resultPage_3);
        score3Label->setObjectName(QString::fromUtf8("score3Label"));

        horizontalLayout_40->addWidget(score3Label);


        gridLayout_5->addLayout(horizontalLayout_40, 7, 0, 1, 3);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        sub4Label = new QLabel(resultPage_3);
        sub4Label->setObjectName(QString::fromUtf8("sub4Label"));

        horizontalLayout_41->addWidget(sub4Label);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_31);

        score4Label = new QLabel(resultPage_3);
        score4Label->setObjectName(QString::fromUtf8("score4Label"));

        horizontalLayout_41->addWidget(score4Label);


        gridLayout_5->addLayout(horizontalLayout_41, 8, 0, 1, 3);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_32);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        agateLabel_3 = new QLabel(resultPage_3);
        agateLabel_3->setObjectName(QString::fromUtf8("agateLabel_3"));

        horizontalLayout_43->addWidget(agateLabel_3);

        aggregateLabel = new QLabel(resultPage_3);
        aggregateLabel->setObjectName(QString::fromUtf8("aggregateLabel"));

        horizontalLayout_43->addWidget(aggregateLabel);


        horizontalLayout_42->addLayout(horizontalLayout_43);


        gridLayout_5->addLayout(horizontalLayout_42, 11, 0, 1, 3);

        line_5 = new QFrame(resultPage_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 10, 0, 1, 3);

        line_6 = new QFrame(resultPage_3);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy4);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_6, 4, 0, 1, 3);

        pushButton_2 = new QPushButton(resultPage_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_5->addWidget(pushButton_2, 5, 3, 1, 1);

        pushButton_3 = new QPushButton(resultPage_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 6, 3, 1, 1);

        pushButton = new QPushButton(resultPage_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 7, 3, 1, 1);

        pushButton_4 = new QPushButton(resultPage_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 8, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 9, 0, 1, 1);

        label_14 = new QLabel(resultPage_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/icons/revisionKit_screenShot.png")));
        label_14->setScaledContents(true);

        gridLayout_5->addWidget(label_14, 2, 1, 1, 1);

        label_6 = new QLabel(resultPage_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 0, 1, 1, 4);

        stackedWidget_3->addWidget(resultPage_3);

        gridLayout_6->addWidget(stackedWidget_3, 0, 0, 1, 1);

        stackedWidget_2->addWidget(resultPage_use);

        gridLayout->addWidget(stackedWidget_2, 0, 0, 1, 1);

        iClassQueWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(iClassQueWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 722, 21));
        iClassQueWindow->setMenuBar(menuBar);

        retranslateUi(iClassQueWindow);

        stackedWidget_2->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(iClassQueWindow);
    } // setupUi

    void retranslateUi(QMainWindow *iClassQueWindow)
    {
        iClassQueWindow->setWindowTitle(QApplication::translate("iClassQueWindow", "RevisionKit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        subjectradioGroupBox->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#00aa00;\">You can always Switch your Questions ata any time. Just Like how You will with Paper</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        subjectradioGroupBox->setTitle(QApplication::translate("iClassQueWindow", "CurrentSubject", 0, QApplication::UnicodeUTF8));
        subject1Radio->setText(QApplication::translate("iClassQueWindow", "English", 0, QApplication::UnicodeUTF8));
        subject2Radio->setText(QApplication::translate("iClassQueWindow", "Mathematics", 0, QApplication::UnicodeUTF8));
        subject3Radio->setText(QApplication::translate("iClassQueWindow", "Biology", 0, QApplication::UnicodeUTF8));
        subject4Radio->setText(QApplication::translate("iClassQueWindow", "Physics", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        GroupBox->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#00aa00;\">This Give a you a precise indication of the time left</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        GroupBox->setTitle(QApplication::translate("iClassQueWindow", "Time CountDown", 0, QApplication::UnicodeUTF8));
        timerLabel->setText(QApplication::translate("iClassQueWindow", "00:34:00", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("iClassQueWindow", "Remaining Time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        remainingTimeProgressBar->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#00aa00;\">This gives a visual representation of the time left. Usually for a Quick Pick</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("iClassQueWindow", "Current Progress", 0, QApplication::UnicodeUTF8));
        currentSubjectLabel->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        subjectStatisticsLabel->setText(QApplication::translate("iClassQueWindow", "(1/50)", 0, QApplication::UnicodeUTF8));
        submitExamPushBurtton->setText(QApplication::translate("iClassQueWindow", "Submit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stackedWidget->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Simply Click on any option you intend to select</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("iClassQueWindow", "Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        verticalSlider1->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Move the Slider to Zoom the Questions to Your taste. You can do this to every page.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ans1ScrollArea->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Simly Click on any options you intend to select</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("iClassQueWindow", "Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ans2ScrollArea->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Simply Click on any option you intend to select</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("iClassQueWindow", "Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ans3ScrollArea->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Simply Click on any option you intend to select</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("iClassQueWindow", "Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stackedWidget_3->setToolTip(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00aa00;\">Simply Click on any option you intend to select</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("iClassQueWindow", "Questions", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("iClassQueWindow", "-", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("iClassQueWindow", "+", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("iClassQueWindow", "Missed Questions", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("iClassQueWindow", "Answers", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("iClassQueWindow", "Back", 0, QApplication::UnicodeUTF8));
        Label_3->setText(QApplication::translate("iClassQueWindow", "Name:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("iClassQueWindow", "iClass Student", 0, QApplication::UnicodeUTF8));
        encourageinfoTextBrowser->setHtml(QApplication::translate("iClassQueWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#00aa00;\">You Had an aggregate of &quot;Aggregate&quot;. Well Done; however, We Believe you can still do Much better if you keep trying.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#00aa00;\">Play Around with other modes. For example under S.I mode(Self imrovement mode), you can use bothe Cynamic strength and count down to improve and increase your speed. It would also help in improving you"
                        "r Accuracy.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#55ff00;\">--Thank You for Using our Service</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#55ff00;\">Instant Materials</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("iClassQueWindow", "Subject", 0, QApplication::UnicodeUTF8));
        scoreLabel->setText(QApplication::translate("iClassQueWindow", "Score", 0, QApplication::UnicodeUTF8));
        sub1Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        score1Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        sub2Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        score2Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        sub3Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        score3Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        sub4Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        score4Label->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        agateLabel_3->setText(QApplication::translate("iClassQueWindow", "Aggregate", 0, QApplication::UnicodeUTF8));
        aggregateLabel->setText(QApplication::translate("iClassQueWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("iClassQueWindow", "View Solution", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("iClassQueWindow", "View Solution", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("iClassQueWindow", "View Solution", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("iClassQueWindow", "View Solution", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        label_6->setText(QApplication::translate("iClassQueWindow", "Convinient Learn Concept Result Sheet for your Just concluded UTME Mork Test                                                             ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class iClassQueWindow: public Ui_iClassQueWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICLASSQUEWINDOW_H
