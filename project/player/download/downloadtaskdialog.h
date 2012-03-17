#ifndef DOWNLOADTASKDIALOG_H
#define DOWNLOADTASKDIALOG_H

// downloadtaskdialog.h
// 2/18/2012

#include "module/qtext/dialog.h"
#include <QStringList>

QT_FORWARD_DECLARE_CLASS(QToolButton)

class TextView;
typedef QtExt::Dialog DownloadTaskDialogBase;
class DownloadTaskDialog : public DownloadTaskDialogBase
{
  Q_OBJECT
  typedef DownloadTaskDialog Self;
  typedef DownloadTaskDialogBase Base;

  TextView *textView_;
  QToolButton *urlButton_;

signals:
  void urlsAdded(const QStringList &urls, bool batch);
public:
  explicit DownloadTaskDialog(QWidget *parent = 0);

public slots:
  void setText(const QString &urls);
  void addText(const QString &url);

protected slots:
  void add();
  void paste();
  void showExampleUrl();
  void clear();
private:
  void createLayout();
};

#endif // DOWNLOADTASKDIALOG_H