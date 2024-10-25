#pragma once

#include <QLabel>
#include <QEvent>

class QMouseEvent;

namespace QtEditor
{
	class SmartLabel : public QLabel
	{
		Q_OBJECT
	public:
		explicit SmartLabel(const QString& p_text, QWidget* parent = nullptr);
		~SmartLabel() = default;

	signals:
		void DragStart(QMouseEvent* event);
		void Drag(QMouseEvent* event);
		void DragStop(QMouseEvent* event);

	protected:
		void mousePressEvent(QMouseEvent* event) override;
		void mouseMoveEvent(QMouseEvent* event) override;
		void mouseReleaseEvent(QMouseEvent* event) override;

		void enterEvent(QEnterEvent* event) override;
		void leaveEvent(QEvent* event) override;
	};
}
