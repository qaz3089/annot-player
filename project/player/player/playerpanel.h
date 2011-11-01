#ifndef PLAYERPANEL_H
#define PLAYERPANEL_H

// playerpanel.h
// 7/15/2011

#include <QWidget>

QT_BEGIN_NAMESPACE
class QSlider;
class QToolButton;
class QLabel;
class QLineEdit;
QT_END_NAMESPACE

class PlayerPanel: public QWidget
{
  Q_OBJECT
  typedef PlayerPanel Self;
  typedef QWidget Base;

public:
  explicit PlayerPanel(QWidget *parent = 0);

#define ADD_WIDGET(_type, _name) \
  public: _type *_name(); \
  private: _type *_name##_;

  ADD_WIDGET(QSlider, positionSlider)
  ADD_WIDGET(QSlider, volumeSlider)
  ADD_WIDGET(QToolButton, playButton)
  ADD_WIDGET(QToolButton, stopButton)
  ADD_WIDGET(QToolButton, openButton)
  ADD_WIDGET(QToolButton, nextFrameButton)
  ADD_WIDGET(QToolButton, togglePlayModeButton)
  ADD_WIDGET(QToolButton, toggleMiniModeButton)
  ADD_WIDGET(QToolButton, toggleAnnotationButton)
  ADD_WIDGET(QToolButton, userButton)
  ADD_WIDGET(QToolButton, positionButton)
  ADD_WIDGET(QLineEdit, lineEdit)
  ADD_WIDGET(QLineEdit, prefixLineEdit)
#undef ADD_WIDGET
};

#endif // PLAYERPANEL_H